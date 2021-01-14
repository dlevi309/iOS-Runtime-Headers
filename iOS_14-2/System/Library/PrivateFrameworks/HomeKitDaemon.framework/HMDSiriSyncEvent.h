/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, NSString;

@interface HMDSiriSyncEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _duration;
	NSArray* _notificationReasons;
	unsigned long long _lastSyncedConfigurationVersion;
	unsigned long long _configurationVersion;
	unsigned long long _serverConfigurationVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSArray * notificationReasons;                                  //@synthesize notificationReasons=_notificationReasons - In the implementation block
@property (nonatomic,readonly) unsigned long long lastSyncedConfigurationVersion;              //@synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long configurationVersion;                        //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long serverConfigurationVersion;                  //@synthesize serverConfigurationVersion=_serverConfigurationVersion - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)syncRequestWithDuration:(unsigned long long)arg1 serverConfigurationVersion:(unsigned long long)arg2 configurationVersion:(unsigned long long)arg3 lastSyncedConfigurationVersion:(unsigned long long)arg4 notificationReasons:(id)arg5 ;
-(unsigned long long)configurationVersion;
-(unsigned long long)duration;
-(unsigned long long)lastSyncedConfigurationVersion;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithDuration:(unsigned long long)arg1 serverConfigurationVersion:(unsigned long long)arg2 configurationVersion:(unsigned long long)arg3 lastSyncedConfigurationVersion:(unsigned long long)arg4 notificationReasons:(id)arg5 ;
-(NSArray *)notificationReasons;
-(unsigned long long)serverConfigurationVersion;
@end

