/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSManagedObjectContext;

@interface PLFaceRebuildHelper : NSObject {

	NSManagedObjectContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(void)rebuildHiddenFace:(id)arg1 onAsset:(id)arg2 ;
-(void)rebuildRejectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3 ;
-(void)rebuildDetectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3 ;
-(void)updateAnalysisStateForAsset:(id)arg1 ;
-(id)insertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
-(id)findOrInsertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
-(id)findExistingDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
@end

