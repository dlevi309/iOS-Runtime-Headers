/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSManagedObjectContext;

@interface PLFaceRebuildHelper : NSObject {

	NSManagedObjectContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(id)findOrInsertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
-(id)findExistingDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
-(void)rebuildHiddenFace:(id)arg1 onAsset:(id)arg2 ;
-(void)rebuildRejectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3 ;
-(void)rebuildDetectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3 ;
-(id)insertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2 ;
@end

