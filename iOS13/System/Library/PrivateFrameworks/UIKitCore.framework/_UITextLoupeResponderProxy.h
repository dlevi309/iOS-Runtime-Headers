/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<_UITextLoupeResponderProxyDelegate>)delegate;
-(void)setDelegate:(id<_UITextLoupeResponderProxyDelegate>)arg1 ;
-(id)nextResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIResponder *)responder;
-(void)selectToHere:(id)arg1 ;
@end

