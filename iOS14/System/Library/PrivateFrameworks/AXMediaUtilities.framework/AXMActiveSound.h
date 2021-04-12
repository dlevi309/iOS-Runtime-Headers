/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class AVAudioPlayerNode, AVAudioUnitTimePitch;

@interface AXMActiveSound : NSObject {

	AVAudioPlayerNode* _player;
	AVAudioUnitTimePitch* _timePitch;

}

@property (nonatomic,retain) AVAudioPlayerNode * player;                    //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVAudioUnitTimePitch * timePitch;              //@synthesize timePitch=_timePitch - In the implementation block
-(AVAudioPlayerNode *)player;
-(void)setPlayer:(AVAudioPlayerNode *)arg1 ;
-(id)init;
-(void)setTimePitch:(AVAudioUnitTimePitch *)arg1 ;
-(AVAudioUnitTimePitch *)timePitch;
-(void)connectToEngine:(id)arg1 ;
-(void)disconnectFromEngine:(id)arg1 ;
-(BOOL)beginPlayback:(id)arg1 withError:(id*)arg2 ;
@end

