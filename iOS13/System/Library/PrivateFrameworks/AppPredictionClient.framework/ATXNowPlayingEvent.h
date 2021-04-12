/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSString;

@interface ATXNowPlayingEvent : NSObject {

	NSString* _bundleId;
	long long _nowPlayingState;

}

@property (nonatomic,readonly) NSString * bundleId;                    //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) long long nowPlayingState;              //@synthesize nowPlayingState=_nowPlayingState - In the implementation block
-(NSString *)bundleId;
-(BOOL)isTVExperienceAppNowPlaying;
-(id)initWithContextInfo:(id)arg1 ;
-(long long)nowPlayingState;
@end

