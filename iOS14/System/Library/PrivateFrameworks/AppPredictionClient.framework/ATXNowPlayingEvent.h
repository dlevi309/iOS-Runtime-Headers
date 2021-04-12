/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSString;

@interface ATXNowPlayingEvent : NSObject {

	NSString* _bundleId;
	long long _nowPlayingState;

}

@property (nonatomic,readonly) NSString * bundleId;                    //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) long long nowPlayingState;              //@synthesize nowPlayingState=_nowPlayingState - In the implementation block
-(BOOL)isTVExperienceAppNowPlaying;
-(NSString *)bundleId;
-(id)initWithContextInfo:(id)arg1 ;
-(long long)nowPlayingState;
@end

