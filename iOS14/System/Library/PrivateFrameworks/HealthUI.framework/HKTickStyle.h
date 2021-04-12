/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKStrokeStyle.h>

@interface HKTickStyle : HKStrokeStyle {

	BOOL _shouldRenderMajorTickMarks;
	double _tickLength;
	long long _tickDirection;

}

@property (assign,nonatomic) double tickLength;                            //@synthesize tickLength=_tickLength - In the implementation block
@property (assign,nonatomic) long long tickDirection;                      //@synthesize tickDirection=_tickDirection - In the implementation block
@property (assign,nonatomic) BOOL shouldRenderMajorTickMarks;              //@synthesize shouldRenderMajorTickMarks=_shouldRenderMajorTickMarks - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)tickLength;
-(long long)tickDirection;
-(BOOL)shouldRenderMajorTickMarks;
-(void)setTickLength:(double)arg1 ;
-(void)setTickDirection:(long long)arg1 ;
-(void)setShouldRenderMajorTickMarks:(BOOL)arg1 ;
@end

