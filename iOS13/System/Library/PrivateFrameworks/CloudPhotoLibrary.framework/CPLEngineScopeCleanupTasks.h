/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSMutableArray, NSString, CPLPlatformObject;

@interface CPLEngineScopeCleanupTasks : CPLEngineStorage <CPLAbstractObject> {

	long long _currentCleanupScopeIndex;
	NSMutableArray* _remainingStoragesToCleanup;
	BOOL _shouldRequestACleanupToScheduler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
+(id)scopeTypeDescriptionForScopeType:(unsigned long long)arg1 ;
-(unsigned long long)scopeType;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)cleanupStepHasMore:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)hasCleanupTasks;
@end

