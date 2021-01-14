/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineInitialQueryTracker : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)scopeType;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)recordInitialQueryForClassStarted:(Class)arg1 scope:(id)arg2 cursor:(id)arg3 error:(id*)arg4 ;
-(BOOL)recordQueryBatchForClass:(Class)arg1 scope:(id)arg2 cursor:(id)arg3 count:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)recordInitialQueryForClassFinished:(Class)arg1 scope:(id)arg2 finishedState:(long long)arg3 error:(id*)arg4 ;
@end

