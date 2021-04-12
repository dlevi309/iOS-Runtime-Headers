/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Foundation/NSKeyedUnarchiver.h>

@class PHPhotoLibrary;

@interface PHMemoryFeatureDecoder : NSKeyedUnarchiver {

	PHPhotoLibrary* _photoLibrary;

}

@property (retain) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
@end

