/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@class NSNumber;

@interface HDAudioAnalyticsBucketedExposureResult : NSObject {

	NSNumber* _audioExposureLEQ;
	NSNumber* _audioExposureDuration;
	NSNumber* _audioExposureDose;

}

@property (nonatomic,retain) NSNumber * audioExposureLEQ;                   //@synthesize audioExposureLEQ=_audioExposureLEQ - In the implementation block
@property (nonatomic,retain) NSNumber * audioExposureDuration;              //@synthesize audioExposureDuration=_audioExposureDuration - In the implementation block
@property (nonatomic,retain) NSNumber * audioExposureDose;                  //@synthesize audioExposureDose=_audioExposureDose - In the implementation block
-(void)setAudioExposureLEQ:(NSNumber *)arg1 ;
-(void)setAudioExposureDuration:(NSNumber *)arg1 ;
-(void)setAudioExposureDose:(NSNumber *)arg1 ;
-(id)initWithLEQ:(id)arg1 duration:(id)arg2 dose:(id)arg3 ;
-(NSNumber *)audioExposureLEQ;
-(NSNumber *)audioExposureDuration;
-(NSNumber *)audioExposureDose;
@end

