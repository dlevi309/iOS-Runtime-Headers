/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSMutableArray, CPLPlatformObject, NSString;

@interface CPLEngineScopeCleanupTasks : CPLEngineStorage <CPLAbstractObject> {

	long long _currentCleanupScopeIndex;
	NSMutableArray* _remainingStoragesToCleanup;
	BOOL _shouldRequestACleanupToScheduler;

}

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scopeTypeDescriptionForScopeType:(unsigned long long)arg1 ;
-(unsigned long long)scopeType;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)cleanupStepHasMore:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)hasCleanupTasks;
@end

