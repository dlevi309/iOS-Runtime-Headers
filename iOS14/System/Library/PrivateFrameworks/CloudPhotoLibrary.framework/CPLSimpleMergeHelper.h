/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

