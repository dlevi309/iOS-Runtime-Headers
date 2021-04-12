/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, NSString;

@interface BRCSideCarSyncUpOperation : _BRCOperation <BRCOperationSubclass> {

	BRCAccountSession* _session;
	BOOL _shouldPerformAnotherBatch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 ;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)_markItemsFailedSync;
-(void)_syncUpRecordBatchWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 recordIDToZoneMap:(id)arg3 requestID:(unsigned long long)arg4 ;
-(id)_itemsNeedingSyncUpEnumerator;
-(void)fakeSyncForItem:(id)arg1 itemRank:(unsigned long long)arg2 ;
-(BOOL)shouldPerformAnotherBatch;
@end

