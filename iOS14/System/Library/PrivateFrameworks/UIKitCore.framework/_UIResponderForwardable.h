/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIResponder, UIWindow;


@protocol _UIResponderForwardable <NSObject>
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (nonatomic,readonly) UIWindow * window; 
@required
-(void)_abandonForwardingRecord;
-(BOOL)_isAbandoningForwardingRecord;
-(id)_forwardingRecord;
-(UIResponder *)_responder;
-(SEL)_responderSelectorForPhase:(long long)arg1;
-(id)_mutableForwardingRecord;
-(long long)_forwardablePhase;
-(UIWindow *)window;
-(long long)_responderForwardableType;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
-(id)gestureRecognizers;
-(void)_setResponder:(id)arg1;
-(void)_setForwardablePhase:(long long)arg1;

@end

