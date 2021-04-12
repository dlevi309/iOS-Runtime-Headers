/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularFullBaseView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationRectangularFullImageView : NTKRichComplicationRectangularFullBaseView {

	NTKRichComplicationImageView* _imageView;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)content;
-(void)setPaused:(BOOL)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
@end

