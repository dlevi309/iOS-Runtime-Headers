/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, SFVoiceAnalytics;

@interface SFTranscriptionSegment : NSObject <NSCopying, NSSecureCoding> {

	float _confidence;
	NSString* _substring;
	double _timestamp;
	double _duration;
	NSArray* _alternativeSubstrings;
	SFVoiceAnalytics* _voiceAnalytics;
	NSArray* _alternativeConfidences;
	NSString* _phoneSequence;
	NSString* _ipaPhoneSequence;
	NSRange _substringRange;

}

@property (nonatomic,readonly) NSArray * alternativeConfidences;               //@synthesize alternativeConfidences=_alternativeConfidences - In the implementation block
@property (nonatomic,readonly) NSString * phoneSequence;                       //@synthesize phoneSequence=_phoneSequence - In the implementation block
@property (nonatomic,readonly) NSString * ipaPhoneSequence;                    //@synthesize ipaPhoneSequence=_ipaPhoneSequence - In the implementation block
@property (nonatomic,copy,readonly) NSString * substring;                      //@synthesize substring=_substring - In the implementation block
@property (nonatomic,readonly) NSRange substringRange;                         //@synthesize substringRange=_substringRange - In the implementation block
@property (nonatomic,readonly) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float confidence;                               //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeSubstrings;                //@synthesize alternativeSubstrings=_alternativeSubstrings - In the implementation block
@property (nonatomic,readonly) SFVoiceAnalytics * voiceAnalytics;              //@synthesize voiceAnalytics=_voiceAnalytics - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)confidence;
-(double)timestamp;
-(double)duration;
-(NSString *)substring;
-(NSString *)phoneSequence;
-(NSString *)ipaPhoneSequence;
-(NSRange)substringRange;
-(id)_initWithSubstring:(id)arg1 range:(NSRange)arg2 timestamp:(double)arg3 duration:(double)arg4 confidence:(float)arg5 alternativeSubstrings:(id)arg6 alternativeConfidences:(id)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9 voiceAnalytics:(id)arg10 ;
-(NSArray *)alternativeSubstrings;
-(NSArray *)alternativeConfidences;
-(SFVoiceAnalytics *)voiceAnalytics;
@end

