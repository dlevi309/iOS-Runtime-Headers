/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKProfileIdentifier, NSArray, NSDictionary, CKShareParticipant;

@interface HDCloudSyncShareSetupMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSString* _syncCircleIdentifier;
	HKProfileIdentifier* _profileIdentifier;
	NSArray* _shareURLs;
	NSDictionary* _invitationTokensByShareURL;
	CKShareParticipant* _ownerParticipant;
	NSString* _ownerCloudKitEmailAddress;
	CKShareParticipant* _shareParticipant;

}

@property (nonatomic,copy,readonly) NSString * syncCircleIdentifier;                        //@synthesize syncCircleIdentifier=_syncCircleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HKProfileIdentifier * profileIdentifier;                //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * shareURLs;                                    //@synthesize shareURLs=_shareURLs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * invitationTokensByShareURL;              //@synthesize invitationTokensByShareURL=_invitationTokensByShareURL - In the implementation block
@property (nonatomic,copy,readonly) CKShareParticipant * ownerParticipant;                  //@synthesize ownerParticipant=_ownerParticipant - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerCloudKitEmailAddress;                   //@synthesize ownerCloudKitEmailAddress=_ownerCloudKitEmailAddress - In the implementation block
@property (nonatomic,copy,readonly) CKShareParticipant * shareParticipant;                  //@synthesize shareParticipant=_shareParticipant - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cloudSyncShareSetupMetadataWithCodableSharingSetupMetadata:(id)arg1 error:(id*)arg2 ;
-(HKProfileIdentifier *)profileIdentifier;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)syncCircleIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)shareURLs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CKShareParticipant *)ownerParticipant;
-(CKShareParticipant *)shareParticipant;
-(NSString *)ownerCloudKitEmailAddress;
-(id)codableSharingSetupMetadataWithError:(id*)arg1 ;
-(NSDictionary *)invitationTokensByShareURL;
-(id)initWithSyncCircleIdentifier:(id)arg1 profileIdentifier:(id)arg2 shareURLs:(id)arg3 ownerParticipant:(id)arg4 ownerCloudKitEmailAddress:(id)arg5 shareParticipant:(id)arg6 invitationTokensByShareURL:(id)arg7 ;
@end

