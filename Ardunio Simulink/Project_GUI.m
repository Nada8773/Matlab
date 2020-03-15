function varargout = Project_GUI(varargin)



% PROJECT_GUI MATLAB code for Project_GUI.fig
%      PROJECT_GUI, by itself, creates a new PROJECT_GUI or raises the existing
%      singleton*.
%
%      H = PROJECT_GUI returns the handle to a new PROJECT_GUI or the handle to
%      the existing singleton*.
%
%      PROJECT_GUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in PROJECT_GUI.M with the given input arguments.
%
%      PROJECT_GUI('Property','Value',...) creates a new PROJECT_GUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Project_GUI_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Project_GUI_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Project_GUI

% Last Modified by GUIDE v2.5 03-Feb-2020 10:47:41

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Project_GUI_OpeningFcn, ...
                   'gui_OutputFcn',  @Project_GUI_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before Project_GUI is made visible.
function Project_GUI_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Project_GUI (see VARARGIN)

% Choose default command line output for Project_GUI
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Project_GUI wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Project_GUI_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
varargout{1} = handles.output;
% Get default command line output from handles structure
open_system('Project_Simulink.slx')
set_param('Project_Simulink','SimulationMode','external')
set_param('Project_Simulink','SimulationCommand','start')
set_param('Project_Simulink/Scope','open','on')


% --- Executes on button press in forward_button.
function forward_button_Callback(hObject, eventdata, handles)
% hObject    handle to forward_button (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
%ConstVal= num2str(1);
% Load the model .
          

    %, to see the changes in a model, update the diagram

set_param('Project_Simulink/Constant','value','1');
set_param('Project_Simulink','SimulationCommand','update');


        


% --- Executes on button press in left_button.
function left_button_Callback(hObject, eventdata, handles)
% hObject    handle to left_button (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


    %, to see the changes in a model, update the diagram
set_param('Project_Simulink/Constant','value','4');   
set_param('Project_Simulink','SimulationCommand','update');


% --- Executes on button press in right_button.
function right_button_Callback(hObject, eventdata, handles)
% hObject    handle to right_button (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

            % start the model
    %, to see the changes in a model, update the diagram
set_param('Project_Simulink/Constant','value','3');
set_param('Project_Simulink','SimulationCommand','update');



% --- Executes on button press in reverse_button.
function reverse_button_Callback(hObject, eventdata, handles)
% hObject    handle to reverse_button (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

            % start the model

    %, to see the changes in a model, update the diagram
set_param('Project_Simulink/Constant','value','2');
set_param('Project_Simulink','SimulationCommand','update');




% --- Executes on button press in stop_button.
function stop_button_Callback(hObject, eventdata, handles)
% hObject    handle to stop_button (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
            % start the model

    %, to see the changes in a model, update the diagram
set_param('Project_Simulink/Constant','value','5');
set_param('Project_Simulink','SimulationCommand','update');


% --- Executes on button press in linefollower_checkbox.
function linefollower_checkbox_Callback(hObject, eventdata, handles)
% hObject    handle to linefollower_checkbox (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
if handles.linefollower_checkbox.Value
     set_param('Project_Simulink/Constant','value','6');
else     
    set_param('Project_Simulink/Constant','value','5');
set_param('Project_Simulink','SimulationCommand','update');        
end    
    
    
% Hint: get(hObject,'Value') returns toggle state of linefollower_checkbox
