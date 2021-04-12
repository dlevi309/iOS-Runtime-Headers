/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAnalyticsEvent.h>

@class NSUUID, NSDate, NSString;

@interface HFAnalyticsCameraClipPlaybackSessionDidBeginEvent : HFAnalyticsEvent {

	BOOL _recordingIsComplete;
	NSUUID* _clipID;
	NSUUID* _cameraID;
	NSUUID* _playbackSessionID;
	NSUUID* _previousPlaybackSessionID;
	NSDate* _clipStartDate;
	NSString* _processName;

}

@property (nonatomic,retain) NSUUID * clipID;                                 //@synthesize clipID=_clipID - In the implementation block
@property (nonatomic,retain) NSUUID * cameraID;                               //@synthesize cameraID=_cameraID - In the implementation block
@property (nonatomic,retain) NSUUID * playbackSessionID;                      //@synthesize playbackSessionID=_playbackSessionID - In the implementation block
@property (nonatomic,retain) NSUUID * previousPlaybackSessionID;              //@synthesize previousPlaybackSessionID=_previousPlaybackSessionID - In the implementation block
@property (nonatomic,retain) NSDate * clipStartDate;                          //@synthesize clipStartDate=_clipStartDate - In the implementation block
@property (assign,nonatomic) BOOL recordingIsComplete;                        //@synthesize recordingIsComplete=_recordingIsComplete - In the implementation block
@property (nonatomic,retain) NSString * processName;                          //@synthesize processName=_processName - In the implementation block
+(id)sharedPlaybackSessionID;
+(void)setSharedPlaybackSessionID:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id)payload;
-(NSUUID *)playbackSessionID;
-(NSUUID *)clipID;
-(NSUUID *)cameraID;
-(NSDate *)clipStartDate;
-(void)setClipID:(NSUUID *)arg1 ;
-(void)setCameraID:(NSUUID *)arg1 ;
-(void)setClipStartDate:(NSDate *)arg1 ;
-(void)setPlaybackSessionID:(NSUUID *)arg1 ;
-(NSUUID *)previousPlaybackSessionID;
-(BOOL)recordingIsComplete;
-(void)setPreviousPlaybackSessionID:(NSUUID *)arg1 ;
-(void)setRecordingIsComplete:(BOOL)arg1 ;
@end

