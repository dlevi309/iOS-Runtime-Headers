/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {

	PHCompositeMediaResult* _imageResult;
	PHCompositeMediaResult* _videoResult;
	BOOL _isDegraded;

}
-(BOOL)isPlaceholder;
-(id)uniformTypeIdentifier;
-(id)sanitizedInfoDictionary;
-(unsigned)cgOrientation;
-(id)videoAdjustmentData;
-(id)exifOrientation;
-(BOOL)isDegraded;
-(void)addImageResult:(id)arg1 ;
-(void)_mergeInfoDictionaryFromResult:(id)arg1 ;
-(id)imageData;
-(void)addVideoResult:(id)arg1 ;
-(id)allowedInfoKeys;
-(CGImageRef)imageRef;
-(BOOL)containsValidData;
-(id)videoURL;
-(id)imageURL;
-(void)setDegraded:(BOOL)arg1 ;
-(long long)uiOrientation;
@end

