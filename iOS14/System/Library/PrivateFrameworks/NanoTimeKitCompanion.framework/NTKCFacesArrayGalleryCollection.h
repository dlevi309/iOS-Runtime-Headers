/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCGalleryCollection.h>

@class NSArray;

@interface NTKCFacesArrayGalleryCollection : NTKCGalleryCollection {

	NSArray* _faces;

}

@property (nonatomic,copy) NSArray * faces;              //@synthesize faces=_faces - In the implementation block
-(unsigned long long)numberOfFaces;
-(NSArray *)faces;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(void)setFaces:(NSArray *)arg1 ;
-(unsigned long long)indexOfFace:(id)arg1 ;
@end

