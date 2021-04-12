/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <SilexVideo/SVButton.h>

@class AVBackgroundView;

@interface SVMaterialButton : SVButton {

	AVBackgroundView* _backgroundView;

}

@property (nonatomic,readonly) AVBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(AVBackgroundView *)backgroundView;
-(void)layoutSubviews;
@end

