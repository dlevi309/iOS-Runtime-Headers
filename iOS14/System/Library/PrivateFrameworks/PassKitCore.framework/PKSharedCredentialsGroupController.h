/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKPeerPaymentContactResolver, PKPaymentWebService, PKAppletSubcredential, NSObject, NSHashTable, NSArray, PKPaymentPass;

@interface PKSharedCredentialsGroupController : NSObject {

	PKPeerPaymentContactResolver* _contactResolver;
	PKPaymentWebService* _webService;
	PKAppletSubcredential* _credential;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _delegates;
	os_unfair_lock_s _delegateLock;
	BOOL _sharingEnabled;
	NSArray* _groups;
	PKPaymentPass* _pass;

}

@property (nonatomic,readonly) NSArray * groups;                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) NSArray * nonLocalGroups; 
@property (nonatomic,readonly) BOOL sharingEnabled;                   //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                  //@synthesize pass=_pass - In the implementation block
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)groups;
-(PKPaymentPass *)pass;
-(void)parseCredentialsOnPass:(id)arg1 ;
-(NSArray *)nonLocalGroups;
-(unsigned long long)numberOfOutstandingSharingSession;
-(void)immobilizerTokenCountWithCompletion:(/*^block*/id)arg1 ;
-(void)didUpdateGroups;
-(void)updateGroupsWithCredential:(id)arg1 ;
-(id)initWithPass:(id)arg1 contactResolver:(id)arg2 webService:(id)arg3 queue:(id)arg4 ;
-(id)contactForGroup:(id)arg1 ;
-(void)revokeGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchContactForGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)canSendInvitationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)sharingEnabled;
@end

