


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #ifndef RECMASHELLACTIONADAPTER_H
        #define RECMASHELLACTIONADAPTER_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RActionAdapter.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaShellActionAdapter : public RActionAdapter {

        public:
      
    // Destructor:
    
            ~REcmaShellActionAdapter();
        static RActionAdapter* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellActionAdapter* getSelfShell(const QString& fName, QScriptContext* context)
    ;
    
    
    // Constructors:
    
      REcmaShellActionAdapter(
                RGuiAction * guiAction
        = NULL
            );
        
    
    
      void beginEvent(
                
            );
        
    
    
      void setGraphicsView(
                RGraphicsView * arg1
            );
        
    
    
      void finishEvent(
                
            );
        
    
    
      void enterEvent(
                
            );
        
    
    
      void suspendEvent(
                
            );
        
    
    
      void resumeEvent(
                
            );
        
    
    
      void escapeEvent(
                
            );
        
    
    
      void keyPressEvent(
                QKeyEvent & arg1
            );
        
    
    
      void keyReleaseEvent(
                QKeyEvent & arg1
            );
        
    
    
      void mousePressEvent(
                RMouseEvent & arg1
            );
        
    
    
      void mouseMoveEvent(
                RMouseEvent & arg1
            );
        
    
    
      void mouseReleaseEvent(
                RMouseEvent & arg1
            );
        
    
    
      void mouseDoubleClickEvent(
                RMouseEvent & arg1
            );
        
    
    
      void wheelEvent(
                RWheelEvent & arg1
            );
        
    
    
      void tabletEvent(
                RTabletEvent & arg1
            );
        
    
    
      void swipeGestureEvent(
                QSwipeGesture & arg1
            );
        
    
    
      void panGestureEvent(
                QPanGesture & arg1
            );
        
    
    
      void pinchGestureEvent(
                QPinchGesture & arg1
            );
        
    
    
      void commandEvent(
                RCommandEvent & arg1
            );
        
    
    
      void commandEventPreview(
                RCommandEvent & arg1
            );
        
    
    
      void coordinateEvent(
                RCoordinateEvent & arg1
            );
        
    
    
      void coordinateEventPreview(
                RCoordinateEvent & arg1
            );
        
    
    
      void entityPickEvent(
                REntityPickEvent & arg1
            );
        
    
    
      void entityPickEventPreview(
                REntityPickEvent & arg1
            );
        
    
    
      void propertyChangeEvent(
                RPropertyEvent & arg1
            );
        
    
    
      void zoomChangeEvent(
                RGraphicsView & arg1
            );
        
    
    
      void updatePreview(
                
            );
        
    
    
      void applyOperation(
                
            );
        
    
  
        // methods of 1st level base class RAction:
        
      void terminate(
                
            );
        
    
      bool isTerminated(
                
            );
        
    
      void setOverride(
                
            );
        
    
      bool isOverride(
                
            );
        
    
      void setNoState(
                
            );
        
    
      bool hasNoState(
                
            );
        
    
      void setUniqueGroup(
                const QString & ug
            );
        
    
      QString getUniqueGroup(
                
            );
        
    
      void setOverrideBase(
                RAction * base
            );
        
    
      RAction * getOverrideBase(
                
            );
        
    
      RGuiAction * getGuiAction(
                
            );
        
    
      void setGuiAction(
                RGuiAction * guiAction
            );
        
    
      QList < RGraphicsScene * > getGraphicsScenes(
                
            );
        
    
      RDocument * getDocument(
                
            );
        
    
      RDocumentInterface * getDocumentInterface(
                
            );
        
    
      RStorage * getStorage(
                
            );
        
    
      void setDocumentInterface(
                RDocumentInterface * di
            );
        
    
      void setClickMode(
                RAction::ClickMode m
            );
        
    
      RAction::ClickMode getClickMode(
                
            );
        
    
      RVector snap(
                RMouseEvent & event
            );
        
    

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	QScriptValue __qtscript_self;
            };
            Q_DECLARE_METATYPE(REcmaShellActionAdapter*)
        
	#endif
    