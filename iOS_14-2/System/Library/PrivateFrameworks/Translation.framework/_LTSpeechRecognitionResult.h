/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSArray, _LTSpeechRecognitionSausage, NSString;

@interface _LTSpeechRecognitionResult : NSObject <NSSecureCoding> {

	BOOL _final;
	NSLocale* _locale;
	NSArray* _transcriptions;
	_LTSpeechRecognitionSausage* _bestRecognitionAlternatives;
	NSString* _modelVersion;

}

@property (assign,getter=isFinal,nonatomic) BOOL final;                                              //@synthesize final=_final - In the implementation block
@property (nonatomic,retain) NSString * modelVersion;                                                //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                                                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSArray * transcriptions;                                               //@synthesize transcriptions=_transcriptions - In the implementation block
@property (nonatomic,retain) _LTSpeechRecognitionSausage * bestRecognitionAlternatives;              //@synthesize bestRecognitionAlternatives=_bestRecognitionAlternatives - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resultWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(BOOL)arg4 ;
+(id)emptyResultWithLocale:(id)arg1 isFinal:(BOOL)arg2 ;
+(id)resultWithResult:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(BOOL)arg4 ;
-(NSLocale *)locale;
-(NSString *)modelVersion;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setFinal:(BOOL)arg1 ;
-(void)setModelVersion:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isFinal;
-(void)setTranscriptions:(NSArray *)arg1 ;
-(void)setBestRecognitionAlternatives:(_LTSpeechRecognitionSausage *)arg1 ;
-(id)initWithOspreyResponse:(id)arg1 confidenceThreshold:(long long)arg2 isSanitized:(BOOL)arg3 ;
-(id)initWithOspreyPartialRecognitionResponse:(id)arg1 isSanitized:(BOOL)arg2 ;
-(NSArray *)transcriptions;
-(id)bestTranscription;
-(id)initWithCoder:(id)arg1 ;
-(id)_transcriptionWithResult:(id)arg1 locale:(id)arg2 ;
-(id)initWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(BOOL)arg4 ;
-(id)initWithResult:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(BOOL)arg4 ;
-(id)initEmptyResultWithLocale:(id)arg1 isFinal:(BOOL)arg2 ;
-(_LTSpeechRecognitionSausage *)bestRecognitionAlternatives;
@end

