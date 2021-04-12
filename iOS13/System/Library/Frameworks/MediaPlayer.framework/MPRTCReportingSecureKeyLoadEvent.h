/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)newRTCReportingPayloadDictionary;
-(unsigned short)rtcReportingCategory;
-(unsigned short)rtcReportingType;
-(NSString *)siriSessionIdentifier;
-(void)setSiriSessionIdentifier:(NSString *)arg1 ;
@end

