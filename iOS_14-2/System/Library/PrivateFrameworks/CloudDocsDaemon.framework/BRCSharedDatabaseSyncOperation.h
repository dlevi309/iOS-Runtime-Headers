/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)shareDBSyncCompletionBlock;
-(void)setShareDBSyncCompletionBlock:(id)arg1 ;
-(void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_performFetchChangedZones;
-(void)_performAfterRegisteringForPushes:(/*^block*/id)arg1 ;
-(id)initWithSyncContext:(id)arg1 changeState:(id)arg2 group:(id)arg3 ;
@end

