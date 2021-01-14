/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridBannerCellLayoutOptions : HUGridCellLayoutOptions {

	double _dismissButtonTrailingInset;
	double _dismissButtonTopInset;
	double _dismissButtonHeightAndWidth;

}

@property (assign,nonatomic) double dismissButtonTrailingInset;               //@synthesize dismissButtonTrailingInset=_dismissButtonTrailingInset - In the implementation block
@property (assign,nonatomic) double dismissButtonTopInset;                    //@synthesize dismissButtonTopInset=_dismissButtonTopInset - In the implementation block
@property (assign,nonatomic) double dismissButtonHeightAndWidth;              //@synthesize dismissButtonHeightAndWidth=_dismissButtonHeightAndWidth - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)dismissButtonTopInset;
-(double)dismissButtonTrailingInset;
-(double)dismissButtonHeightAndWidth;
-(void)setDismissButtonTrailingInset:(double)arg1 ;
-(void)setDismissButtonTopInset:(double)arg1 ;
-(void)setDismissButtonHeightAndWidth:(double)arg1 ;
@end

