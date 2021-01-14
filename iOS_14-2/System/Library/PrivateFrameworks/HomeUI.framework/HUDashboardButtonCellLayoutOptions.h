/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUDashboardButtonCellLayoutOptions : HUGridCellLayoutOptions {

	double _horizontalPadding;
	double _verticalPadding;

}

@property (assign,nonatomic) double horizontalPadding;              //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) double verticalPadding;                //@synthesize verticalPadding=_verticalPadding - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(double)verticalPadding;
-(double)horizontalPadding;
-(void)setVerticalPadding:(double)arg1 ;
-(CGSize)dashboardButtonCellSizeForTitle:(id)arg1 forContentSizeCategory:(id)arg2 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

