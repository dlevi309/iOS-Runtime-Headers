/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class NSArray, PHAsset;


@protocol MiroClip <MiroClip_Shim,NSObject>
@property (assign,nonatomic) int startTime; 
@property (assign,nonatomic) int duration; 
@property (assign,nonatomic) int maxDuration; 
@property (nonatomic,readonly) float sourceStartTime; 
@property (nonatomic,readonly) float sourceDuration; 
@property (nonatomic,readonly) int rawSourceDuration; 
@property (nonatomic,readonly) NSArray * multiUpContainedClips; 
@property (nonatomic,readonly) PHAsset * asset; 
@property (nonatomic,readonly) CGSize naturalSizeWithTransform; 
@property (nonatomic,readonly) BOOL isSlomo; 
@property (assign,nonatomic) BOOL audioEnabled; 
@required
-(void)setDuration:(int)arg1;
-(int)maxDuration;
-(void)setAudioEnabled:(BOOL)arg1;
-(BOOL)audioEnabled;
-(PHAsset *)asset;
-(void)setStartTime:(int)arg1;
-(int)duration;
-(BOOL)isSlomo;
-(void)setMaxDuration:(int)arg1;
-(int)startTime;
-(CGSize)naturalSizeWithTransform;
-(float)sourceStartTime;
-(float)sourceDuration;
-(id)loadAVAsset;
-(void)loadAVPlayerItemWithCompletionHander:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3;
-(NSArray *)multiUpContainedClips;
-(int)rawSourceDuration;

@end

