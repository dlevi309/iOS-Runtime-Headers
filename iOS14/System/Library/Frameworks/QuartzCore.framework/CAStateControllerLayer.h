/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;

@interface CAStateControllerLayer : NSObject {

	CALayer* _layer;
	CAState* _currentState;
	CAStateControllerUndo* _undoStack;
	NSMutableArray* _transitions;
	NSTimer* _nextTimer;
	CAState* _nextState;
	float _nextSpeed;

}

@property (readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) CAState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (readonly) CAStateControllerUndo * undoStack;              //@synthesize undoStack=_undoStack - In the implementation block
-(void)setCurrentState:(CAState *)arg1 ;
-(CALayer *)layer;
-(CAState *)currentState;
-(id)initWithLayer:(id)arg1 ;
-(void)addTransition:(id)arg1 ;
-(void)invalidate;
-(CAStateControllerUndo *)undoStack;
-(void)removeTransition:(id)arg1 ;
-(void)dealloc;
@end

