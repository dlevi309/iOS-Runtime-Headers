/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKPeerPaymentContactResolver, PKPaymentWebService, NSObject, NSHashTable, NSDictionary, NSArray, PKPaymentPass;

@interface PKSharedCredentialsGroupController : NSObject {

	PKPeerPaymentContactResolver* _contactResolver;
	PKPaymentWebService* _webService;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _delegates;
	os_unfair_lock_s _delegateLock;
	NSDictionary* _sharedCredentialsForCredential;
	NSDictionary* _invitationReceiptsForCredential;
	NSDictionary* _credentialForIdentifier;
	BOOL _canSendInvitation;
	NSArray* _groups;
	PKPaymentPass* _pass;

}

@property (nonatomic,readonly) NSArray * groups;                    //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) BOOL canSendInvitation;              //@synthesize canSendInvitation=_canSendInvitation - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                //@synthesize pass=_pass - In the implementation block
-(NSArray *)groups;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)parseCredentialsOnPass:(id)arg1 ;
-(void)didUpdateGroups;
-(void)updateGroupsWithCredential:(id)arg1 ;
-(id)initWithPass:(id)arg1 contactResolver:(id)arg2 webService:(id)arg3 queue:(id)arg4 ;
-(id)contactForGroup:(id)arg1 ;
-(void)fetchContactForGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)revokeGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)canSendInvitation;
@end

