/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <SilexVideo/SVButton.h>

@class AVBackgroundView;

@interface SXMaterialButton : SVButton {

	AVBackgroundView* _backgroundView;

}

@property (nonatomic,readonly) AVBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(AVBackgroundView *)backgroundView;
-(void)layoutSubviews;
@end

