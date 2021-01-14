/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/MovieControllerExportProtocol.h>

@class AVMutableComposition, Project, CALayer, AVMutableVideoComposition, AVMutableAudioMix, AVAssetImageGenerator, Composition, AVPlayerItem, NSString;

@interface MovieController : NSObject <MovieControllerExportProtocol> {

	float m_rate;
	BOOL _forExport;
	CALayer* playerLayer;
	Project* project;
	CALayer* compositionLayer;
	/*^block*/id progressUpdateBlock;
	AVAssetImageGenerator* _customImageGen;
	Composition* _composition;
	double _exportAspect;
	/*^block*/id _playerReadyCompletionBlock;
	long long _customImageGenCount;
	CGSize _size;

}

@property (assign) long long customImageGenCount;                                         //@synthesize customImageGenCount=_customImageGenCount - In the implementation block
@property (retain) AVAssetImageGenerator * customImageGen;                                //@synthesize customImageGen=_customImageGen - In the implementation block
@property (retain) Composition * composition;                                             //@synthesize composition=_composition - In the implementation block
@property (assign) BOOL forExport;                                                        //@synthesize forExport=_forExport - In the implementation block
@property (assign) double exportAspect;                                                   //@synthesize exportAspect=_exportAspect - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * playerItem; 
@property (copy) id playerReadyCompletionBlock;                                           //@synthesize playerReadyCompletionBlock=_playerReadyCompletionBlock - In the implementation block
@property (nonatomic,readonly) AVMutableComposition * AVComposition; 
@property (retain) Project * project; 
@property (nonatomic,readonly) CALayer * compositionLayer; 
@property (nonatomic,retain) CALayer * playerLayer; 
@property (nonatomic,readonly) AVMutableVideoComposition * videoComposition; 
@property (nonatomic,readonly) AVMutableAudioMix * audioMix; 
@property (assign) CGSize size;                                                           //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) id progressUpdateBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerWithProject:(id)arg1 forExport:(BOOL)arg2 ;
+(id)imageFromProject:(id)arg1 atTime:(int)arg2 withSize:(CGSize)arg3 ;
-(CGSize)size;
-(Composition *)composition;
-(void)setSize:(CGSize)arg1 ;
-(AVMutableAudioMix *)audioMix;
-(void)updateComposition;
-(AVMutableVideoComposition *)videoComposition;
-(Project *)project;
-(void)setPlayerLayer:(CALayer *)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setComposition:(Composition *)arg1 ;
-(void)dealloc;
-(CALayer *)playerLayer;
-(void)setForExport:(BOOL)arg1 ;
-(AVMutableComposition *)AVComposition;
-(void)applyPlayerItemProperties;
-(void)clearPlayerItemProperties;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(id)progressUpdateBlock;
-(void)resetSizeToDefault;
-(double)exportAspect;
-(void)setExportAspect:(double)arg1 ;
-(void)setProject:(Project *)arg1 ;
-(id)imageAtTime:(SCD_Struct_PM8)arg1 withSize:(CGSize)arg2 ;
-(BOOL)forExport;
-(void)cancelAllUIImageGeneration;
-(void)setProjectOnComposition;
-(AVAssetImageGenerator *)customImageGen;
-(void)setCustomImageGen:(AVAssetImageGenerator *)arg1 ;
-(void)setCustomImageGenCount:(long long)arg1 ;
-(long long)customImageGenCount;
-(CALayer *)compositionLayer;
-(void)tearDownProjectDisplay;
-(void)resetSizeToNaturalSize:(CGSize)arg1 ;
-(void)updateForProjectTimeInSeconds:(double)arg1 asynchronous:(BOOL)arg2 allowUnloading:(BOOL)arg3 ;
-(void)renderBothOrientationsOfFirstFrameAtSize:(CGSize)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)generateUIImagesAsynchronouslyForSize:(CGSize)arg1 atTimes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateOrigUIImagesAsynchronouslyForSize:(CGSize)arg1 atTimes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)playerReadyCompletionBlock;
-(void)setPlayerReadyCompletionBlock:(id)arg1 ;
@end

