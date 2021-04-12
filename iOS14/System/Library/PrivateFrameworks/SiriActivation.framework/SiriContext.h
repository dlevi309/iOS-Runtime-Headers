/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFSpeechRequestOptions, SiriContextOverride;

@interface SiriContext : NSObject <NSCopying, NSSecureCoding> {

	AFSpeechRequestOptions* _speechRequestOptions;
	SiriContextOverride* _contextOverride;

}

@property (nonatomic,readonly) AFSpeechRequestOptions * speechRequestOptions;              //@synthesize speechRequestOptions=_speechRequestOptions - In the implementation block
@property (nonatomic,retain) SiriContextOverride * contextOverride;                        //@synthesize contextOverride=_contextOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setContextOverride:(SiriContextOverride *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(AFSpeechRequestOptions *)speechRequestOptions;
-(SiriContextOverride *)contextOverride;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContextOverride:(id)arg1 ;
-(id)initWithSpeechRequestOptions:(id)arg1 ;
@end

