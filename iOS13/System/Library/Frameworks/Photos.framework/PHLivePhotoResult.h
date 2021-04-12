/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {

	PHCompositeMediaResult* _imageResult;
	PHCompositeMediaResult* _videoResult;

}
-(CGImageRef)imageRef;
-(id)exifOrientation;
-(id)imageURL;
-(id)imageData;
-(id)videoURL;
-(BOOL)containsValidData;
-(id)imageUTI;
-(long long)uiOrientation;
-(unsigned)cgOrientation;
-(id)videoAdjustmentData;
-(void)_mergeInfoDictionaryFromResult:(id)arg1 ;
-(void)addImageResult:(id)arg1 ;
-(void)addVideoResult:(id)arg1 ;
@end

