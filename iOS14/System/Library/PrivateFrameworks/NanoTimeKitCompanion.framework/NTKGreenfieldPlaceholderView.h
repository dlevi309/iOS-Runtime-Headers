/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>
#import <libobjc.A.dylib/NTKComplicationImageView.h>

@protocol CLKMonochromeFilterProvider;
@class UIImageView, _NTKPieChartView, CLKImageProvider, UIColor, NSString;

@interface NTKGreenfieldPlaceholderView : UIView <CLKFullColorImageView, NTKComplicationImageView> {

	UIImageView* _iconView;
	_NTKPieChartView* _uncompletedPieChartView;
	BOOL _usesLegibility;
	id<CLKMonochromeFilterProvider> _filterProvider;
	CLKImageProvider* _imageProvider;
	UIColor* _color;
	UIColor* _overrideColor;

}

@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CLKImageProvider * imageProvider;                                   //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility;                                                //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                                            //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)color;
-(void)setAppIcon:(id)arg1 ;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(CLKImageProvider *)imageProvider;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(BOOL)usesLegibility;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
@end

