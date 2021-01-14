/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSMutableDictionary, CPLPlatformObject, NSString;

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject> {

	NSMutableDictionary* _perTransactionRemappedScopedIdentifiers;

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
-(void)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 asap:(BOOL)arg3 ;
-(void)discardDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 ;
-(id)_fixupRemappedDeletesAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)arg1 fallback:(id)arg2 ;
-(id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1 ;
@end

