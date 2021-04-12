/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _EARSpeechRecognition, _EARAudioAnalytics, _EARLatticeMitigatorResult;

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying> {

	BOOL _recognitionIsFormatted;
	BOOL _isFinal;
	_EARSpeechRecognition* _recognition;
	_EARSpeechRecognition* _preITNRecognition;
	_EARAudioAnalytics* _audioAnalytics;
	double _utteranceStart;
	_EARLatticeMitigatorResult* _latticeMitigatorResult;

}

@property (nonatomic,copy,readonly) _EARSpeechRecognition * recognition;                              //@synthesize recognition=_recognition - In the implementation block
@property (nonatomic,copy,readonly) _EARSpeechRecognition * preITNRecognition;                        //@synthesize preITNRecognition=_preITNRecognition - In the implementation block
@property (nonatomic,readonly) BOOL recognitionIsFormatted;                                           //@synthesize recognitionIsFormatted=_recognitionIsFormatted - In the implementation block
@property (nonatomic,readonly) BOOL isFinal;                                                          //@synthesize isFinal=_isFinal - In the implementation block
@property (nonatomic,copy,readonly) _EARAudioAnalytics * audioAnalytics;                              //@synthesize audioAnalytics=_audioAnalytics - In the implementation block
@property (nonatomic,readonly) double utteranceStart;                                                 //@synthesize utteranceStart=_utteranceStart - In the implementation block
@property (nonatomic,copy,readonly) _EARLatticeMitigatorResult * latticeMitigatorResult;              //@synthesize latticeMitigatorResult=_latticeMitigatorResult - In the implementation block
-(BOOL)isFinal;
-(_EARSpeechRecognition *)recognition;
-(id)nBestResults;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_EARAudioAnalytics *)audioAnalytics;
-(double)utteranceStart;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(double)arg6 ;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7 ;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 ;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 ;
-(_EARSpeechRecognition *)preITNRecognition;
-(BOOL)recognitionIsFormatted;
-(_EARLatticeMitigatorResult *)latticeMitigatorResult;
@end

