/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber;

@interface WLKPlaybackSummary : NSObject <NSSecureCoding> {

	BOOL _isAlwaysLive;
	BOOL _isTimerDerived;
	NSString* _bundleID;
	NSString* _channelID;
	NSDate* _timestamp;
	NSDate* _currentPlaybackDate;
	NSNumber* _duration;
	NSNumber* _elapsedTime;
	NSNumber* _featureDuration;
	NSNumber* _featureElapsedTime;
	NSString* _accountID;
	NSString* _externalProfileID;
	NSString* _contentID;
	NSString* _serviceID;
	long long _playbackState;
	NSNumber* _playbackRate;
	long long _completionState;
	long long _playbackType;

}

@property (assign,nonatomic) BOOL isAlwaysLive;                            //@synthesize isAlwaysLive=_isAlwaysLive - In the implementation block
@property (assign,nonatomic) BOOL isTimerDerived;                          //@synthesize isTimerDerived=_isTimerDerived - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSDate * currentPlaybackDate;               //@synthesize currentPlaybackDate=_currentPlaybackDate - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSNumber * elapsedTime;                     //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,readonly) NSNumber * featureDuration;                 //@synthesize featureDuration=_featureDuration - In the implementation block
@property (nonatomic,readonly) NSNumber * featureElapsedTime;              //@synthesize featureElapsedTime=_featureElapsedTime - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                       //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSNumber * accountIDAsNumber; 
@property (nonatomic,readonly) NSString * externalProfileID;               //@synthesize externalProfileID=_externalProfileID - In the implementation block
@property (nonatomic,readonly) NSString * contentID;                       //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * serviceID;                       //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) long long playbackState;                    //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) NSNumber * playbackRate;                    //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,readonly) long long completionState;                  //@synthesize completionState=_completionState - In the implementation block
@property (nonatomic,readonly) long long playbackType;                     //@synthesize playbackType=_playbackType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 featureDuration:(id)arg9 featureElapsedTime:(id)arg10 playbackState:(long long)arg11 playbackRate:(id)arg12 completionState:(long long)arg13 ;
+(id)debugStringForCompletionState:(long long)arg1 ;
+(id)debugStringForPlaybackState:(long long)arg1 ;
+(id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 playbackState:(long long)arg9 playbackRate:(id)arg10 completionState:(long long)arg11 ;
+(double)playedThresholdTimeForDuration:(double)arg1 ;
+(id)liveSummaryWithBundleID:(id)arg1 channelID:(id)arg2 serviceID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9 ;
+(id)EBSSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9 ;
+(id)_debugStringForPlaybackType:(long long)arg1 ;
+(long long)completionStateForDuration:(double)arg1 elapsedTime:(double)arg2 ;
-(NSString *)accountID;
-(id)dictionaryRepresentation;
-(NSDate *)currentPlaybackDate;
-(NSNumber *)playbackRate;
-(id)JSONRepresentation;
-(long long)playbackState;
-(NSDate *)timestamp;
-(BOOL)isSameContent:(id)arg1 ;
-(BOOL)_isValid;
-(BOOL)isAlwaysLive;
-(void)setIsAlwaysLive:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)serviceID;
-(id)shortDescription;
-(long long)completionState;
-(BOOL)_validate:(id)arg1 identifier:(id)arg2 expectedClass:(Class)arg3 ;
-(NSNumber *)featureElapsedTime;
-(BOOL)isEqualToSummary:(id)arg1 ;
-(NSString *)contentID;
-(NSString *)channelID;
-(NSNumber *)elapsedTime;
-(id)initWithMediaRemoteDictionary:(id)arg1 bundleID:(id)arg2 accountID:(id)arg3 ;
-(id)description;
-(BOOL)isEqualToSummaryExcludingCursor:(id)arg1 ;
-(NSNumber *)featureDuration;
-(id)elapsedTimeSummaryWithPlaybackState:(long long)arg1 timerDerived:(BOOL)arg2 ;
-(NSString *)bundleID;
-(BOOL)isTimerDerived;
-(BOOL)isEqualToSummaryExcludingTimestamp:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 elapsedTime:(id)arg4 featureDuration:(id)arg5 featureElapsedTime:(id)arg6 externalProfileID:(id)arg7 contentID:(id)arg8 accountID:(id)arg9 playbackState:(long long)arg10 playbackRate:(id)arg11 completionState:(long long)arg12 isAlwaysLive:(BOOL)arg13 serviceID:(id)arg14 currentPlaybackDate:(id)arg15 playbackType:(long long)arg16 isTimerDerived:(BOOL)arg17 channelID:(id)arg18 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)externalProfileID;
-(BOOL)_compareOptional:(id)arg1 with:(id)arg2 ;
-(long long)playbackType;
-(void)setIsTimerDerived:(BOOL)arg1 ;
-(NSNumber *)accountIDAsNumber;
-(BOOL)isLiveType;
-(NSNumber *)duration;
-(void)resolveChannelID:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

