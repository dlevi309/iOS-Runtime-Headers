/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlStatusIndicator.h>

@protocol CAMVideoConfigurationStatusIndicatorDelegate;
@class UILabel;

@interface CAMVideoConfigurationStatusIndicator : CAMControlStatusIndicator {

	id<CAMVideoConfigurationStatusIndicatorDelegate> _touchDelegate;
	long long _resolution;
	long long _framerate;
	UILabel* __resolutionLabel;
	UILabel* __separatorLabel;
	UILabel* __framerateLabel;
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
@property (assign,nonatomic,__weak) id<CAMVideoConfigurationStatusIndicatorDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
@property (assign,nonatomic) long long resolution;                                                               //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) long long framerate;                                                                //@synthesize framerate=_framerate - In the implementation block
-(id)init;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateAppearance;
-(long long)resolution;
-(void)setResolution:(long long)arg1 ;
-(id<CAMVideoConfigurationStatusIndicatorDelegate>)touchDelegate;
-(void)setTouchDelegate:(id<CAMVideoConfigurationStatusIndicatorDelegate>)arg1 ;
-(long long)framerate;
-(void)setFramerate:(long long)arg1 ;
-(UILabel *)_separatorLabel;
-(CGSize)_separatorSize;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(CGSize)_resolutionSize;
-(CGSize)_framerateSize;
-(SCD_Struct_CA10)_labelGeometryForSize:(CGSize)arg1 originX:(double)arg2 originY:(double)arg3 ;
-(UILabel *)_resolutionLabel;
-(UILabel *)_framerateLabel;
-(void)_handleTouchAtLocation:(CGPoint)arg1 ;
-(id)_resolutionString;
-(id)_separatorString;
-(id)_framerateString;
-(CGSize)_sizingForLabel:(id)arg1 minWidth:(double)arg2 ;
-(void)set_resolutionSize:(CGSize)arg1 ;
-(void)set_separatorSize:(CGSize)arg1 ;
-(void)set_framerateSize:(CGSize)arg1 ;
-(BOOL)_togglesResolutionOrFramerateForTouchAtLocation:(CGPoint)arg1 ;
-(BOOL)_togglesResolutionForTouchAtLocation:(CGPoint)arg1 ;
-(BOOL)_togglesFramerateForTouchAtLocation:(CGPoint)arg1 ;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
@end

