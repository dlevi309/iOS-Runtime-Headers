/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _EARSpeechRecognition, _EARAudioAnalytics;

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying> {

	BOOL _recognitionIsFormatted;
	BOOL _isFinal;
	_EARSpeechRecognition* _recognition;
	_EARSpeechRecognition* _preITNRecognition;
	_EARAudioAnalytics* _audioAnalytics;

}

@property (nonatomic,copy,readonly) _EARSpeechRecognition * recognition;                    //@synthesize recognition=_recognition - In the implementation block
@property (nonatomic,copy,readonly) _EARSpeechRecognition * preITNRecognition;              //@synthesize preITNRecognition=_preITNRecognition - In the implementation block
@property (nonatomic,readonly) BOOL recognitionIsFormatted;                                 //@synthesize recognitionIsFormatted=_recognitionIsFormatted - In the implementation block
@property (nonatomic,readonly) BOOL isFinal;                                                //@synthesize isFinal=_isFinal - In the implementation block
@property (nonatomic,copy,readonly) _EARAudioAnalytics * audioAnalytics;                    //@synthesize audioAnalytics=_audioAnalytics - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(_EARSpeechRecognition *)recognition;
-(_EARAudioAnalytics *)audioAnalytics;
-(BOOL)isFinal;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 ;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 ;
-(id)nBestResults;
-(_EARSpeechRecognition *)preITNRecognition;
-(BOOL)recognitionIsFormatted;
@end

