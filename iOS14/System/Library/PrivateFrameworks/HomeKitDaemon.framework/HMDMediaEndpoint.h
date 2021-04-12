/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSSet, NSString, HMDMediaBrowser, NSObject, NSMutableArray, NSArray;

@interface HMDMediaEndpoint : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	unsigned _connectionState;
	void* _retainedEndpoint;
	NSSet* _outputDeviceIdentifiers;
	NSString* _sessionIdentifier;
	NSString* _localizedName;
	NSString* _logID;
	HMDMediaBrowser* _browser;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _pendingBlocks;

}

@property (readonly) void* retainedEndpoint;                                        //@synthesize retainedEndpoint=_retainedEndpoint - In the implementation block
@property (nonatomic,readonly) void* externalDevice; 
@property (nonatomic,readonly) NSString * localizedName;                            //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSSet * outputDeviceIdentifiers;                       //@synthesize outputDeviceIdentifiers=_outputDeviceIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned connectionState;                              //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingBlocks;                        //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                    //@synthesize logID=_logID - In the implementation block
@property (__weak) HMDMediaBrowser * browser;                                       //@synthesize browser=_browser - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * advertisements; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isConnected;
-(NSString *)localizedName;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(unsigned)connectionState;
-(void*)externalDevice;
-(HMDMediaBrowser *)browser;
-(NSString *)logID;
-(id)initWithEndpoint:(void*)arg1 ;
-(id)logIdentifier;
-(BOOL)isEqualToEndpoint:(void*)arg1 ;
-(NSString *)sessionIdentifier;
-(NSMutableArray *)pendingBlocks;
-(void)setPendingBlocks:(NSMutableArray *)arg1 ;
-(NSString *)description;
-(void)updateWithEndpoint:(id)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(void)setBrowser:(HMDMediaBrowser *)arg1 ;
-(void)setConnectionState:(unsigned)arg1 ;
-(void)setPlaybackState:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSArray *)advertisements;
-(void)updateOutputDevicesAndConnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void*)retainedEndpoint;
-(void)setOutputDeviceIdentifiers:(NSSet *)arg1 ;
-(void)setRetainedEndpoint:(void*)arg1 ;
-(void)_updateOutputDevicesAndConnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_notifyPendingBlocksOfError:(id)arg1 ;
-(void)_updateOutputDeviceIdentifiers;
-(void)_connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSSet *)outputDeviceIdentifiers;
-(void*)copyOrigin;
-(void)_getPlaybackStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setPlaybackState:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disconnectFromEndpoint:(void*)arg1 ;
-(void)registerForNowPlayingUpdates:(BOOL)arg1 ;
-(BOOL)doesContainAnyAccessory:(id)arg1 ;
-(void)evaluateIfMediaPlaybackStateChanged:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getPlaybackStateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

