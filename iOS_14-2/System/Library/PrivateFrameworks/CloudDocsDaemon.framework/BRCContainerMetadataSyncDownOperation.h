/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, BRCContainerMetadataSyncPersistedState, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface BRCContainerMetadataSyncDownOperation : _BRCOperation <BRCOperationSubclass> {

	BRCAccountSession* _session;
	BRCContainerMetadataSyncPersistedState* _state;
	NSMutableArray* _recordIDsForDesiredAssets;
	NSMutableArray* _desiredKeysForDesiredAssets;
	NSMutableDictionary* _recordIDsToVersionETagsForDesiredAssets;
	NSMutableSet* _containerIDsUpdated;
	BOOL _shouldFetchAnotherBatch;

}

@property (nonatomic,readonly) BOOL shouldFetchAnotherBatch;              //@synthesize shouldFetchAnotherBatch=_shouldFetchAnotherBatch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(id)initWithSession:(id)arg1 state:(id)arg2 ;
-(BOOL)shouldFetchAnotherBatch;
-(void)_completedWithServerChangeToken:(id)arg1 ;
-(void)performAfterFetchingAssetContents:(/*^block*/id)arg1 ;
-(void)performAfterFetchingRecordChanges:(/*^block*/id)arg1 ;
-(void)performAfterCreatingZoneIfNeeded:(/*^block*/id)arg1 ;
@end

