/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface HDCloudSyncZoneIdentifier : NSObject <NSCopying> {

	NSString* _containerIdentifier;
	CKRecordZoneID* _zoneIdentifier;
	long long _scope;

}

@property (nonatomic,copy,readonly) NSString * containerIdentifier;               //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) CKRecordZoneID * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) long long scope;                                   //@synthesize scope=_scope - In the implementation block
+(id)identifierForZone:(id)arg1 container:(id)arg2 ;
+(id)identifierForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)containerIdentifier;
-(long long)scope;
-(CKRecordZoneID *)zoneIdentifier;
-(id)initForZone:(id)arg1 container:(id)arg2 ;
-(id)initForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
@end

