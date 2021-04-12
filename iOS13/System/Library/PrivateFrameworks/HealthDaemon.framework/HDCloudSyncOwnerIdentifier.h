/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)ownerIdentifierForSyncContainer:(id)arg1 profile:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_databaseUUIDForProfile:(id)arg1 error:(id*)arg2 ;
+(id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3 ;
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cloudKitIdentifier;
-(id)initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3 ;
@end

