/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)yValue;
-(id)allYValues;
-(long long)pointType;
-(NSDate *)date;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(NSNumber *)value;
-(id)initWithPoint:(CGPoint)arg1 pointType:(long long)arg2 ;
@end

