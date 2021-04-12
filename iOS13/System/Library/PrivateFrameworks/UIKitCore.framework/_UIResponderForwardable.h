/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIResponder, UIWindow;


@protocol _UIResponderForwardable <NSObject>
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (nonatomic,readonly) UIWindow * window; 
@required
-(UIWindow *)window;
-(id)gestureRecognizers;
-(UIResponder *)_responder;
-(void)_setForwardablePhase:(long long)arg1;
-(void)_setResponder:(id)arg1;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(long long)arg1;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
-(BOOL)_isAbandoningForwardingRecord;
-(void)_abandonForwardingRecord;
-(id)_mutableForwardingRecord;
-(long long)_forwardablePhase;

@end

