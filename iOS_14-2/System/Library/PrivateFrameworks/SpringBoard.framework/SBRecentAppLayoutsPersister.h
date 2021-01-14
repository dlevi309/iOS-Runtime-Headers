/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSTimer, NSArray;

@interface SBRecentAppLayoutsPersister : NSObject {

	NSObject*<OS_dispatch_queue> _ioQueue;
	NSURL* _persistenceURL;
	NSTimer* _persistTimer;
	BOOL _initializedNewStoreOnDisk;
	NSArray* _recents;

}

@property (nonatomic,retain) NSArray * recents;                             //@synthesize recents=_recents - In the implementation block
@property (nonatomic,readonly) BOOL initializedNewStoreOnDisk; 
-(void)_queue_writeCompressedProtobufRepresentationToDisk:(id)arg1 ;
-(void)_enqueueDiskWrite;
-(void)syncToDiskSoonIfDirty;
-(id)initWithPersistenceURL:(id)arg1 ;
-(BOOL)initializedNewStoreOnDisk;
-(NSArray *)recents;
-(void)_persistTimerExpired:(id)arg1 ;
-(void)syncToDiskSynchronously;
-(void)_loadRecents;
-(void)setRecents:(NSArray *)arg1 ;
-(id)_scheduledPersistTimer;
@end

