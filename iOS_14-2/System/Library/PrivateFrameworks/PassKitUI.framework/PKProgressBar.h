/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer;

@interface PKProgressBar : UIView {

	CAGradientLayer* _fillLayer;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
@end

