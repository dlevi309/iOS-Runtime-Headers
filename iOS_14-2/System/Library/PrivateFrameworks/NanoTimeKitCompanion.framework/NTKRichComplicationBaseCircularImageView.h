/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularImageView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationImageView* _imageView;

}

@property (nonatomic,retain) NTKRichComplicationImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)setImageView:(NTKRichComplicationImageView *)arg1 ;
-(NTKRichComplicationImageView *)imageView;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_updatePlatterColor;
@end

