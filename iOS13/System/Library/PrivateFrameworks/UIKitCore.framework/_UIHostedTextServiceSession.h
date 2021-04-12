/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextServiceSession.h>

@protocol _UIHostedTextServiceSessionDelegate;
@interface _UIHostedTextServiceSession : _UITextServiceSession {

	id<_UIHostedTextServiceSessionDelegate> _delegate;

}

@property (assign,nonatomic) id<_UIHostedTextServiceSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)showServiceForType:(long long)arg1 withContext:(id)arg2 ;
+(id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
+(id)showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(id<_UIHostedTextServiceSessionDelegate>)delegate;
-(void)setDelegate:(id<_UIHostedTextServiceSessionDelegate>)arg1 ;
-(void)dismissTextServiceAnimated:(BOOL)arg1 ;
-(void)remoteSessionDidDismiss;
@end

