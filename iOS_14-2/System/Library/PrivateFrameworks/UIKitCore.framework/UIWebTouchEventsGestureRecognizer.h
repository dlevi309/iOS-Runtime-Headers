/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol UIWebTouchEventsGestureRecognizerDelegate;
@class NSMapTable, NSMutableArray;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {

	id _touchTarget;
	SEL _touchAction;
	id<UIWebTouchEventsGestureRecognizerDelegate> _webTouchDelegate;
	BOOL _passedHitTest;
	BOOL _defaultPrevented;
	BOOL _dispatchingTouchEvents;
	BOOL _isPotentialTap;
	BOOL _wasExplicitlyCancelled;
	double _originalGestureDistance;
	double _originalGestureAngle;
	UIWebTouchEvent* _lastTouchEvent;
	NSMapTable* _activeTouchesByIdentifier;

}

@property (assign,getter=isDefaultPrevented,nonatomic) BOOL defaultPrevented;                            //@synthesize defaultPrevented=_defaultPrevented - In the implementation block
@property (nonatomic,readonly) const UIWebTouchEvent* lastTouchEvent; 
@property (getter=isDispatchingTouchEvents,nonatomic,readonly) BOOL dispatchingTouchEvents;              //@synthesize dispatchingTouchEvents=_dispatchingTouchEvents - In the implementation block
@property (nonatomic,readonly) NSMapTable * activeTouchesByIdentifier;                                   //@synthesize activeTouchesByIdentifier=_activeTouchesByIdentifier - In the implementation block
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) CGPoint locationInWindow; 
@property (nonatomic,readonly) NSMutableArray * touchLocations; 
@property (nonatomic,readonly) NSMutableArray * touchIdentifiers; 
@property (nonatomic,readonly) NSMutableArray * touchPhases; 
@property (nonatomic,readonly) BOOL inJavaScriptGesture; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) double rotation; 
+(void)initialize;
+(BOOL)_shouldDefaultToTouches;
-(void)_resetGestureRecognizer;
-(void)setDefaultPrevented:(BOOL)arg1 ;
-(void)_recordTouches:(id)arg1 type:(int)arg2 ;
-(double)rotation;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)performAction;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)scale;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)inJavaScriptGesture;
-(NSMutableArray *)touchIdentifiers;
-(BOOL)isDispatchingTouchEvents;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSMutableArray *)touchPhases;
-(void)_updateTapStateWithTouches:(id)arg1 ;
-(int)type;
-(void)reset;
-(NSMutableArray *)touchLocations;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3 ;
-(void)_updateTapStateWithTouches:(id)arg1 type:(int)arg2 ;
-(CGPoint)locationInWindow;
-(const UIWebTouchEvent*)lastTouchEvent;
-(void)cancel;
-(BOOL)isDefaultPrevented;
-(NSMapTable *)activeTouchesByIdentifier;
-(void)dealloc;
@end

