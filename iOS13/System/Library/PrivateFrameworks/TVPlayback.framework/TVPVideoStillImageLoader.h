/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPPlaybackImageLoader.h>

@protocol TVPMediaItem;
@class NSObject, TVPMediaItemLoader, TVPStateMachine, NSMutableArray, AVAssetImageGenerator, NSString;

@interface TVPVideoStillImageLoader : NSObject <TVPPlaybackImageLoader> {

	NSObject*<TVPMediaItem> _mediaItem;
	TVPMediaItemLoader* _mediaItemLoader;
	TVPStateMachine* _stateMachine;
	NSMutableArray* _pendingImageLoadInfos;
	NSMutableArray* _imageLoadInfosBeingLoaded;
	AVAssetImageGenerator* _imageGenerator;
	SCD_Struct_TV1 _videoDuration;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                       //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) TVPMediaItemLoader * mediaItemLoader;                    //@synthesize mediaItemLoader=_mediaItemLoader - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                          //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingImageLoadInfos;                  //@synthesize pendingImageLoadInfos=_pendingImageLoadInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageLoadInfosBeingLoaded;              //@synthesize imageLoadInfosBeingLoaded=_imageLoadInfosBeingLoaded - In the implementation block
@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;                  //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV1 videoDuration;                            //@synthesize videoDuration=_videoDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(AVAssetImageGenerator *)imageGenerator;
-(void)setImageGenerator:(AVAssetImageGenerator *)arg1 ;
-(SCD_Struct_TV1)videoDuration;
-(void)setVideoDuration:(SCD_Struct_TV1)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(id)loadImagesForTimes:(id)arg1 maxSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)cancelImageLoadingForIdentifiers:(id)arg1 ;
-(void)_registerStateMachineHandlers;
-(void)_mediaItemLoader:(id)arg1 stateDidChangeTo:(id)arg2 ;
-(NSMutableArray *)pendingImageLoadInfos;
-(NSMutableArray *)imageLoadInfosBeingLoaded;
-(TVPMediaItemLoader *)mediaItemLoader;
-(void)setMediaItemLoader:(TVPMediaItemLoader *)arg1 ;
-(double)closestImageTimeForTime:(double)arg1 ;
-(void)setPendingImageLoadInfos:(NSMutableArray *)arg1 ;
-(void)setImageLoadInfosBeingLoaded:(NSMutableArray *)arg1 ;
@end

