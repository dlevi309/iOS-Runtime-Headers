/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVCAudioPowerSpectrumBin : NSObject <NSSecureCoding> {

	float _minFrequency;
	float _maxFrequency;
	float _powerLevel;

}

@property (nonatomic,readonly) float minFrequency;              //@synthesize minFrequency=_minFrequency - In the implementation block
@property (nonatomic,readonly) float maxFrequency;              //@synthesize maxFrequency=_maxFrequency - In the implementation block
@property (nonatomic,readonly) float powerLevel;                //@synthesize powerLevel=_powerLevel - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)minFrequency;
-(float)maxFrequency;
-(float)powerLevel;
-(void)assign:(const VCAudioPowerSpectrumEntry*)arg1 ;
@end

