/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXMediaEvent.h>

@class NSString, NSError;

@interface SXMediaEngageEvent : SXMediaEvent {

	BOOL _muted;
	unsigned long long _userAction;
	double _mediaTimePlayed;
	unsigned long long _mediaPlayMethod;
	NSString* _mediaPauseMethod;
	NSString* _mediaResumeMethod;
	unsigned long long _mediaPausePosition;
	unsigned long long _mediaResumePosition;
	double _mediaFrameRate;
	double _mediaDuration;
	double _volume;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long userAction;                       //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) double mediaTimePlayed;                              //@synthesize mediaTimePlayed=_mediaTimePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long mediaPlayMethod;                  //@synthesize mediaPlayMethod=_mediaPlayMethod - In the implementation block
@property (nonatomic,retain) NSString * mediaPauseMethod;                         //@synthesize mediaPauseMethod=_mediaPauseMethod - In the implementation block
@property (nonatomic,retain) NSString * mediaResumeMethod;                        //@synthesize mediaResumeMethod=_mediaResumeMethod - In the implementation block
@property (assign,nonatomic) unsigned long long mediaPausePosition;               //@synthesize mediaPausePosition=_mediaPausePosition - In the implementation block
@property (assign,nonatomic) unsigned long long mediaResumePosition;              //@synthesize mediaResumePosition=_mediaResumePosition - In the implementation block
@property (assign,nonatomic) double mediaFrameRate;                               //@synthesize mediaFrameRate=_mediaFrameRate - In the implementation block
@property (assign,nonatomic) double mediaDuration;                                //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (assign,nonatomic) BOOL muted;                                          //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) double volume;                                       //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(unsigned long long)userAction;
-(double)mediaDuration;
-(void)setMediaDuration:(double)arg1 ;
-(void)setUserAction:(unsigned long long)arg1 ;
-(void)setMediaTimePlayed:(double)arg1 ;
-(double)mediaTimePlayed;
-(unsigned long long)mediaPlayMethod;
-(void)setMediaPlayMethod:(unsigned long long)arg1 ;
-(NSString *)mediaPauseMethod;
-(void)setMediaPauseMethod:(NSString *)arg1 ;
-(void)setMediaPausePosition:(unsigned long long)arg1 ;
-(NSString *)mediaResumeMethod;
-(void)setMediaResumeMethod:(NSString *)arg1 ;
-(void)setMediaResumePosition:(unsigned long long)arg1 ;
-(unsigned long long)mediaPausePosition;
-(unsigned long long)mediaResumePosition;
-(double)mediaFrameRate;
-(void)setMediaFrameRate:(double)arg1 ;
@end

