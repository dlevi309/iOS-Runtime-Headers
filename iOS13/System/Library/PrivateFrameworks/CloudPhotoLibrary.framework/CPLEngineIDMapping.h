/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(unsigned long long)scopeType;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1 ;
-(BOOL)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id*)arg2 ;
-(BOOL)hasPendingIdentifiers;
-(BOOL)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
@end

