/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_group;
@class BRCAccountSession, BRCItemID, BRCAppLibrary, NSMutableIndexSet, brc_task_tracker, NSObject;

@interface BRCTreeEnumerator : NSObject {

	BRCAccountSession* _session;
	/*^block*/id _handler;
	BRCItemID* _parentID;
	BRCAppLibrary* _appLibrary;
	unsigned long long _rowID;
	NSMutableIndexSet* _seen;
	NSMutableIndexSet* _toVisit;
	brc_task_tracker* _tracker;
	NSObject*<OS_dispatch_group> _group;
	id _strongSelf;
	BOOL _isCancelled;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)cancel;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(BOOL)finishIfCancelled;
-(void)enumerateBelow:(id)arg1 appLibrary:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_scheduleAsync;
-(void)_doneWithError:(id)arg1 ;
-(void)_iterate:(unsigned long long)arg1 ;
-(unsigned long long)__iterate:(unsigned long long)arg1 ;
-(BOOL)_visitNewParent;
-(id)initWithSession:(id)arg1 tracker:(id)arg2 ;
-(id)initWithSession:(id)arg1 group:(id)arg2 ;
@end

