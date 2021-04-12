/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class AVAudioPlayer, NSString;

@interface ANTrackPlayerInfo : NSObject {

	AVAudioPlayer* _player;
	NSString* _announcementID;
	long long _trackType;

}

@property (nonatomic,readonly) AVAudioPlayer * player;                 //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) NSString * announcementID;              //@synthesize announcementID=_announcementID - In the implementation block
@property (nonatomic,readonly) long long trackType;                    //@synthesize trackType=_trackType - In the implementation block
-(AVAudioPlayer *)player;
-(long long)trackType;
-(NSString *)announcementID;
-(id)initWithPlayer:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3 ;
@end

