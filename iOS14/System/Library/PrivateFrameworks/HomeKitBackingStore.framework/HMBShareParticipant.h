/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSUUID *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAccepted;
-(CKShareParticipant *)ckShareParticipant;
-(id)initWithCKShareParticipant:(id)arg1 clientIdentifier:(id)arg2 ;
-(HMBShareInvitation *)pendingInvitation;
-(void)setPendingInvitation:(HMBShareInvitation *)arg1 ;
-(HMBShareUserID *)cloudShareID;
-(BOOL)hasWriteAccess;
@end

