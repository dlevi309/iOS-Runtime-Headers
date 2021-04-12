/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLEditSource.h>

@class PLEditSource, PLVideoEditSource;

@interface PLLivePhotoEditSource : PLEditSource {

	PLEditSource* _photoEditSource;
	PLVideoEditSource* _videoEditSource;

}

@property (nonatomic,readonly) PLEditSource * photoEditSource;                   //@synthesize photoEditSource=_photoEditSource - In the implementation block
@property (nonatomic,readonly) PLVideoEditSource * videoEditSource;              //@synthesize videoEditSource=_videoEditSource - In the implementation block
+(id)livePhotoSourceWithPhotoURL:(id)arg1 videoComplementURL:(id)arg2 ;
-(id)initWithPhotoSource:(id)arg1 videoComplement:(id)arg2 ;
-(id)initWithSubstandardPhotoSource:(id)arg1 videoComplement:(id)arg2 ;
-(id)_initWithPhotoSource:(id)arg1 videoComplement:(id)arg2 ;
-(PLEditSource *)photoEditSource;
-(PLVideoEditSource *)videoEditSource;
@end

