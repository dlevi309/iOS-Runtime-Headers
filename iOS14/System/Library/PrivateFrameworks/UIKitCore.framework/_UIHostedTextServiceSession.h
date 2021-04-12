/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)remoteSessionDidDismiss;
-(void)setDelegate:(id<_UIHostedTextServiceSessionDelegate>)arg1 ;
-(void)dismissTextServiceAnimated:(BOOL)arg1 ;
@end

