/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <SilexVideo/SVVideoPlayButton.h>

@class AVBackgroundView;

@interface SVMaterialVideoPlayButton : SVVideoPlayButton {

	AVBackgroundView* _backgroundView;

}

@property (nonatomic,readonly) AVBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)accessibilityTraits;
-(AVBackgroundView *)backgroundView;
-(void)layoutSubviews;
-(void)updateBackgroundColor;
@end

