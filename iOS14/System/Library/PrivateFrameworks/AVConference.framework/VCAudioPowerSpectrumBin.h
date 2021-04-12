/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioPowerSpectrumBin : NSObject {

	VCRange _frequencyRange;
	float _powerLevel;

}

@property (assign,nonatomic) VCRange frequencyRange;              //@synthesize frequencyRange=_frequencyRange - In the implementation block
@property (assign,nonatomic) float powerLevel;                    //@synthesize powerLevel=_powerLevel - In the implementation block
-(void)setPowerLevel:(float)arg1 ;
-(id)description;
-(float)powerLevel;
-(VCRange)frequencyRange;
-(id)initWithFrequencyRange:(VCRange)arg1 ;
-(void)setFrequencyRange:(VCRange)arg1 ;
@end

