/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CAMCameraViewControllerContainerView : UIView {

	UIView* _viewfinderView;
	UIView* _customOverlayView;
	UIView* _additionalContentView;

}

@property (nonatomic,retain) UIView * viewfinderView;                     //@synthesize viewfinderView=_viewfinderView - In the implementation block
@property (nonatomic,retain) UIView * customOverlayView;                  //@synthesize customOverlayView=_customOverlayView - In the implementation block
@property (nonatomic,retain) UIView * additionalContentView;              //@synthesize additionalContentView=_additionalContentView - In the implementation block
+(Class)layerClass;
-(UIView *)viewfinderView;
-(void)setCustomOverlayView:(UIView *)arg1 ;
-(UIView *)customOverlayView;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setAdditionalContentView:(UIView *)arg1 ;
-(void)_commonCAMCameraViewControllerContainerViewInitialization;
-(void)verifyViewOrdering;
-(UIView *)additionalContentView;
-(void)setViewfinderView:(UIView *)arg1 ;
@end

