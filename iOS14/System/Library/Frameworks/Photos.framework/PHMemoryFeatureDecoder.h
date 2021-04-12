/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

