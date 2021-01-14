/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SFAcousticFeature;

@interface SFVoiceAnalytics : NSObject <NSCopying, NSSecureCoding> {

	SFAcousticFeature* _jitter;
	SFAcousticFeature* _shimmer;
	SFAcousticFeature* _pitch;
	SFAcousticFeature* _voicing;

}

@property (nonatomic,copy,readonly) SFAcousticFeature * jitter;               //@synthesize jitter=_jitter - In the implementation block
@property (nonatomic,copy,readonly) SFAcousticFeature * shimmer;              //@synthesize shimmer=_shimmer - In the implementation block
@property (nonatomic,copy,readonly) SFAcousticFeature * pitch;                //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,copy,readonly) SFAcousticFeature * voicing;              //@synthesize voicing=_voicing - In the implementation block
+(BOOL)supportsSecureCoding;
-(SFAcousticFeature *)pitch;
-(void)encodeWithCoder:(id)arg1 ;
-(SFAcousticFeature *)jitter;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(SFAcousticFeature *)shimmer;
-(SFAcousticFeature *)voicing;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithJitter:(id)arg1 shimmer:(id)arg2 pitch:(id)arg3 voicing:(id)arg4 ;
@end

