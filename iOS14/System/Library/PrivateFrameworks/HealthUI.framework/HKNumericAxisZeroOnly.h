/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKNumericAxis.h>

@class NSString;

@interface HKNumericAxisZeroOnly : HKNumericAxis {

	NSString* _zeroLabel;

}

@property (nonatomic,readonly) NSString * zeroLabel;              //@synthesize zeroLabel=_zeroLabel - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(id)initWithZeroLabel:(id)arg1 ;
-(NSString *)zeroLabel;
@end

