/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class NSError;


@protocol SVVideoPlaybackStateObserving <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(NSError *)error;
-(unsigned long long)state;
-(BOOL)isPlaying;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;

@end

