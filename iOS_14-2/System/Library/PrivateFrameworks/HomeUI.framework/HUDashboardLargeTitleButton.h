/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUDashboardNavigationButtonDelegate.h>

@class HUNavigationButtonLayoutOptions, HUWallpaperView, HUDashboardNavigationButton, UIButton, UIControl, HFWallpaperSlice, NSString;

@interface HUDashboardLargeTitleButton : UIView <HUDashboardNavigationButtonDelegate> {

	HUNavigationButtonLayoutOptions* _layoutOptions;
	HUWallpaperView* _containingWallpaperView;
	HUDashboardNavigationButton* _navigationButton;
	UIButton* _imageButton;

}

@property (nonatomic,readonly) HUDashboardNavigationButton * navigationButton;              //@synthesize navigationButton=_navigationButton - In the implementation block
@property (nonatomic,readonly) UIButton * imageButton;                                      //@synthesize imageButton=_imageButton - In the implementation block
@property (nonatomic,readonly) UIControl * button; 
@property (nonatomic,copy) HUNavigationButtonLayoutOptions * layoutOptions;                 //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice; 
@property (assign,nonatomic,__weak) HUWallpaperView * containingWallpaperView;              //@synthesize containingWallpaperView=_containingWallpaperView - In the implementation block
@property (nonatomic,copy) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(UIControl *)button;
-(id)initWithImage:(id)arg1 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)updateConstraints;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(HUNavigationButtonLayoutOptions *)layoutOptions;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)wallpaperContentsFrameDidChange;
-(void)setLayoutOptions:(HUNavigationButtonLayoutOptions *)arg1 ;
-(UIButton *)imageButton;
-(void)setContainingWallpaperView:(HUWallpaperView *)arg1 ;
-(CGRect)normalizedWallpaperRectForDashboardNavigationButton:(id)arg1 ;
-(HUDashboardNavigationButton *)navigationButton;
-(HUWallpaperView *)containingWallpaperView;
@end

