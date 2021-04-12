/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class AVMutableComposition, Project, CALayer, AVMutableVideoComposition, AVMutableAudioMix;


@protocol MovieControllerExportProtocol <NSObject>
@property (nonatomic,readonly) AVMutableComposition * AVComposition; 
@property (retain) Project * project; 
@property (nonatomic,readonly) CALayer * compositionLayer; 
@property (nonatomic,retain) CALayer * playerLayer; 
@property (nonatomic,readonly) AVMutableVideoComposition * videoComposition; 
@property (nonatomic,readonly) AVMutableAudioMix * audioMix; 
@property (assign) double exportAspect; 
@property (assign) CGSize size; 
@property (nonatomic,copy) id progressUpdateBlock; 
@optional
-(void)tearDownProjectDisplay;

@required
-(CGSize)size;
-(void)setSize:(CGSize)arg1;
-(AVMutableAudioMix *)audioMix;
-(void)updateComposition;
-(AVMutableVideoComposition *)videoComposition;
-(Project *)project;
-(void)setPlayerLayer:(id)arg1;
-(CALayer *)playerLayer;
-(AVMutableComposition *)AVComposition;
-(void)setProgressUpdateBlock:(/*^block*/id)arg1;
-(id)progressUpdateBlock;
-(double)exportAspect;
-(void)setExportAspect:(double)arg1;
-(void)setProject:(id)arg1;
-(CALayer *)compositionLayer;

@end

