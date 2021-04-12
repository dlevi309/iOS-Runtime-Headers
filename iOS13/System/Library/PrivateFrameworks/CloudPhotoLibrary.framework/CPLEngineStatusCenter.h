/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSDate, NSMutableSet, NSMutableDictionary, NSString, CPLPlatformObject;

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject> {

	unsigned long long _currentGeneration;
	NSDate* _transactionStartDate;
	NSMutableSet* _persistedScopedIdentifiers;
	NSMutableDictionary* _pendingTransientStatuses;
	NSMutableSet* _pendingDeletedTransientStatuses;
	NSMutableDictionary* _transientStatuses;

}

@property (nonatomic,readonly) BOOL hasStatusChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)status;
-(unsigned long long)scopeType;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)hasStatusChanges;
-(BOOL)notifyStatusForRecordHasChanged:(id)arg1 persist:(BOOL)arg2 error:(id*)arg3 ;
-(id)statusChanges;
-(id)_allScopedIdentifierInCollection:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)_removeStatusesInDictionary:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)_removeScopedIdentifiersFromSet:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)resetTransientStatusesWithScopeIdentifier:(id)arg1 ;
-(void)resetAllTransientStatuses;
-(id)statusesForRecordsWithScopedIdentifiers:(id)arg1 ;
-(id)statusesForRecordsWithIdentifiers:(id)arg1 ;
-(BOOL)acknowledgeChangedStatuses:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_fillStatus:(id)arg1 withClientCacheRecord:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(BOOL)arg4 isStaged:(BOOL)arg5 isInIDMapping:(BOOL)arg6 ;
-(void)_fillStatus:(id)arg1 ;
-(id)_statusFromCachesWithRecordScopedIdentifier:(id)arg1 ;
-(id)recordForStatusWithScopedIdentifier:(id)arg1 ;
-(id)allStatusChanges;
@end

