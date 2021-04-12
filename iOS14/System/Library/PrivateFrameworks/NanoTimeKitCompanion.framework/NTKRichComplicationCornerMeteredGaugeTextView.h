/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerGaugeTextView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerMeteredGaugeTextView : NTKRichComplicationCornerGaugeTextView {

	NTKRichComplicationImageView* _outerImageView;

}

@property (nonatomic,readonly) NTKRichComplicationImageView * outerImageView;              //@synthesize outerImageView=_outerImageView - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(long long)progressFillStyle;
-(id)init;
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(NTKRichComplicationImageView *)outerImageView;
@end

