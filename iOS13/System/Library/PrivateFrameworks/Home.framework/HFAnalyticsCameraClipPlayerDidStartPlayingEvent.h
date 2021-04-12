/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAnalyticsEvent.h>

@class NSUUID;

@interface HFAnalyticsCameraClipPlayerDidStartPlayingEvent : HFAnalyticsEvent {

	NSUUID* _clipID;
	NSUUID* _cameraID;
	NSUUID* _playbackSessionID;

}

@property (nonatomic,retain) NSUUID * clipID;                         //@synthesize clipID=_clipID - In the implementation block
@property (nonatomic,retain) NSUUID * cameraID;                       //@synthesize cameraID=_cameraID - In the implementation block
@property (nonatomic,retain) NSUUID * playbackSessionID;              //@synthesize playbackSessionID=_playbackSessionID - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(NSUUID *)playbackSessionID;
-(NSUUID *)clipID;
-(NSUUID *)cameraID;
-(void)setClipID:(NSUUID *)arg1 ;
-(void)setCameraID:(NSUUID *)arg1 ;
-(void)setPlaybackSessionID:(NSUUID *)arg1 ;
@end

