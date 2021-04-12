/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(id)userInfo;
-(id)minYValue;
-(id)maxYValue;
-(id)yValue;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
@end

