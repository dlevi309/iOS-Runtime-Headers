/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_update;
-(NTKColoringLabel *)titleLabel;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)setTitleLabel:(NTKColoringLabel *)arg1 ;
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
-(void)setSubtitleLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)subtitleLabel;
-(void)_layoutContentView;
-(void)_updateLayoutForLabel:(id)arg1 baselineOffset:(double)arg2 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
@end

