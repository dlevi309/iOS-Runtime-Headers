/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

@class NSString, NSURL;


@protocol FMDAudioAccessory <NSObject>
@property (nonatomic,readonly) unsigned long long audioSafetyStatus; 
@property (nonatomic,readonly) NSString * audioRoutingIdentifier; 
@property (nonatomic,readonly) NSURL * audioURL; 
@property (nonatomic,readonly) BOOL playingSound; 
@optional
-(BOOL)shouldStopSoundNow;

@required
-(NSURL *)audioURL;
-(BOOL)updateAudioAsset:(id)arg1;
-(BOOL)updatePlaybackChannels:(id)arg1;
-(unsigned long long)audioSafetyStatus;
-(NSString *)audioRoutingIdentifier;
-(BOOL)playingSound;

@end

