/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@protocol NTKComplicationImageView;
@class NTKOneColumnModularSmallLayoutAttributes, NTKColoringLabel, UIView;

@interface NTKModularSmallStackTemplateView : NTKModularTemplateView {

	NTKOneColumnModularSmallLayoutAttributes* _layoutAttributes;
	NTKColoringLabel* _titleLabel;
	NTKColoringLabel* _subtitleLabel;
	UIView*<NTKComplicationImageView> _imageView;

}

@property (nonatomic,retain) NTKColoringLabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView*<NTKComplicationImageView> imageView;              //@synthesize imageView=_imageView - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(NTKColoringLabel *)titleLabel;
-(void)setSubtitleLabel:(NTKColoringLabel *)arg1 ;
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
-(void)setTitleLabel:(NTKColoringLabel *)arg1 ;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)_layoutContentView;
-(NTKColoringLabel *)subtitleLabel;
-(void)_update;
-(void)_updateLayoutForLabel:(id)arg1 baselineOffset:(double)arg2 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
@end

