/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSMutableArray, CPLPlatformObject, NSString;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject> {

	NSMutableArray* _quarantineMessages;

}

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)scopeType;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)addQuarantinedRecordWithScopedIdentifier:(id)arg1 recordClass:(Class)arg2 reason:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeQuarantinedRecordWithScopedIdentifier:(id)arg1 notify:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isRecordWithScopedIdentifierQuarantined:(id)arg1 ;
-(Class)classForQuarantinedRecordWithScopedIdentifier:(id)arg1 ;
-(unsigned long long)countOfQuarantinedRecords;
-(unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1 ;
-(void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2 ;
-(BOOL)_quarantineRejectedRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)bumpRejectedRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetRejectedRecordsWithError:(id*)arg1 ;
@end

