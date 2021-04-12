/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CALayer *)playerLayer;
-(void)setPlayerLayer:(id)arg1;
-(AVMutableVideoComposition *)videoComposition;
-(AVMutableAudioMix *)audioMix;
-(void)updateComposition;
-(AVMutableComposition *)AVComposition;
-(void)setProgressUpdateBlock:(/*^block*/id)arg1;
-(id)progressUpdateBlock;
-(Project *)project;
-(double)exportAspect;
-(void)setExportAspect:(double)arg1;
-(void)setProject:(id)arg1;
-(CALayer *)compositionLayer;

@end

