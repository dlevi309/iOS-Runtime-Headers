/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

