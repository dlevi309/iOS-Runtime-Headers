/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSString;

@interface ATXNowPlayingDuetEvent : ATXDuetEvent {

	NSString* _bundleId;
	NSString* _track;
	long long _nowPlayingState;

}

@property (nonatomic,readonly) NSString * bundleId;                    //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * track;                       //@synthesize track=_track - In the implementation block
@property (nonatomic,readonly) long long nowPlayingState;              //@synthesize nowPlayingState=_nowPlayingState - In the implementation block
-(id)description;
-(id)identifier;
-(NSString *)bundleId;
-(NSString *)track;
-(long long)nowPlayingState;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithBundleId:(id)arg1 track:(id)arg2 nowPlayingState:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
@end

