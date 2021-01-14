/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HKMinimumSizeView : UIView {

	double _minimumHeight;
	double _minimumWidth;

}

@property (assign,nonatomic) double minimumHeight;              //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) double minimumWidth;               //@synthesize minimumWidth=_minimumWidth - In the implementation block
-(double)minimumWidth;
-(void)setMinimumWidth:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
@end

