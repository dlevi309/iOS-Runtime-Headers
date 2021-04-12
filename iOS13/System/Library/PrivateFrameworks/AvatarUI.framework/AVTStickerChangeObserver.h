/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTStickerBackend;
@class AVTCoreEnvironment, AVTImageStore;

@interface AVTStickerChangeObserver : NSObject {

	AVTCoreEnvironment* _environment;
	id<AVTStickerBackend> _stickerBackend;
	AVTImageStore* _imageStore;

}

@property (nonatomic,readonly) AVTCoreEnvironment * environment;                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTStickerBackend> stickerBackend;              //@synthesize stickerBackend=_stickerBackend - In the implementation block
@property (nonatomic,readonly) AVTImageStore * imageStore;                        //@synthesize imageStore=_imageStore - In the implementation block
-(AVTCoreEnvironment *)environment;
-(AVTImageStore *)imageStore;
-(id<AVTStickerBackend>)stickerBackend;
-(id)initWithStickerBackend:(id)arg1 environment:(id)arg2 ;
-(void)processChangesForChangeTracker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithStickerBackend:(id)arg1 imageStore:(id)arg2 environment:(id)arg3 ;
@end

