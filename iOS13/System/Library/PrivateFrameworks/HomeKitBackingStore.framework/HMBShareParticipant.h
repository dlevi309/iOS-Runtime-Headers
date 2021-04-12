/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBModelObjectStorage.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, CKShareParticipant, HMBShareInvitation, NSString, HMBShareUserID;

@interface HMBShareParticipant : HMFObject <HMBModelObjectStorage, NSCopying, NSSecureCoding> {

	NSUUID* _clientIdentifier;
	CKShareParticipant* _ckShareParticipant;
	HMBShareInvitation* _pendingInvitation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) CKShareParticipant * ckShareParticipant;              //@synthesize ckShareParticipant=_ckShareParticipant - In the implementation block
@property (copy) HMBShareInvitation * pendingInvitation;                        //@synthesize pendingInvitation=_pendingInvitation - In the implementation block
@property (copy,readonly) NSUUID * clientIdentifier;                            //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (copy,readonly) HMBShareUserID * cloudShareID; 
@property (readonly) BOOL hasWriteAccess; 
@property (readonly) BOOL hasAccepted; 
+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)clientIdentifier;
-(id)attributeDescriptions;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(CKShareParticipant *)ckShareParticipant;
-(id)initWithCKShareParticipant:(id)arg1 clientIdentifier:(id)arg2 ;
-(BOOL)hasAccepted;
-(HMBShareInvitation *)pendingInvitation;
-(void)setPendingInvitation:(HMBShareInvitation *)arg1 ;
-(HMBShareUserID *)cloudShareID;
-(BOOL)hasWriteAccess;
@end

