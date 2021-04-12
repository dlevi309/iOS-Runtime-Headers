/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPaused:(BOOL)arg1 ;
-(NTKRichComplicationImageView *)imageView;
-(id)_outerView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
@end

