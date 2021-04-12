/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCGalleryCollection.h>
#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>

@class NTKFaceCollection, NSString;

@interface NTKCFaceCollectionGalleryCollection : NTKCGalleryCollection <NTKFaceCollectionObserver> {

	NTKFaceCollection* _faceCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(id)collectionIdentifier;
-(unsigned long long)numberOfFaces;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollectionDidReorderFaces:(id)arg1 ;
-(unsigned long long)indexOfFace:(id)arg1 ;
-(id)initWithTitle:(id)arg1 faceCollection:(id)arg2 ;
@end

