/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MTMaterialView, UIView;

@interface AFUIPasscodeBlurView : UIView {

	MTMaterialView* _materialView;
	UIView* _lightenSourceOverView;
	UIView* _plusDView;

}

@property (nonatomic,retain) MTMaterialView * materialView;               //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) UIView * lightenSourceOverView;              //@synthesize lightenSourceOverView=_lightenSourceOverView - In the implementation block
@property (nonatomic,retain) UIView * plusDView;                          //@synthesize plusDView=_plusDView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlusDView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(MTMaterialView *)materialView;
-(UIView *)plusDView;
-(void)setMaterialView:(MTMaterialView *)arg1 ;
-(void)_setPlusDBackgroundColorWithWeighting:(double)arg1 ;
-(UIView *)lightenSourceOverView;
-(void)setLightenSourceOverView:(UIView *)arg1 ;
@end

