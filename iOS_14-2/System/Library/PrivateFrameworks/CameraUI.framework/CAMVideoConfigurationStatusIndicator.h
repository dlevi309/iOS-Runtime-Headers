/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlStatusIndicator.h>

@protocol CAMVideoConfigurationStatusIndicatorDelegate;
@class UILabel, UIImageView;

@interface CAMVideoConfigurationStatusIndicator : CAMControlStatusIndicator {

	long long _layoutStyle;
	id<CAMVideoConfigurationStatusIndicatorDelegate> _touchDelegate;
	long long _resolution;
	long long _framerate;
	UILabel* __resolutionLabel;
	UILabel* __separatorLabel;
	UILabel* __framerateLabel;
	UIImageView* __borderImageView;
	CGSize __resolutionSize;
	CGSize __separatorSize;
	CGSize __framerateSize;

}

@property (nonatomic,readonly) UILabel * _resolutionLabel;                                                       //@synthesize _resolutionLabel=__resolutionLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _separatorLabel;                                                        //@synthesize _separatorLabel=__separatorLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _framerateLabel;                                                        //@synthesize _framerateLabel=__framerateLabel - In the implementation block
@property (assign,nonatomic) CGSize _resolutionSize;                                                             //@synthesize _resolutionSize=__resolutionSize - In the implementation block
@property (assign,nonatomic) CGSize _separatorSize;                                                              //@synthesize _separatorSize=__separatorSize - In the implementation block
@property (assign,nonatomic) CGSize _framerateSize;                                                              //@synthesize _framerateSize=__framerateSize - In the implementation block
@property (nonatomic,readonly) UIImageView * _borderImageView;                                                   //@synthesize _borderImageView=__borderImageView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                              //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic,__weak) id<CAMVideoConfigurationStatusIndicatorDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
@property (assign,nonatomic) long long resolution;                                                               //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) long long framerate;                                                                //@synthesize framerate=_framerate - In the implementation block
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)resolution;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)setTouchDelegate:(id<CAMVideoConfigurationStatusIndicatorDelegate>)arg1 ;
-(id<CAMVideoConfigurationStatusIndicatorDelegate>)touchDelegate;
-(CGSize)intrinsicContentSize;
-(UILabel *)_resolutionLabel;
-(void)set_framerateSize:(CGSize)arg1 ;
-(id)init;
-(UIImageView *)_borderImageView;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(long long)layoutStyle;
-(id)_separatorString;
-(void)setFramerate:(long long)arg1 ;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(long long)framerate;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(BOOL)_togglesResolutionOrFramerateForTouchAtLocation:(CGPoint)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)_resolutionSize;
-(CGSize)_framerateSize;
-(void)_handleTouchAtLocation:(CGPoint)arg1 ;
-(UILabel *)_framerateLabel;
-(void)layoutSubviews;
-(CGSize)_separatorSize;
-(BOOL)_togglesResolutionForTouchAtLocation:(CGPoint)arg1 ;
-(void)_updateAppearance;
-(void)set_resolutionSize:(CGSize)arg1 ;
-(BOOL)_togglesFramerateForTouchAtLocation:(CGPoint)arg1 ;
-(UILabel *)_separatorLabel;
-(SCD_Struct_CA10)_labelGeometryForSize:(CGSize)arg1 originX:(double)arg2 originY:(double)arg3 ;
-(void)set_separatorSize:(CGSize)arg1 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(id)_resolutionString;
-(void)setResolution:(long long)arg1 ;
-(CGSize)_sizingForLabel:(id)arg1 minWidth:(double)arg2 ;
-(id)_framerateString;
@end

