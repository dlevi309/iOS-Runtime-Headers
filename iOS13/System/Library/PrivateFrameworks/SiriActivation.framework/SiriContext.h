/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AFSpeechRequestOptions *)speechRequestOptions;
-(void)setContextOverride:(SiriContextOverride *)arg1 ;
-(SiriContextOverride *)contextOverride;
-(id)initWithContextOverride:(id)arg1 ;
-(id)initWithSpeechRequestOptions:(id)arg1 ;
@end

