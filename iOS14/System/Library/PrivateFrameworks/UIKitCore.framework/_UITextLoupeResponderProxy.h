/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIResponder.h>

@protocol _UITextLoupeResponderProxyDelegate;
@class UIResponder;

@interface _UITextLoupeResponderProxy : UIResponder {

	UIResponder* _responder;
	id<_UITextLoupeResponderProxyDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) UIResponder * responder;                                    //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<_UITextLoupeResponderProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_proxyWithResponder:(id)arg1 ;
-(id)nextResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id<_UITextLoupeResponderProxyDelegate>)delegate;
-(void)selectToHere:(id)arg1 ;
-(UIResponder *)responder;
-(void)setDelegate:(id<_UITextLoupeResponderProxyDelegate>)arg1 ;
@end

