/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDProcessLaunchInfoLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _dataSyncState;
	double _timeSincePreviousProcessLaunch;
	double _timeSinceLaunchToDataSyncStateGood;

}

@property (nonatomic,copy,readonly) NSString * dataSyncState;                //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (readonly) double timeSincePreviousProcessLaunch;                  //@synthesize timeSincePreviousProcessLaunch=_timeSincePreviousProcessLaunch - In the implementation block
@property (readonly) double timeSinceLaunchToDataSyncStateGood;              //@synthesize timeSinceLaunchToDataSyncStateGood=_timeSinceLaunchToDataSyncStateGood - In the implementation block
+(id)uuid;
-(id)eventName;
-(NSString *)dataSyncState;
-(id)serializedEvent;
-(double)timeSincePreviousProcessLaunch;
-(double)timeSinceLaunchToDataSyncStateGood;
-(id)initWithDataSyncState:(id)arg1 timeSincePreviousProcessLaunch:(double)arg2 timeSinceLaunchToDataSyncStateGood:(double)arg3 ;
@end

