/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextInteraction.h>
#import <UIKitCore/_UITextServicesResponderProxyDelegate.h>

@class _UITextServiceSession, _UITextServicesResponderProxy, UIResponder;

@interface UITextServicesInteraction : UITextInteraction <_UITextServicesResponderProxyDelegate> {

	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;
	_UITextServicesResponderProxy* _responderProxy;

}

@property (nonatomic,retain) _UITextServicesResponderProxy * responderProxy;              //@synthesize responderProxy=_responderProxy - In the implementation block
@property (nonatomic,readonly) UIResponder * responder; 
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIResponder *)responder;
-(void)_share:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)finishSetup;
-(_UITextServicesResponderProxy *)responderProxy;
-(void)setResponderProxy:(_UITextServicesResponderProxy *)arg1 ;
-(void)_beginSessionWithType:(long long)arg1 sender:(id)arg2 ;
-(void)_removeShareController;
-(void)_removeShortcutController;
@end

