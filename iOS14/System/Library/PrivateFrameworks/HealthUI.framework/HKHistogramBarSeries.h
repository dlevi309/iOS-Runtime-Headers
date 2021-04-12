/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKBarSeries.h>

@interface HKHistogramBarSeries : HKBarSeries {

	unsigned long long _numberOfColumns;

}

@property (assign,nonatomic) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(unsigned long long)numberOfColumns;
-(double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(CGRect)arg2 minimumSpacing:(double)arg3 ;
-(id)initWithFillStyle:(id)arg1 numberOfColumns:(unsigned long long)arg2 cornerRadii:(CGSize)arg3 ;
@end

