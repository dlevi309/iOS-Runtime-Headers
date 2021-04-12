/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISWrappedAVPlayer;

@interface ISPlayerOutputContent : NSObject {

	BOOL _photoIsOriginal;
	int _photoEXIFOrientation;
	CGImageRef _photo;
	ISWrappedAVPlayer* _videoPlayer;
	CGSize _videoSize;

}

@property (nonatomic,readonly) CGImageRef photo;                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) BOOL photoIsOriginal;                         //@synthesize photoIsOriginal=_photoIsOriginal - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                     //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;              //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,readonly) CGSize videoSize;                             //@synthesize videoSize=_videoSize - In the implementation block
-(void)dealloc;
-(id)description;
-(CGImageRef)photo;
-(int)photoEXIFOrientation;
-(ISWrappedAVPlayer *)videoPlayer;
-(CGSize)videoSize;
-(id)initWithPhoto:(CGImageRef)arg1 photoIsOriginal:(BOOL)arg2 photoEXIFOrientation:(int)arg3 videoPlayer:(id)arg4 videoSize:(CGSize)arg5 ;
-(BOOL)photoIsOriginal;
@end

