/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class AWDHomeKitDataModelMigration, NSString;

@interface HMDDataMigrationEvent : HMDLogEvent <HMDAWDLogEvent> {

	AWDHomeKitDataModelMigration* _metric;
	unsigned long long _migrationStart;
	unsigned long long _migrationEnd;

}

@property (nonatomic,readonly) AWDHomeKitDataModelMigration * metric;              //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationStart;                  //@synthesize migrationStart=_migrationStart - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationEnd;                    //@synthesize migrationEnd=_migrationEnd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uuid;
-(id)init;
-(AWDHomeKitDataModelMigration *)metric;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)migrationCompleted;
-(unsigned long long)migrationDurationInMilliseconds;
-(unsigned long long)migrationStart;
-(unsigned long long)migrationEnd;
@end

