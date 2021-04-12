/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, PKSharingIDSManagerDataSource;
@class NSHashTable, NSObject, NSMutableDictionary, IDSService, NSArray, NSString;

@interface PKSharingIDSManager : NSObject <IDSServiceDelegate> {

	NSHashTable* _delegates;
	os_unfair_lock_s _delegatesLock;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _completionHandlers;
	NSMutableDictionary* _sharingDestinations;
	IDSService* _service;
	id<PKSharingIDSManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) NSArray * delegates; 
@property (assign,nonatomic,__weak) id<PKSharingIDSManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)delegates;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)_registerListeners;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)_appleCashCapabilitiesRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)_sanitizedHandleWithFromID:(id)arg1 ;
-(void)sendRemoteRegistrationRequestResult:(unsigned long long)arg1 forHandle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)_cloudStoreZoneShareInvitationRequestRemoved:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)sendRemoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cloudStoreZoneShareInvitationResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(id<PKSharingIDSManagerDataSource>)dataSource;
-(id)_sharingDestinationWithHandle:(id)arg1 ;
-(void)requestCloudStoreZoneInvitationData:(id)arg1 forHandle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_remoteRegistrationRequestResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)setDataSource:(id<PKSharingIDSManagerDataSource>)arg1 ;
-(void)sendCloudStoreZoneInvitation:(id)arg1 forHandle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cloudStoreZoneShareInvitationRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_cloudStoreZoneShareInvitationRequestInvitationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_sendMessageWithProtobuf:(id)arg1 destination:(id)arg2 currentUser:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendCloudStoreZoneInvitationResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_remoteRegistrationRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_sendCloudStoreInvitationRequest:(id)arg1 currentUser:(id)arg2 type:(unsigned short)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithIDSService:(id)arg1 ;
-(void)sendAppleCashCapabilitiesRequestForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_appleCashCapabilitiesRequestResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)removeCloudStoreZoneInvitation:(id)arg1 forHandle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_idsIDForHandle:(id)arg1 ;
-(void)dealloc;
@end

