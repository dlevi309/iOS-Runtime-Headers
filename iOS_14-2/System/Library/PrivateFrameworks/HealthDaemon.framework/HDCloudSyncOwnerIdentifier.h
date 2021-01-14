/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface HDCloudSyncOwnerIdentifier : NSObject <NSCopying> {

	NSString* _deviceIdentifier;
	NSUUID* _databaseIdentifier;
	NSString* _ownerDifferentiator;
	NSString* _ownerIdentifierString;

}

@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) NSString * cloudKitIdentifier; 
+(BOOL)rollOwnerDifferentiatorAfterCloudSyncDisableForProfile:(id)arg1 error:(id*)arg2 ;
+(id)ownerIdentifierForSyncContainer:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)rollOwnerDifferentiatorForProfile:(id)arg1 reason:(id)arg2 error:(id*)arg3 ;
+(id)_databaseUUIDForProfile:(id)arg1 error:(id*)arg2 ;
+(id)deviceIDForContainer:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_canRollOwnerIdentifierForProfile:(id)arg1 ;
+(BOOL)_rollOwnerDifferentiatorForProfile:(id)arg1 reason:(id)arg2 error:(id*)arg3 ;
+(id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)cloudKitIdentifier;
-(id)initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3 ;
@end

