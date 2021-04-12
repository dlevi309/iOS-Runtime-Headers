/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, VTPeerRemoteConnectionDelegate;
@class NSString, NSObject, IDSService, NSMutableDictionary;

@interface VTPeerRemoteConnection : NSObject <IDSServiceDelegate> {

	NSString* _identifier;
	BOOL _requireNearbyPeer;
	NSObject*<OS_dispatch_queue> _queue;
	IDSService* _idsService;
	NSMutableDictionary* _completions;
	NSMutableDictionary* _responseClasses;
	id<VTPeerRemoteConnectionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_service;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)_pairedDevice;
-(id)initWithServiceIdentifier:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)serviceIdentifier;
-(id)_destination;
-(id)_account;
-(BOOL)hasPeer;
-(id)initWithServiceIdentifier:(id)arg1 requireNearbyPeer:(BOOL)arg2 ;
-(void)_invokeCompletionForIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_sendResponse:(id)arg1 forRequestId:(id)arg2 ;
-(id)_wrappedSendFailureError:(id)arg1 ;
-(BOOL)_hasNearbyPeer;
-(void)sendRequestType:(unsigned long long)arg1 nonWaking:(BOOL)arg2 ;
@end

