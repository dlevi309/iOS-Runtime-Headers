/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@protocol NTKComplicationImageView;
@class NTKColoringLabel, UIView;

@interface NTKCircularSmallSimpleComplicationView : NTKCircularComplicationView {

	NTKColoringLabel* _label;
	UIView*<NTKComplicationImageView> _imageView;
	double _maxDynamicFontSize;

}

@property (nonatomic,retain) NTKColoringLabel * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView*<NTKComplicationImageView> imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double maxDynamicFontSize;                                //@synthesize maxDynamicFontSize=_maxDynamicFontSize - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(double)_imageScaleForTemplate:(id)arg1 forDevice:(id)arg2 ;
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)layoutSubviews;
-(void)setLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)label;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(double)maxDynamicFontSize;
-(void)_updateLabelsForFontChange;
-(void)_updateForTemplateChange;
-(double)_baselineOffsetForDynamicSize:(long long)arg1 ;
-(void)_updateLabelWithTextProvider:(id)arg1 ;
-(void)_updateImageViewWithImageProvider:(id)arg1 ;
-(void)updateLabelWithString:(id)arg1 ;
-(void)updateImageViewWithImage:(id)arg1 ;
-(void)setMaxDynamicFontSize:(double)arg1 ;
@end

