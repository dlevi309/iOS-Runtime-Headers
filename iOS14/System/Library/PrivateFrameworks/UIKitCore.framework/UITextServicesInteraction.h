/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_removeShareController;
-(void)finishSetup;
-(void)_addShortcut:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_beginSessionWithType:(long long)arg1 sender:(id)arg2 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(UIResponder *)responder;
-(void)_removeShortcutController;
-(void)setResponderProxy:(_UITextServicesResponderProxy *)arg1 ;
-(_UITextServicesResponderProxy *)responderProxy;
@end

