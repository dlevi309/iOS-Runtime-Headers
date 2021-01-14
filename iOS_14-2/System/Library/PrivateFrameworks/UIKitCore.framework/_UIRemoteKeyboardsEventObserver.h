/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIEventObserver.h>

@protocol _UIRemoteKeyboardsEventObserverDelegate;
@class NSMutableDictionary, NSString;

@interface _UIRemoteKeyboardsEventObserver : NSObject <_UIEventObserver> {

	NSMutableDictionary* _touchTracker;
	BOOL _keyboardIsVisible;
	BOOL _hasTextInputResponder;
	id<_UIRemoteKeyboardsEventObserverDelegate> _delegate;

}

@property (assign,nonatomic) BOOL hasTextInputResponder;                                               //@synthesize hasTextInputResponder=_hasTextInputResponder - In the implementation block
@property (assign,nonatomic,__weak) id<_UIRemoteKeyboardsEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL keyboardIsVisible;                                                   //@synthesize keyboardIsVisible=_keyboardIsVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateTrackingForTouch:(id)arg1 ;
-(void)peekApplicationEvent:(id)arg1 ;
-(BOOL)_shouldTrackTouch:(id)arg1 ;
-(BOOL)hasTextInputResponder;
-(id)init;
-(void)_startTrackingForTouch:(id)arg1 ;
-(BOOL)_isTrackingPencilTouch;
-(id<_UIRemoteKeyboardsEventObserverDelegate>)delegate;
-(void)setHasTextInputResponder:(BOOL)arg1 ;
-(void)_endTrackingForTouch:(id)arg1 ;
-(BOOL)keyboardIsVisible;
-(void)setDelegate:(id<_UIRemoteKeyboardsEventObserverDelegate>)arg1 ;
-(void)_markTrackingForTouch:(id)arg1 withGesture:(id)arg2 ;
-(long long)_preferredEventSourceForTouch:(id)arg1 tracking:(id)arg2 shouldUpdateOut:(BOOL*)arg3 ;
-(void)_gestureRecognizer:(id)arg1 didTransitionToState:(long long)arg2 ;
-(void)textInputResponderDidChange:(id)arg1 ;
-(void)_cancelTrackingForTouch:(id)arg1 ;
-(void)_invalidateTrackingForTouch:(id)arg1 ;
-(void)setKeyboardIsVisible:(BOOL)arg1 ;
-(void)_trackTouch:(id)arg1 ;
-(void)dealloc;
@end

