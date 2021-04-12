/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class CAContext, NSObject, BSPortDeathWatcher, NSString;

@interface HMDSnapshotCATransactionHandler : HMFObject <HMFLogging> {

	CAContext* _snapshotContext;
	NSObject*<OS_dispatch_queue> _clientQueue;
	BSPortDeathWatcher* _backboardServicesWatcher;

}

@property (nonatomic,retain) CAContext * snapshotContext;                                //@synthesize snapshotContext=_snapshotContext - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                 //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) BSPortDeathWatcher * backboardServicesWatcher;              //@synthesize backboardServicesWatcher=_backboardServicesWatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedHandler;
-(id)init;
-(CAContext *)snapshotContext;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)_createSnapshotContext;
-(void)setSnapshotContext:(CAContext *)arg1 ;
-(id)_createSlot:(id)arg1 snapshotCATransaction:(id)arg2 ;
-(CGImageRef)createSnapshotCGImageRef:(id)arg1 ;
-(void)_deleteSlot:(id)arg1 filePath:(id)arg2 snapshotCATransaction:(id)arg3 ;
-(void)_backboardServicesRelaunched;
-(id)createSlot:(id)arg1 ;
-(void)deleteSlot:(id)arg1 filePath:(id)arg2 ;
-(BSPortDeathWatcher *)backboardServicesWatcher;
-(void)setBackboardServicesWatcher:(BSPortDeathWatcher *)arg1 ;
@end

