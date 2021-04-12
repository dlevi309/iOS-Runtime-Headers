/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKUserIdentityLookupInfo, CKDeviceToDeviceShareInvitationToken;

@interface PKCloudStoreZoneShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	NSString* _participantHandle;
	CKUserIdentityLookupInfo* _lookupInfo;
	CKDeviceToDeviceShareInvitationToken* _invitationToken;

}

@property (nonatomic,copy) NSString * participantHandle;                                          //@synthesize participantHandle=_participantHandle - In the implementation block
@property (nonatomic,retain) CKUserIdentityLookupInfo * lookupInfo;                               //@synthesize lookupInfo=_lookupInfo - In the implementation block
@property (nonatomic,retain) CKDeviceToDeviceShareInvitationToken * invitationToken;              //@synthesize invitationToken=_invitationToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(CKDeviceToDeviceShareInvitationToken *)invitationToken;
-(void)setInvitationToken:(CKDeviceToDeviceShareInvitationToken *)arg1 ;
-(id)description;
-(id)initWithParticipant:(id)arg1 ;
-(id)invitationTokenData;
-(id)lookupInfoData;
-(void)setParticipantHandle:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CKUserIdentityLookupInfo *)lookupInfo;
-(void)setLookupInfo:(CKUserIdentityLookupInfo *)arg1 ;
-(NSString *)participantHandle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

