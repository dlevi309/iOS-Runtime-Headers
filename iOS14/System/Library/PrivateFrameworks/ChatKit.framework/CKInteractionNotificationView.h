/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKInteractionNotificationViewDelegate;
@interface CKInteractionNotificationView : UIView {

	id<CKInteractionNotificationViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKInteractionNotificationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CKInteractionNotificationViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<CKInteractionNotificationViewDelegate>)arg1 ;
@end

