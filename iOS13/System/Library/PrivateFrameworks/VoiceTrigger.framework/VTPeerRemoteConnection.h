/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id)arg1 ;
-(id)_service;
-(id)_account;
-(id)_destination;
-(id)serviceIdentifier;
-(id)_pairedDevice;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)initWithServiceIdentifier:(id)arg1 requireNearbyPeer:(BOOL)arg2 ;
-(void)_invokeCompletionForIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_sendResponse:(id)arg1 forRequestId:(id)arg2 ;
-(id)_wrappedSendFailureError:(id)arg1 ;
-(id)initWithServiceIdentifier:(id)arg1 ;
-(BOOL)hasPeer;
-(BOOL)_hasNearbyPeer;
-(void)sendRequestType:(unsigned long long)arg1 nonWaking:(BOOL)arg2 ;
@end

