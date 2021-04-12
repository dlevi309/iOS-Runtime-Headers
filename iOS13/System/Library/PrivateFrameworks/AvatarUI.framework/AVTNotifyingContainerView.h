/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AVTNotifyingContainerViewDelegate;
@interface AVTNotifyingContainerView : UIView {

	id<AVTNotifyingContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AVTNotifyingContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AVTNotifyingContainerViewDelegate>)delegate;
-(void)setDelegate:(id<AVTNotifyingContainerViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

