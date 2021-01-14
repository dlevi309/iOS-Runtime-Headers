/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionMicrophoneNoiseExports.h>

@interface OKActionMicrophoneNoise : OKAction <NSSecureCoding, OKActionMicrophoneNoiseExports> {

	float _meanAudioLevel;

}

@property (nonatomic,readonly) float meanAudioLevel;              //@synthesize meanAudioLevel=_meanAudioLevel - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)microphoneNoiseActionWithState:(unsigned long long)arg1 meanAudioLevel:(float)arg2 context:(id)arg3 ;
+(id)microphoneNoiseActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 meanAudioLevel:(float)arg4 context:(id)arg5 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)meanAudioLevel;
@end

