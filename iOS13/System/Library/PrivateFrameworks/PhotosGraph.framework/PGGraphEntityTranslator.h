/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PHPhotoLibrary;

@interface PGGraphEntityTranslator : NSObject {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(id)uuidFromLocalIdentifier:(id)arg1 ;
+(id)entityClassName;
+(BOOL)includesRelationshipChanges;
+(id)uuidsFromLocalIdentifiers:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)graphChangesForInsertedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

