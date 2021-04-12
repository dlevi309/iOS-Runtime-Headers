/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCServerZone, NSString;

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {

	BRCServerZone* _serverZone;
	unsigned long long _editedAndDeletedRecordsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)initWithServerZone:(id)arg1 ;
-(BOOL)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)arg1 ;
-(void)_performAfterFetchingRecordChanges:(/*^block*/id)arg1 ;
-(void)_startSyncDown;
-(void)_startCreateZoneAndSubscriptionAndSyncDown;
@end

