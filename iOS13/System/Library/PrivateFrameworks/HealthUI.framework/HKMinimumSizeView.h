/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)minimumWidth;
-(void)setMinimumWidth:(double)arg1 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
@end

