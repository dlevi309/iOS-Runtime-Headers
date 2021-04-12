/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdAnalytics.framework/AdAnalytics
*/

#import <AdAnalytics/AdAnalytics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AdAnalyticsEventInfo : NSObject <NSSecureCoding, NSCopying> {

	float _volume;
	NSString* _bundleID;
	NSString* _adID;
	long long _videoState;
	double _currentPlaybackTime;
	double _totalDuration;
	double _visiblePercentage;
	double _timestamp;
	long long _sequenceNumber;

}

@property (nonatomic,copy) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * adID;                           //@synthesize adID=_adID - In the implementation block
@property (assign,nonatomic) long long videoState;                    //@synthesize videoState=_videoState - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime;              //@synthesize currentPlaybackTime=_currentPlaybackTime - In the implementation block
@property (assign,nonatomic) double totalDuration;                    //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) double visiblePercentage;                //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
@property (assign,nonatomic) float volume;                            //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setSequenceNumber:(long long)arg1 ;
-(long long)sequenceNumber;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(double)totalDuration;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)setVideoState:(long long)arg1 ;
-(void)setAdID:(NSString *)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(long long)videoState;
-(NSString *)adID;
@end

