/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCServerChangeState, NSString;

@interface BRCSharedDatabaseSyncOperation : _BRCOperation <BRCOperationSubclass> {

	BRCServerChangeState* _changeState;
	/*^block*/id _shareDBSyncCompletionBlock;

}

@property (nonatomic,copy) id shareDBSyncCompletionBlock;              //@synthesize shareDBSyncCompletionBlock=_shareDBSyncCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queue;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)shareDBSyncCompletionBlock;
-(void)setShareDBSyncCompletionBlock:(id)arg1 ;
-(void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_performFetchChangedZones;
-(void)_performAfterRegisteringForPushes:(/*^block*/id)arg1 ;
-(id)initWithSyncContext:(id)arg1 changeState:(id)arg2 group:(id)arg3 ;
@end

