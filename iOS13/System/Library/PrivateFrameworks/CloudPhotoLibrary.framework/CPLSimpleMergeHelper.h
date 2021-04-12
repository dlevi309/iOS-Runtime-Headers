/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class CPLEngineStore;

@interface CPLSimpleMergeHelper : NSObject {

	CPLEngineStore* _store;

}

@property (nonatomic,readonly) CPLEngineStore * store;              //@synthesize store=_store - In the implementation block
+(id)_mergerWithNoConflictsForStore:(id)arg1 ;
+(id)_mergerWithConflictsForStore:(id)arg1 conflictingScopeIdentifiers:(id)arg2 ;
-(CPLEngineStore *)store;
-(id)initWithEngineStore:(id)arg1 ;
-(BOOL)_changeCanConflict:(id)arg1 ;
-(id)mergerForBatch:(id)arg1 error:(id*)arg2 ;
@end

