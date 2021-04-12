/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBounds:(CGRect)arg1 ;
-(void)setDelegate:(id<AVTNotifyingContainerViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

