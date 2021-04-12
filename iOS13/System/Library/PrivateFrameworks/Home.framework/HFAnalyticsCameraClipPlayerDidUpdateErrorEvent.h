/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAnalyticsEvent.h>

@class NSUUID, NSString;

@interface HFAnalyticsCameraClipPlayerDidUpdateErrorEvent : HFAnalyticsEvent {

	NSUUID* _playbackSessionID;
	NSString* _errorDomain;
	long long _errorCode;

}

@property (nonatomic,retain) NSUUID * playbackSessionID;              //@synthesize playbackSessionID=_playbackSessionID - In the implementation block
@property (nonatomic,retain) NSString * errorDomain;                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(long long)errorCode;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(NSUUID *)playbackSessionID;
-(void)setPlaybackSessionID:(NSUUID *)arg1 ;
@end

