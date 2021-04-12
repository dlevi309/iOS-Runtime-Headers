/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPRandom;
@interface MPRandomDistribution : NSObject <MPRandom, NSSecureCoding> {

	id<MPRandom> _source;
	long long _lowestValue;
	long long _highestValue;
	unsigned long long _numberOfPossibleOutcomes;

}

@property (nonatomic,readonly) long long lowestValue;                                    //@synthesize lowestValue=_lowestValue - In the implementation block
@property (nonatomic,readonly) long long highestValue;                                   //@synthesize highestValue=_highestValue - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPossibleOutcomes;              //@synthesize numberOfPossibleOutcomes=_numberOfPossibleOutcomes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(long long)lowestValue;
-(long long)highestValue;
-(unsigned long long)numberOfPossibleOutcomes;
@end

