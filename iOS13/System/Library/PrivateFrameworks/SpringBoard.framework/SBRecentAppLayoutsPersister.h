/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)recents;
-(void)setRecents:(NSArray *)arg1 ;
-(void)_loadRecents;
-(id)_scheduledPersistTimer;
-(void)_enqueueDiskWrite;
-(void)_queue_writeCompressedProtobufRepresentationToDisk:(id)arg1 ;
-(void)_persistTimerExpired:(id)arg1 ;
-(id)initWithPersistenceURL:(id)arg1 ;
-(BOOL)initializedNewStoreOnDisk;
-(void)syncToDiskSoonIfDirty;
-(void)syncToDiskSynchronously;
@end

