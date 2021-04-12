/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDHAPAccessory, HMDService, HMDDataStream, NSMutableArray, HMDDataStreamSetup, NSString;

@interface HMDDataStreamController : NSObject <HMFLogging, HMDDataStreamDelegate> {

	BOOL _supportsDataStreamOverTCP;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _accessory;
	HMDService* _transferManagementService;
	HMDDataStream* _defaultDataStream;
	NSMutableArray* _activeProtocols;
	HMDDataStreamSetup* _setupInProgress;
	/*^block*/id _dataStreamFactory;
	NSString* _logIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                     //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDHAPAccessory * accessory;                         //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) HMDService * transferManagementService;              //@synthesize transferManagementService=_transferManagementService - In the implementation block
@property (nonatomic,retain) HMDDataStream * defaultDataStream;                          //@synthesize defaultDataStream=_defaultDataStream - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeProtocols;                           //@synthesize activeProtocols=_activeProtocols - In the implementation block
@property (assign,nonatomic) BOOL supportsDataStreamOverTCP;                             //@synthesize supportsDataStreamOverTCP=_supportsDataStreamOverTCP - In the implementation block
@property (nonatomic,retain) HMDDataStreamSetup * setupInProgress;                       //@synthesize setupInProgress=_setupInProgress - In the implementation block
@property (readonly) id dataStreamFactory;                                               //@synthesize dataStreamFactory=_dataStreamFactory - In the implementation block
@property (readonly) NSString * logIdentifier;                                           //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(NSString *)logIdentifier;
-(HMDDataStreamSetup *)setupInProgress;
-(void)setSetupInProgress:(HMDDataStreamSetup *)arg1 ;
-(void)registerForMessages;
-(void)dataStream:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataStreamDidClose:(id)arg1 ;
-(void)dataStreamDidOpen:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3 dataStreamFactory:(/*^block*/id)arg4 ;
-(void)handleAccessoryIsReachable:(id)arg1 ;
-(void)handleAccessoryIsNotReachable:(id)arg1 ;
-(void)_handleAccessoryIsReachable;
-(HMDService *)transferManagementService;
-(BOOL)canAcceptBulkSendListeners;
-(void)_cancelStreamTransportWithError:(id)arg1 ;
-(NSMutableArray *)activeProtocols;
-(BOOL)supportsDataStreamOverTCP;
-(HMDDataStream *)defaultDataStream;
-(void)_initiateStreamSetup;
-(id)_getActiveProtocolWithClass:(Class)arg1 ;
-(void)_continueStreamSetupWithResponse:(id)arg1 ;
-(void)_finishStreamTransport;
-(void)_generateStreamKeys;
-(id)dataStreamFactory;
-(void)setDefaultDataStream:(HMDDataStream *)arg1 ;
-(void)_createBulkStreamProtocol;
-(void)_resetDefaultDataStream;
-(id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3 ;
-(void)addBulkSendListener:(id)arg1 fileType:(id)arg2 ;
-(void)removeBulkSendListener:(id)arg1 ;
-(void)sendTargetControlWhoAmIWithIdentifier:(unsigned)arg1 ;
-(void)startBulkSendSessionForFileType:(id)arg1 queue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)setTransferManagementService:(HMDService *)arg1 ;
-(void)setActiveProtocols:(NSMutableArray *)arg1 ;
-(void)setSupportsDataStreamOverTCP:(BOOL)arg1 ;
@end

