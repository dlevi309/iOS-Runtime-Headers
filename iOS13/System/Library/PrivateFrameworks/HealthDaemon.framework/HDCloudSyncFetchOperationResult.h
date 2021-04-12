/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCloudSyncOperationConfiguration, NSDictionary, HDCloudSyncZone, NSSet;

@interface HDCloudSyncFetchOperationResult : NSObject <NSCopying> {

	HDCloudSyncOperationConfiguration* _configuration;
	long long _status;
	NSDictionary* _zonesByIdentifier;
	HDCloudSyncZone* _primaryPushZone;

}

@property (nonatomic,readonly) HDCloudSyncOperationConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) long long status;                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDictionary * zonesByIdentifier;                               //@synthesize zonesByIdentifier=_zonesByIdentifier - In the implementation block
@property (nonatomic,readonly) HDCloudSyncZone * primaryPushZone;                              //@synthesize primaryPushZone=_primaryPushZone - In the implementation block
@property (nonatomic,readonly) NSSet * seizedZones; 
@property (nonatomic,readonly) NSSet * pullZones; 
@property (nonatomic,readonly) long long minimumSupportedProtocolVersion; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
-(HDCloudSyncOperationConfiguration *)configuration;
-(NSSet *)pullZones;
-(HDCloudSyncZone *)primaryPushZone;
-(NSDictionary *)zonesByIdentifier;
-(id)initWithStatus:(long long)arg1 configuration:(id)arg2 zonesByIdentifier:(id)arg3 ;
-(long long)minimumSupportedProtocolVersion;
-(id)_storeDescriptionForZone:(id)arg1 ;
-(NSSet *)seizedZones;
-(id)masterZoneForContainerID:(id)arg1 ;
@end

