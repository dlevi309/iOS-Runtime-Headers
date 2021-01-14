/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@class NSDate;

@interface HUNoiseSample : NSObject {

	float _splValue;
	float _sampleDuration;
	NSDate* _sampleDate;

}

@property (nonatomic,retain) NSDate * sampleDate;               //@synthesize sampleDate=_sampleDate - In the implementation block
@property (assign,nonatomic) float splValue;                    //@synthesize splValue=_splValue - In the implementation block
@property (assign,nonatomic) float sampleDuration;              //@synthesize sampleDuration=_sampleDuration - In the implementation block
-(void)setSampleDate:(NSDate *)arg1 ;
-(void)setSplValue:(float)arg1 ;
-(void)setSampleDuration:(float)arg1 ;
-(id)initWithSampleDate:(id)arg1 splValue:(float)arg2 andDuration:(float)arg3 ;
-(NSDate *)sampleDate;
-(float)splValue;
-(float)sampleDuration;
@end

