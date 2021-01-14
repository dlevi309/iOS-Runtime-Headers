/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol ADPlayerDelegate <NSObject>
@optional
-(id)viewControllerForActionFromAdPlayer:(id)arg1;
-(void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;

@required
-(void)adPlayerDidTimeout:(id)arg1;
-(void)adPlayerFailedToLoadAsset:(id)arg1;
-(void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
-(void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
-(void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
-(void)adPlayerDidFinishPlayback:(id)arg1;

@end

