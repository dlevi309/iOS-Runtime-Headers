/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularStackContentTextView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularStackImageView : NTKRichComplicationCircularStackContentTextView {

	NTKRichComplicationImageView* _line1ImageView;

}

@property (nonatomic,retain) NTKRichComplicationImageView * line1ImageView;              //@synthesize line1ImageView=_line1ImageView - In the implementation block
-(void)setPaused:(BOOL)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)line1View;
-(id)line2TextProviderFromTemplate:(id)arg1 ;
-(NTKRichComplicationImageView *)line1ImageView;
-(void)setLine1ImageView:(NTKRichComplicationImageView *)arg1 ;
@end

