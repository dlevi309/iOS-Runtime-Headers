/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface PKCloudStoreZone : NSObject <NSSecureCoding, NSCopying> {

	NSString* _containerName;
	NSString* _zoneName;
	NSString* _ownerName;
	long long _scope;
	NSString* _zoneSubscriptionIdentifier;
	NSSet* _shareParticipants;

}

@property (nonatomic,copy) NSString * containerName;                             //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                                  //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy) NSString * ownerName;                                 //@synthesize ownerName=_ownerName - In the implementation block
@property (assign,nonatomic) long long scope;                                    //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSString * zoneSubscriptionIdentifier;              //@synthesize zoneSubscriptionIdentifier=_zoneSubscriptionIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * shareParticipants;                            //@synthesize shareParticipants=_shareParticipants - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(NSString *)zoneName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)recordZone;
-(void)setContainerName:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)containerName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ownerName;
-(id)initWithZoneID:(id)arg1 containerName:(id)arg2 scope:(long long)arg3 ;
-(id)zoneSubscription;
-(id)initWithZoneID:(id)arg1 containerDatabase:(id)arg2 ;
-(id)shareParticipantWithHandle:(id)arg1 ;
-(id)shareParticipantWithLookupInfo:(id)arg1 ;
-(void)setOwnerName:(NSString *)arg1 ;
-(NSString *)zoneSubscriptionIdentifier;
-(void)setZoneSubscriptionIdentifier:(NSString *)arg1 ;
-(NSSet *)shareParticipants;
-(void)setShareParticipants:(NSSet *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

