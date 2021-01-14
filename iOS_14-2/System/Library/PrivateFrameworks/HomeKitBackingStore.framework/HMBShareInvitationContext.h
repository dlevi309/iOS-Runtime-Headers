/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, CKUserIdentityLookupInfo;

@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding> {

	BOOL _shouldGrantWriteAccess;
	NSUUID* _participantClientIdentifier;
	CKUserIdentityLookupInfo* _lookupInfo;

}

@property (readonly) CKUserIdentityLookupInfo * lookupInfo;                  //@synthesize lookupInfo=_lookupInfo - In the implementation block
@property (copy,readonly) NSUUID * participantClientIdentifier;              //@synthesize participantClientIdentifier=_participantClientIdentifier - In the implementation block
@property (assign) BOOL shouldGrantWriteAccess;                              //@synthesize shouldGrantWriteAccess=_shouldGrantWriteAccess - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CKUserIdentityLookupInfo *)lookupInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 lookupInfo:(id)arg2 ;
-(NSUUID *)participantClientIdentifier;
-(BOOL)shouldGrantWriteAccess;
-(void)setShouldGrantWriteAccess:(BOOL)arg1 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 emailAddress:(id)arg2 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 phoneNumber:(id)arg2 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 cloudShareID:(id)arg2 ;
@end

