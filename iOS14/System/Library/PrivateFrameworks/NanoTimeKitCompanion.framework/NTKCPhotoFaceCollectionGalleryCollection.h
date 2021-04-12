/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceCollectionGalleryCollection.h>
#import <libobjc.A.dylib/NTKPhotoAlbumObserverDelegate.h>

@class CLKDevice, NSString;

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKCFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate> {

	CLKDevice* _device;
	NSString* _albumName;

}
-(id)newFace;
-(void)dealloc;
-(id)initForDevice:(id)arg1 ;
-(void)photoAlbumChanged;
@end

