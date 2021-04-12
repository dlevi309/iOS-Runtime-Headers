/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFSpeechRecognition, AFSpeechAudioAnalytics;

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isFinal;
	AFSpeechRecognition* _recognition;
	AFSpeechRecognition* _rawRecognition;
	AFSpeechAudioAnalytics* _audioAnalytics;

}

@property (nonatomic,readonly) AFSpeechRecognition * recognition;                    //@synthesize recognition=_recognition - In the implementation block
@property (nonatomic,readonly) AFSpeechRecognition * rawRecognition;                 //@synthesize rawRecognition=_rawRecognition - In the implementation block
@property (nonatomic,readonly) AFSpeechAudioAnalytics * audioAnalytics;              //@synthesize audioAnalytics=_audioAnalytics - In the implementation block
@property (nonatomic,readonly) BOOL isFinal;                                         //@synthesize isFinal=_isFinal - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AFSpeechRecognition *)recognition;
-(id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(BOOL)arg4 ;
-(AFSpeechRecognition *)rawRecognition;
-(AFSpeechAudioAnalytics *)audioAnalytics;
-(BOOL)isFinal;
@end

