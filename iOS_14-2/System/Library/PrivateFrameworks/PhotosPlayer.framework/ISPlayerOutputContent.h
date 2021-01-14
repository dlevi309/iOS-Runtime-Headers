/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)videoSize;
-(CGImageRef)photo;
-(ISWrappedAVPlayer *)videoPlayer;
-(id)description;
-(id)initWithPhoto:(CGImageRef)arg1 photoIsOriginal:(BOOL)arg2 photoEXIFOrientation:(int)arg3 videoPlayer:(id)arg4 videoSize:(CGSize)arg5 ;
-(int)photoEXIFOrientation;
-(void)dealloc;
-(BOOL)photoIsOriginal;
@end

