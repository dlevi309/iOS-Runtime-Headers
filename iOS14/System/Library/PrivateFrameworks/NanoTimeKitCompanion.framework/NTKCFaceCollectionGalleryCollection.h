/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)numberOfFaces;
-(id)collectionIdentifier;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollectionDidReorderFaces:(id)arg1 ;
-(unsigned long long)indexOfFace:(id)arg1 ;
-(id)initWithTitle:(id)arg1 faceCollection:(id)arg2 ;
@end

