/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerCoordinatorDelegate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerDelegate.h>
#import <libobjc.A.dylib/HAP2StorageDelegate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerBrowserPrivate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerBrowser.h>
@class NSArray;


@protocol HAP2AccessoryServerBrowser <NSObject>
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerBrowserDelegate> delegate; 
@property (getter=isDiscovering,nonatomic,readonly) BOOL discovering; 
@property (nonatomic,copy,readonly) NSArray * unpairedAccessoryServers; 
@property (nonatomic,copy,readonly) NSArray * pairedAccessoryServers; 
@required
-(NSArray *)unpairedAccessoryServers;
-(void)stopDiscovering;
-(id<HAP2AccessoryServerBrowserDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isDiscovering;
-(void)stopConfirmingPairedAccessoryReachability;
-(void)startDiscovering;
-(NSArray *)pairedAccessoryServers;
-(void)startConfirmingPairedAccessoryReachability;

@end


@protocol HAP2AccessoryServerBrowserDelegate, HAP2Storage;
@class NSArray, NSMutableArray, HAP2PropertyLock, NSOperationQueue, HAP2SerializedOperationQueue, NSMapTable, HAP2AccessoryServerBrowserOperation, NSString;

@interface HAP2AccessoryServerBrowser : HAP2LoggingObject <HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDelegate, HAP2StorageDelegate, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerBrowser> {

	BOOL _discovering;
	id<HAP2AccessoryServerBrowserDelegate> _delegate;
	NSMutableArray* _browserOperationQueue;
	id<HAP2Storage> _storage;
	NSMutableArray* _liveUnpairedAccessoryServers;
	NSMutableArray* _livePairedAccessoryServers;
	HAP2PropertyLock* _propertyLock;
	NSArray* _coordinatorInfo;
	NSOperationQueue* _operationQueue;
	HAP2SerializedOperationQueue* _workQueue;
	NSMapTable* _weakOperationQueuesByDeviceID;

}

@property (nonatomic,readonly) HAP2PropertyLock * propertyLock;                                     //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,readonly) NSArray * coordinatorInfo;                                           //@synthesize coordinatorInfo=_coordinatorInfo - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) HAP2SerializedOperationQueue * workQueue;                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * liveUnpairedAccessoryServers;                         //@synthesize liveUnpairedAccessoryServers=_liveUnpairedAccessoryServers - In the implementation block
@property (nonatomic,retain) NSMutableArray * livePairedAccessoryServers;                           //@synthesize livePairedAccessoryServers=_livePairedAccessoryServers - In the implementation block
@property (nonatomic,readonly) NSMapTable * weakOperationQueuesByDeviceID;                          //@synthesize weakOperationQueuesByDeviceID=_weakOperationQueuesByDeviceID - In the implementation block
@property (nonatomic,readonly) NSMutableArray * browserOperationQueue;                              //@synthesize browserOperationQueue=_browserOperationQueue - In the implementation block
@property (nonatomic,readonly) HAP2AccessoryServerBrowserOperation * currentOperation; 
@property (assign,getter=isDiscovering,nonatomic) BOOL discovering;                                 //@synthesize discovering=_discovering - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HAP2Storage> storage;                                             //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerBrowserDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unpairedAccessoryServers; 
@property (nonatomic,copy,readonly) NSArray * pairedAccessoryServers; 
+(id)new;
-(NSArray *)unpairedAccessoryServers;
-(void)storage:(id)arg1 didSaveKeyWithIdentifier:(id)arg2 ;
-(NSOperationQueue *)operationQueue;
-(HAP2SerializedOperationQueue *)workQueue;
-(void)stopDiscovering;
-(void)savePublicKey:(id)arg1 forAccessoryWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id<HAP2AccessoryServerBrowserDelegate>)delegate;
-(id)_removeAccessoryServerFromArray:(id)arg1 withDeviceID:(id)arg2 ;
-(id<HAP2Storage>)storage;
-(void)_startDiscovering;
-(void)_stopDiscovering;
-(id)_lookupPairedAccessoryServerWithDeviceID:(id)arg1 ;
-(void)accessoryWithDeviceIDIsPaired:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)coordinator:(id)arg1 didCreatePairedAccessoryServer:(id)arg2 ;
-(void)storage:(id)arg1 didRemoveKeyWithIdentifier:(id)arg2 ;
-(void)coordinator:(id)arg1 didLoseAccessory:(id)arg2 error:(id)arg3 ;
-(void)_notifyCoordinatorsOfAccessoryWithDeviceID:(id)arg1 ;
-(void)_finishStopDiscovering;
-(void)accessoryServerDidUpdateConnectionState:(id)arg1 ;
-(void)setDelegate:(id<HAP2AccessoryServerBrowserDelegate>)arg1 ;
-(id)initWithCoordinators:(id)arg1 storage:(id)arg2 ;
-(void)_finishStartDiscovering;
-(NSMutableArray *)liveUnpairedAccessoryServers;
-(void)_finishOperation;
-(NSMutableArray *)browserOperationQueue;
-(BOOL)isDiscovering;
-(HAP2PropertyLock *)propertyLock;
-(void)setDiscovering:(BOOL)arg1 ;
-(NSMutableArray *)livePairedAccessoryServers;
-(void)setLiveUnpairedAccessoryServers:(NSMutableArray *)arg1 ;
-(void)_beginOperation;
-(id)operationQueueForDeviceID:(id)arg1 ;
-(void)setLivePairedAccessoryServers:(NSMutableArray *)arg1 ;
-(void)_enqueueOperation:(id)arg1 ;
-(void)coordinator:(id)arg1 didStopDiscoveringWithError:(id)arg2 ;
-(void)_updateArraysForDiscoveredAccessoryServer:(id)arg1 paired:(BOOL)arg2 lost:(id*)arg3 existing:(id*)arg4 ;
-(void)coordinator:(id)arg1 didCreateUnpairedAccessoryServer:(id)arg2 ;
-(void)removePublicKeyForAccessoryWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)coordinator:(id)arg1 didStartDiscoveringWithError:(id)arg2 ;
-(void)stopConfirmingPairedAccessoryReachability;
-(HAP2AccessoryServerBrowserOperation *)currentOperation;
-(void)retrieveLocalPairingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(NSMapTable *)weakOperationQueuesByDeviceID;
-(void)startDiscovering;
-(NSArray *)pairedAccessoryServers;
-(NSArray *)coordinatorInfo;
-(void)startConfirmingPairedAccessoryReachability;
@end

