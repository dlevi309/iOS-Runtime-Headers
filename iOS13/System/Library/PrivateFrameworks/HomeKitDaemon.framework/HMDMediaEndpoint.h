/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSSet, NSString, NSObject, HMDMediaBrowser, NSMutableArray, NSArray;

@interface HMDMediaEndpoint : HMFObject <HMFLogging> {

	unsigned _connectionState;
	void* _retainedEndpoint;
	NSSet* _outputDeviceIdentifiers;
	NSString* _sessionIdentifier;
	NSString* _localizedName;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSString* _logID;
	HMDMediaBrowser* _browser;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _pendingBlocks;

}

@property (readonly) void* retainedEndpoint;                                            //@synthesize retainedEndpoint=_retainedEndpoint - In the implementation block
@property (nonatomic,readonly) void* externalDevice; 
@property (nonatomic,readonly) NSString * localizedName;                                //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSSet * outputDeviceIdentifiers;                           //@synthesize outputDeviceIdentifiers=_outputDeviceIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned connectionState;                                  //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingBlocks;                            //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                        //@synthesize logID=_logID - In the implementation block
@property (__weak) HMDMediaBrowser * browser;                                           //@synthesize browser=_browser - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * advertisements; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)localizedName;
-(id)initWithEndpoint:(void*)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)sessionIdentifier;
-(BOOL)isConnected;
-(unsigned)connectionState;
-(HMDMediaBrowser *)browser;
-(void)setBrowser:(HMDMediaBrowser *)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqualToEndpoint:(void*)arg1 ;
-(id)logIdentifier;
-(void*)externalDevice;
-(void)setPendingBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pendingBlocks;
-(NSString *)logID;
-(void)setConnectionState:(unsigned)arg1 ;
-(void)updateWithEndpoint:(id)arg1 ;
-(void)setPlaybackState:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
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

