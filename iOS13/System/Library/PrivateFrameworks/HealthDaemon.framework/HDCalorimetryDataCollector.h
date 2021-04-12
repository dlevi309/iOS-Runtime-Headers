/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector
+(BOOL)isNatalimeterAvailable;
+(BOOL)supportsCollectionForProfile:(id)arg1 ;
-(id)persistentIdentifier;
-(id)initWithProfile:(id)arg1 ;
-(Class)coreMotionDatumClass;
-(id)collectedTypes;
-(id)queue_newDataSource;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
@end

