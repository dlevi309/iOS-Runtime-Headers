/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLManagedAsset, NSManagedObjectContext, PLFaceRebuildHelper;

@interface PLCPLFaceRebuildSupport : NSObject {

	PLManagedAsset* _asset;
	NSManagedObjectContext* _context;
	PLFaceRebuildHelper* _rebuildHelper;
	int _detectedFaceCount;
	int _rejectedFaceCount;
	int _hiddenFaceCount;

}
+(void)rebuildDeferredFacesForAsset:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)initWithAsset:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)rebuildAllFaces;
-(void)rebuildFace:(id)arg1 ;
-(void)rebuildDetectedFace:(id)arg1 ;
-(void)rebuildRejectedFace:(id)arg1 ;
-(void)rebuildHiddenFace:(id)arg1 ;
-(id)fetchDeferredFacesToRebuild;
-(id)fetchPersonForDeferredFace:(id)arg1 ;
@end

