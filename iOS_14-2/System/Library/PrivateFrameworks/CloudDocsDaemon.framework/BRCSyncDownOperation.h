/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithServerZone:(id)arg1 ;
-(BOOL)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)arg1 ;
-(void)_performAfterFetchingRecordChanges:(/*^block*/id)arg1 ;
-(void)_startSyncDown;
-(void)_startCreateZoneAndSubscriptionAndSyncDown;
@end

