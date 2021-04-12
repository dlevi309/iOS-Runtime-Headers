/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSetupAssistantRunning;
-(void)performBlockAfterDeviceSetup:(/*^block*/id)arg1 ;
-(BOOL)isDeviceSetupComplete;
-(void)_runAllPendingBlocksOfType:(long long)arg1 ;
-(void)performBlockAfterBuddySetup:(/*^block*/id)arg1 ;
-(id)_init;
-(void)dealloc;
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2 ;
@end

