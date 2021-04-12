/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface HKCurrentTimeChevronButton : UIButton {

	long long _chevronDirection;

}

@property (assign,nonatomic) long long chevronDirection;              //@synthesize chevronDirection=_chevronDirection - In the implementation block
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(void)_updateButtonAppearence;
-(CGRect)_squareRectWithDimension:(double)arg1 chevronDirection:(long long)arg2 ;
-(id)initWithChevronDirection:(long long)arg1 ;
-(void)setChevronDirection:(long long)arg1 ;
-(long long)chevronDirection;
@end

