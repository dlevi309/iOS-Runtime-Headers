/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TUDTMFSoundPlayer : NSObject {

	/*^block*/id _playSystemSoundHandler;

}

@property (nonatomic,copy) id playSystemSoundHandler;              //@synthesize playSystemSoundHandler=_playSystemSoundHandler - In the implementation block
-(id)playSystemSoundHandler;
-(void)setPlaySystemSoundHandler:(id)arg1 ;
-(id)init;
-(void)attemptToPlaySoundType:(long long)arg1 ;
-(BOOL)attemptToPlayKey:(unsigned char)arg1 ;
@end

