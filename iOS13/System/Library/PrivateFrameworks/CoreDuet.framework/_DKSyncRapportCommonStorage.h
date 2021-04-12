/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSyncRemoteStorage.h>
#import <libobjc.A.dylib/_DKSyncCommonClass.h>

@protocol OS_dispatch_source;
@class NSDictionary, _DKEventTypeResultStatsCounter, NSString, RPCompanionLinkClient, NSMutableDictionary, NSObject, NSMutableSet;

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncRemoteStorage, _DKSyncCommonClass> {

	BOOL _running;
	NSDictionary* _failIfAsleepOption;
	_DKEventTypeResultStatsCounter* _failIfAsleepStats;
	NSString* _deviceID;
	RPCompanionLinkClient* _client;
	NSMutableDictionary* _companionLinkClients;
	unsigned long long _outstandingRequestCount;
	NSObject*<OS_dispatch_source> _companionLinkClientsCleanupTimer;
	double _retryTimeout;
	NSMutableSet* _peerSourceDeviceIDsWithCompletedHandshakes;
	BOOL _isAvailable;

}

@property (assign,nonatomic) BOOL isAvailable;              //@synthesize isAvailable=_isAvailable - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)name;
-(void)start;
-(id)client;
-(BOOL)isAvailable;
-(long long)transportType;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDeviceID:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(void)registerRequestIDsWithClient:(id)arg1 ;
-(id)myDeviceID;
-(BOOL)isTransportActiveForPeer:(id)arg1 ;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)transformResponseError:(id)arg1 ;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2 ;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)removeAllClientsWithRetiring:(BOOL)arg1 ;
-(void)startRapport;
-(unsigned long long)_additionalFlagsForInternal;
-(void)handleInvalidation;
-(void)handleDeviceFound:(id)arg1 ;
-(void)handleDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)handleDeviceLost:(id)arg1 ;
-(void)handleActivateWithError:(id)arg1 ;
-(void)handleBeaconWithRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)handleFetchSourceDeviceIDWithRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setIsAvailable:(BOOL)arg1 ;
-(id)deviceForPeer:(id)arg1 ;
-(id)clientForPeer:(id)arg1 ;
-(void)removeClient:(id)arg1 forPeer:(id)arg2 retiring:(BOOL)arg3 ;
-(void)handleBeaconWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)handleFetchSourceDeviceIDWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)handleActivateCompanionLinkClient:(id)arg1 forPeer:(id)arg2 error:(id)arg3 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 client:(id)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)companionLinkCleanupTimerFired;
-(void)performCompanionLinkCleanup;
-(void)createOrRescheduleCompanionLinkClientsCleanupTimer;
-(void)setClient:(id)arg1 forPeer:(id)arg2 ;
-(void)sendBeaconToPeer:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

