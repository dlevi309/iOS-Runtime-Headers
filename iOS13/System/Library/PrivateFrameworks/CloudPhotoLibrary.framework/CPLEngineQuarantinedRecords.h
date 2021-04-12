/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLRejectedRecords, NSMutableArray, NSString, CPLPlatformObject;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject> {

	CPLRejectedRecords* _rejectedRecords;
	unsigned long long _rejectedCount;
	BOOL _rejectedRecordsHasChanges;
	CPLRejectedRecords* _newRejectedRecords;
	NSMutableArray* _quarantineMessages;
	unsigned long long _newRejectedCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(unsigned long long)scopeType;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)addQuarantinedRecordsWithScopedIdentifier:(id)arg1 reason:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeQuarantinedRecordsWithScopedIdentifier:(id)arg1 notify:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isRecordWithScopedIdentifierQuarantined:(id)arg1 ;
-(unsigned long long)countOfQuarantinedRecords;
-(unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1 ;
-(void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2 ;
-(BOOL)bumpRejectedRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetRejectedRecordsWithError:(id*)arg1 ;
@end

