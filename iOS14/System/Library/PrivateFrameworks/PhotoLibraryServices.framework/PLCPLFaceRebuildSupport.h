/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)rebuildFace:(id)arg1 ;
-(id)initWithAsset:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)rebuildAllFaces;
-(void)rebuildDetectedFace:(id)arg1 ;
-(void)rebuildHiddenFace:(id)arg1 ;
-(void)rebuildRejectedFace:(id)arg1 ;
-(id)fetchDeferredFacesToRebuild;
-(id)fetchPersonForDeferredFace:(id)arg1 ;
@end

