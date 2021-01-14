/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)powerLevel;
-(void)assign:(const VCAudioPowerSpectrumEntry*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)minFrequency;
-(float)maxFrequency;
@end

