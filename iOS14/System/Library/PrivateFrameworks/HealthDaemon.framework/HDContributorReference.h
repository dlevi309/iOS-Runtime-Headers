/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSUUID;

@interface HDContributorReference : NSObject <NSSecureCoding, NSCopying> {

	long long _contributorType;
	NSNumber* _persistentID;
	NSUUID* _UUID;

}

@property (nonatomic,readonly) long long contributorType;                 //@synthesize contributorType=_contributorType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * UUID;                        //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contributorReferenceForPersistentID:(id)arg1 ;
+(id)contributorReferenceForNoContributor;
+(id)contributorReferenceForOtherUserWithUUID:(id)arg1 ;
+(id)contributorReferenceForPrimaryUser;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)persistentID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)contributorType;
-(id)_initWithContributorType:(long long)arg1 persistentID:(id)arg2 uuid:(id)arg3 ;
@end

