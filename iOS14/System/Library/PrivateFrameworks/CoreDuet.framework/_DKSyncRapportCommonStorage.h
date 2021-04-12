/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDeviceID:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(BOOL)isAvailable;
-(id)client;
-(id)init;
-(void)start;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)transformResponseError:(id)arg1 ;
-(long long)transportType;
-(id)name;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)setIsAvailable:(BOOL)arg1 ;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2 ;
-(BOOL)isTransportActiveForPeer:(id)arg1 ;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2 ;
-(void)dealloc;
-(id)myDeviceID;
@end

