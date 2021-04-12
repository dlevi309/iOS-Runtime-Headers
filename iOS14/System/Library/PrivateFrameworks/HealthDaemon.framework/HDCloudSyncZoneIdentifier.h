/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface HDCloudSyncZoneIdentifier : NSObject <NSCopying> {

	NSString* _containerIdentifier;
	CKRecordZoneID* _zoneIdentifier;
	long long _scope;
	long long _type;

}

@property (nonatomic,copy,readonly) NSString * containerIdentifier;               //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) CKRecordZoneID * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) long long scope;                                   //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) long long type;                                    //@synthesize type=_type - In the implementation block
+(id)identifierForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
+(long long)_typeForIdentifier:(id)arg1 ;
-(CKRecordZoneID *)zoneIdentifier;
-(long long)scope;
-(NSString *)containerIdentifier;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEquivalentToZone:(id)arg1 container:(id)arg2 ;
-(id)initForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
-(BOOL)isEquivalentIgnoringOwnerToZone:(id)arg1 container:(id)arg2 ;
-(id)initForZone:(id)arg1 container:(id)arg2 ;
@end

