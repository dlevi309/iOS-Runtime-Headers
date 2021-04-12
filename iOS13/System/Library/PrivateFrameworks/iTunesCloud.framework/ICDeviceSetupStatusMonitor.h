/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICNanoPairedDeviceStatusObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface ICDeviceSetupStatusMonitor : NSObject <ICNanoPairedDeviceStatusObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _pendingBuddyCompleteBlocks;
	NSMutableArray* _pendingSetupCompleteBlocks;
	BOOL _setupAssistantRunning;
	int _setupAssistantFinishedNotifyToken;
	int _setupAssistantLaunchedNotifyToken;

}

@property (getter=isSetupAssistantRunning,nonatomic,readonly) BOOL setupAssistantRunning; 
@property (getter=isDeviceSetupComplete,nonatomic,readonly) BOOL deviceSetupComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(void)dealloc;
-(id)_init;
-(void)_runAllPendingBlocksOfType:(long long)arg1 ;
-(BOOL)isSetupAssistantRunning;
-(BOOL)isDeviceSetupComplete;
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2 ;
-(void)performBlockAfterBuddySetup:(/*^block*/id)arg1 ;
-(void)performBlockAfterDeviceSetup:(/*^block*/id)arg1 ;
@end

