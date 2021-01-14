/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)playingSound;
-(BOOL)updateAudioAsset:(id)arg1;
-(BOOL)updatePlaybackChannels:(id)arg1;
-(unsigned long long)audioSafetyStatus;
-(NSString *)audioRoutingIdentifier;

@end

