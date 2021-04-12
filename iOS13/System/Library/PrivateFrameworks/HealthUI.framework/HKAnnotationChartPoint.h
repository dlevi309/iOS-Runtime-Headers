/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface HKAnnotationChartPoint : NSObject <HKChartPoint> {

	NSDate* _date;
	NSNumber* _value;
	long long _pointType;

}

@property (nonatomic,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                    //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) long long pointType;                 //@synthesize pointType=_pointType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(NSDate *)date;
-(NSNumber *)value;
-(id)minYValue;
-(id)maxYValue;
-(id)yValue;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)initWithPoint:(CGPoint)arg1 pointType:(long long)arg2 ;
-(long long)pointType;
@end

