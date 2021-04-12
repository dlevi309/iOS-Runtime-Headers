/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIWindow.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OFUIWindowDraggingSession, OFUIWindowDraggingGestureRecognizer, OFUIWindowDraggingAutoscroll, NSMutableDictionary, NSString;

@interface OFUIWindow : UIWindow <UIGestureRecognizerDelegate> {

	OFUIWindowDraggingSession* _draggingSession;
	OFUIWindowDraggingGestureRecognizer* _draggingGestureRecognizer;
	OFUIWindowDraggingAutoscroll* _draggingAutoscroll;
	NSMutableDictionary* _eventsTracking;
	BOOL _showTouches;

}

@property (nonatomic,retain) OFUIWindowDraggingSession * draggingSession;                                  //@synthesize draggingSession=_draggingSession - In the implementation block
@property (nonatomic,retain) OFUIWindowDraggingGestureRecognizer * draggingGestureRecognizer;              //@synthesize draggingGestureRecognizer=_draggingGestureRecognizer - In the implementation block
@property (nonatomic,retain) OFUIWindowDraggingAutoscroll * draggingAutoscroll;                            //@synthesize draggingAutoscroll=_draggingAutoscroll - In the implementation block
@property (assign,nonatomic) BOOL showTouches;                                                             //@synthesize showTouches=_showTouches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(BOOL)isDragging;
-(id)initWithCoder:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)handleDragging:(id)arg1 ;
-(void)cancelDragging;
-(void)setDraggingSession:(OFUIWindowDraggingSession *)arg1 ;
-(id)beginDraggingItems:(id)arg1 position:(CGPoint)arg2 source:(id)arg3 ;
-(OFUIWindowDraggingSession *)draggingSession;
-(OFUIWindowDraggingGestureRecognizer *)draggingGestureRecognizer;
-(void)setDraggingGestureRecognizer:(OFUIWindowDraggingGestureRecognizer *)arg1 ;
-(OFUIWindowDraggingAutoscroll *)draggingAutoscroll;
-(void)setDraggingAutoscroll:(OFUIWindowDraggingAutoscroll *)arg1 ;
-(BOOL)showTouches;
-(void)setShowTouches:(BOOL)arg1 ;
@end

