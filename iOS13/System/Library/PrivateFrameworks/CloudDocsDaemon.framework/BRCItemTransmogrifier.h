/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_source;
@class BRCAccountSession, NSObject, NSMutableArray, NSOperationQueue, NSMutableDictionary;

@interface BRCItemTransmogrifier : NSObject {

	BRCAccountSession* _session;
	NSObject*<OS_dispatch_source> _pendingRenamesTimer;
	NSMutableArray* _pendingRenames;
	NSOperationQueue* _queue;
	NSMutableDictionary* _pendingTransmogirifcations;

}
-(id)queue;
-(id)initWithSession:(id)arg1 ;
-(BOOL)addOperation:(id)arg1 forItem:(id)arg2 ;
-(void)removeOperationsForItem:(id)arg1 ;
-(void)_finishDirectoryToPackageTransmogrification:(id)arg1 relpath:(id)arg2 ;
-(double)_renameDelayForZone:(id)arg1 ;
-(double)_renameItem:(id)arg1 ;
-(void)_scheduleRenameAfter:(double)arg1 onQueue:(id)arg2 ;
-(void)_renameItems;
-(void)scheduleDirectoryToPackageTransmogrification:(id)arg1 absolutePath:(id)arg2 ;
-(void)scheduleBouncedDirectoryRename:(id)arg1 ;
@end

