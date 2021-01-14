/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)totalDuration;
-(void)setSequenceNumber:(long long)arg1 ;
-(void)setVolume:(float)arg1 ;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)adID;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)sequenceNumber;
-(void)setTotalDuration:(double)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(float)volume;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setAdID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(void)setVideoState:(long long)arg1 ;
-(long long)videoState;
@end

