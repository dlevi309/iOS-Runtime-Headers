/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, HDCloudSyncZone, NSSet;

@interface HDCloudSyncCloudState : NSObject <NSCopying> {

	int _minimumSupportedProtocolVersion;
	NSDictionary* _zonesByIdentifier;
	NSArray* _targets;
	HDCloudSyncZone* _primaryPushZone;

}

@property (nonatomic,copy,readonly) NSDictionary * zonesByIdentifier;              //@synthesize zonesByIdentifier=_zonesByIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * targets;                             //@synthesize targets=_targets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pushTargets; 
@property (nonatomic,copy,readonly) NSArray * pullTargets; 
@property (nonatomic,readonly) HDCloudSyncZone * primaryPushZone;                  //@synthesize primaryPushZone=_primaryPushZone - In the implementation block
@property (nonatomic,readonly) NSSet * seizedZones; 
@property (nonatomic,readonly) NSSet * pullZones; 
@property (nonatomic,readonly) int minimumSupportedProtocolVersion;                //@synthesize minimumSupportedProtocolVersion=_minimumSupportedProtocolVersion - In the implementation block
-(id)detailedDescription;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(NSArray *)targets;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)pushTargets;
-(HDCloudSyncZone *)primaryPushZone;
-(NSDictionary *)zonesByIdentifier;
-(id)cloudStateByAddingZone:(id)arg1 ;
-(id)cloudStateByReplacingTargets:(id)arg1 ;
-(id)cloudStateByRemovingZones:(id)arg1 ;
-(id)initWithZonesByIdentifier:(id)arg1 targets:(id)arg2 ;
-(id)zonesForContainerID:(id)arg1 ;
-(id)cloudStateByAddingZones:(id)arg1 ;
-(id)initWithZones:(id)arg1 ;
-(id)unifiedSyncZoneForContainerID:(id)arg1 ;
-(id)masterZoneForContainerID:(id)arg1 ;
-(NSArray *)pullTargets;
-(id)initWithZones:(id)arg1 targets:(id)arg2 ;
-(int)minimumSupportedProtocolVersion;
-(id)_storeDescriptionForTarget:(id)arg1 ;
-(id)initWithZonesByIdentifier:(id)arg1 ;
-(id)cloudStateWithTargets:(id)arg1 ;
-(NSSet *)seizedZones;
-(NSSet *)pullZones;
-(id)zoneForRecordID:(id)arg1 containerIdentifier:(id)arg2 ;
@end

