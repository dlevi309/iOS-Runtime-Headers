/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PHPhotoLibrary;

@interface PGGraphEntityTranslator : NSObject {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(id)uuidFromLocalIdentifier:(id)arg1 ;
+(BOOL)includesRelationshipChanges;
+(id)entityClassName;
+(id)uuidsFromLocalIdentifiers:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(id)graphChangesForInsertedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

