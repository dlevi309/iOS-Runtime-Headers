/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFacesArrayGalleryCollection.h>

@class CLKDevice, NTKFaceBundle;

@interface NTKCFacesBundleArrayGalleryCollection : NTKCFacesArrayGalleryCollection {

	CLKDevice* _device;
	NTKFaceBundle* _faceBundle;

}

@property (nonatomic,readonly) CLKDevice * device;                      //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NTKFaceBundle * faceBundle;              //@synthesize faceBundle=_faceBundle - In the implementation block
-(CLKDevice *)device;
-(void)loadFaces;
-(id)initWithDevice:(id)arg1 faceBundle:(id)arg2 ;
-(NTKFaceBundle *)faceBundle;
@end

