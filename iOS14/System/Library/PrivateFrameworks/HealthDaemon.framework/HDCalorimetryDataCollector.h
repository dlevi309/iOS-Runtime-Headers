/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector
+(BOOL)isNatalimeterAvailable;
+(BOOL)isCoreMotionCaloriePushModelEnabled;
+(BOOL)supportsCollectionForProfile:(id)arg1 ;
-(id)collectedTypes;
-(id)initWithProfile:(id)arg1 ;
-(Class)coreMotionDatumClass;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(id)persistentIdentifier;
-(id)queue_newDataSource;
@end

