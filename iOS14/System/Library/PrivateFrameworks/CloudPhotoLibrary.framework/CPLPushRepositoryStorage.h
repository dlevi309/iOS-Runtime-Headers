/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLChangeStorage.h>

@class CPLEngineStore, CPLEnginePushRepository, CPLEngineScopeStorage;

@interface CPLPushRepositoryStorage : CPLChangeStorage {

	CPLEngineStore* _store;
	CPLEnginePushRepository* _pushRepository;
	CPLEngineScopeStorage* _scopes;

}

@property (nonatomic,readonly) CPLEngineStore * store;                                //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) CPLEnginePushRepository * pushRepository;              //@synthesize pushRepository=_pushRepository - In the implementation block
@property (nonatomic,readonly) CPLEngineScopeStorage * scopes;                        //@synthesize scopes=_scopes - In the implementation block
-(CPLEngineScopeStorage *)scopes;
-(CPLEngineStore *)store;
-(id)initWithStore:(id)arg1 ;
-(CPLEnginePushRepository *)pushRepository;
-(id)changeWithScopedIdentifier:(id)arg1 ;
-(BOOL)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(BOOL)getRelatedScopedIdentifier:(id*)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)storageDescription;
@end

