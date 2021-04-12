/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCGalleryCollection.h>

@class NSArray;

@interface NTKCFacesArrayGalleryCollection : NTKCGalleryCollection {

	NSArray* _faces;

}

@property (nonatomic,retain) NSArray * faces;              //@synthesize faces=_faces - In the implementation block
-(void)setFaces:(NSArray *)arg1 ;
-(NSArray *)faces;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfFaces;
-(id)initWithTitle:(id)arg1 faces:(id)arg2 ;
-(unsigned long long)indexOfFace:(id)arg1 ;
@end

