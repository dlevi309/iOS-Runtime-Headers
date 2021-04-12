/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioPowerSpectrumBin : NSObject {

	VCRange _frequencyRange;
	float _powerLevel;

}

@property (assign,nonatomic) VCRange frequencyRange;              //@synthesize frequencyRange=_frequencyRange - In the implementation block
@property (assign,nonatomic) float powerLevel;                    //@synthesize powerLevel=_powerLevel - In the implementation block
-(id)description;
-(float)powerLevel;
-(void)setPowerLevel:(float)arg1 ;
-(VCRange)frequencyRange;
-(id)initWithFrequencyRange:(VCRange)arg1 ;
-(void)setFrequencyRange:(VCRange)arg1 ;
@end

