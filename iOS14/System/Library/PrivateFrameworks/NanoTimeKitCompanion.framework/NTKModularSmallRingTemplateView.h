/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@protocol NTKComplicationImageView;
@class UIView, CLKProgressProvider, NSNumber, NTKColoringImageView, NTKColoringLabel;

@interface NTKModularSmallRingTemplateView : NTKModularTemplateView {

	UIView*<NTKComplicationImageView> _imageView;
	float _level;
	CLKProgressProvider* _progressProvider;
	NSNumber* _progressUpdateToken;
	NTKColoringImageView* _stateRing;
	NTKColoringLabel* _label;

}

@property (nonatomic,retain) NTKColoringImageView * stateRing;              //@synthesize stateRing=_stateRing - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * label;                      //@synthesize label=_label - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(id)supportedTemplateClasses;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)_update;
-(void)setLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)label;
-(void)setIsXL:(BOOL)arg1 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateRingWithRingDescription:(id)arg1 ;
-(NTKColoringImageView *)stateRing;
-(void)_refreshRingImageWithRing:(id)arg1 ;
-(void)_refreshRingImage;
-(void)_configureContentSubviews;
-(void)updateRingWithProgressProvider:(id)arg1 ;
-(void)setStateRing:(NTKColoringImageView *)arg1 ;
@end

