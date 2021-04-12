/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRTCReportingEvent.h>

@class NSError, NSString;

@interface MPRTCReportingSecureKeyLoadEvent : MPRTCReportingEvent {

	double _duration;
	NSError* _error;
	NSString* _siriSessionIdentifier;

}

@property (assign,nonatomic) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * siriSessionIdentifier;              //@synthesize siriSessionIdentifier=_siriSessionIdentifier - In the implementation block
-(void)setDuration:(double)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)newRTCReportingPayloadDictionary;
-(unsigned short)rtcReportingCategory;
-(unsigned short)rtcReportingType;
-(NSString *)siriSessionIdentifier;
-(void)setSiriSessionIdentifier:(NSString *)arg1 ;
-(double)duration;
@end

