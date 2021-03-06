/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceCollectionGalleryCollection.h>
#import <libobjc.A.dylib/NTKPhotoAlbumObserverDelegate.h>

@class CLKDevice, NSString;

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKCFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate> {

	CLKDevice* _device;
	NSString* _albumName;

}
-(void)dealloc;
-(id)initForDevice:(id)arg1 ;
-(id)newFace;
-(void)photoAlbumChanged:(id)arg1 ;
@end

