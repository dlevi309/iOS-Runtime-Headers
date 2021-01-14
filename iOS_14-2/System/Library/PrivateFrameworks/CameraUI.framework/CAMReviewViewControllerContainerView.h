/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CAMReviewViewControllerContainerView : UIView {

	UIView* _reviewView;

}

@property (nonatomic,retain) UIView * reviewView;              //@synthesize reviewView=_reviewView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setReviewView:(UIView *)arg1 ;
-(void)_commonCAMReviewViewControllerContainerViewInitialization;
-(UIView *)reviewView;
@end

