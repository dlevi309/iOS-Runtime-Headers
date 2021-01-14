/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerGaugeCustomView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerGaugeImageView : NTKRichComplicationCornerGaugeCustomView {

	NTKRichComplicationImageView* _imageView;

}

@property (nonatomic,readonly) NTKRichComplicationImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(NTKRichComplicationImageView *)imageView;
-(id)_outerView;
-(void)setPaused:(BOOL)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
@end

