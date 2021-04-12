/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

@class PGPlaybackStatePrerollAttributes;


@protocol PGMutablePlaybackState <NSObject>
@property (assign,nonatomic) long long contentType; 
@property (assign,nonatomic) double contentDuration; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) BOOL requiresLinearPlayback; 
@property (nonatomic,retain) PGPlaybackStatePrerollAttributes * prerollAttributes; 
@property (assign,getter=isRoutingVideoToHostedWindow,nonatomic) BOOL routingVideoToHostedWindow; 
@required
-(void)setRoutingVideoToHostedWindow:(BOOL)arg1;
-(BOOL)requiresLinearPlayback;
-(PGPlaybackStatePrerollAttributes *)prerollAttributes;
-(BOOL)isRoutingVideoToHostedWindow;
-(void)setPlaybackRate:(double)arg1 elapsedTime:(double)arg2 timeControlStatus:(long long)arg3;
-(long long)contentType;
-(double)contentDuration;
-(void)setMuted:(BOOL)arg1;
-(void)setContentDuration:(double)arg1;
-(void)setContentType:(long long)arg1;
-(BOOL)isMuted;
-(void)setPrerollAttributes:(id)arg1;
-(void)setRequiresLinearPlayback:(BOOL)arg1;

@end

