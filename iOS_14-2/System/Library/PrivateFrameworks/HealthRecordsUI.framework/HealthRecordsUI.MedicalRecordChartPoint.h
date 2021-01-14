/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSString;

@interface HealthRecordsUI.MedicalRecordChartPoint : NSObject <HKChartPoint> {

	 chartableSet;
	 blockCoordinateInfo;
	 sortedYValues;

}

@property (readonly,nonatomic) NSString * description; 
-(id)userInfo;
-(id)init;
-(id)yValue;
-(NSString *)description;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
@end

