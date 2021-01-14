/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerTextCustomView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerTextImageView : NTKRichComplicationCornerTextCustomView {

	NTKRichComplicationImageView* _imageView;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)_outerView;
-(void)setPaused:(BOOL)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_editingDidEnd;
@end

