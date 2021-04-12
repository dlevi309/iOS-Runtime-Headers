/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSString, CPLEngineScope, NSData, CPLEngineStore;

@interface CPLEngineScopedTask : CPLEngineSyncTask {

	NSString* _clientCacheIdentifier;
	CPLEngineScope* _scope;
	NSData* _transportScope;
	CPLEngineStore* _store;

}

@property (nonatomic,readonly) NSString * clientCacheIdentifier;              //@synthesize clientCacheIdentifier=_clientCacheIdentifier - In the implementation block
@property (nonatomic,readonly) CPLEngineScope * scope;                        //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSData * transportScope;                       //@synthesize transportScope=_transportScope - In the implementation block
@property (nonatomic,readonly) CPLEngineStore * store;                        //@synthesize store=_store - In the implementation block
-(CPLEngineScope *)scope;
-(CPLEngineStore *)store;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
-(NSString *)clientCacheIdentifier;
-(NSData *)transportScope;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5 ;
@end

