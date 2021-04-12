/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/DNDSSyncServiceDelegate.h>
#import <libobjc.A.dylib/DNDSAssertionSyncManager.h>

@protocol OS_dispatch_queue, DNDSSyncService, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate;
@class NSObject, DNDSClientDetailsProvider, NSDate, NSString;

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceDelegate, DNDSAssertionSyncManager> {

	NSObject*<OS_dispatch_queue> _queue;
	id<DNDSSyncService> _syncService;
	DNDSClientDetailsProvider* _clientDetailsProvider;
	NSDate* _lastReceivedStoreDate;
	NSDate* _lastSentStoreDate;
	id<DNDSAssertionSyncManagerDataSource> _dataSource;
	id<DNDSAssertionSyncManagerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id<DNDSAssertionSyncManagerDelegate>)delegate;
-(id<DNDSAssertionSyncManagerDataSource>)dataSource;
-(void)setDelegate:(id<DNDSAssertionSyncManagerDelegate>)arg1 ;
-(void)setDataSource:(id<DNDSAssertionSyncManagerDataSource>)arg1 ;
-(void)resume;
-(void)updateForModeAssertionUpdateResult:(id)arg1 ;
-(void)_queue_sendStateSnapshotToPairedDevice:(id)arg1 force:(BOOL)arg2 ;
-(void)_queue_handleMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 ;
-(void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4 ;
-(BOOL)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4 ;
-(id)initWithClientDetailsProvider:(id)arg1 syncService:(id)arg2 ;
@end

