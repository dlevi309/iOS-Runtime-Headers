/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(id)initWithSession:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(void)_markItemsFailedSync;
-(void)_syncUpRecordBatchWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 recordIDToZoneMap:(id)arg3 requestID:(unsigned long long)arg4 ;
-(id)_itemsNeedingSyncUpEnumerator;
-(BOOL)shouldPerformAnotherBatch;
@end

