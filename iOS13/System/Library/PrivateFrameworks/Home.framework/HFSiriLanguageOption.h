/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString;

@interface HFSiriLanguageOption : NSObject <NAIdentifiable> {

	BOOL _defaultVoiceForRecognitionLanguage;
	NSString* _recognitionLanguage;
	NSString* _outputLanguage;
	long long _outputGender;

}

@property (nonatomic,copy,readonly) NSString * recognitionLanguage;                                                              //@synthesize recognitionLanguage=_recognitionLanguage - In the implementation block
@property (nonatomic,copy,readonly) NSString * outputLanguage;                                                                   //@synthesize outputLanguage=_outputLanguage - In the implementation block
@property (nonatomic,readonly) long long outputGender;                                                                           //@synthesize outputGender=_outputGender - In the implementation block
@property (getter=isDefaultVoiceForRecognitionLanguage,nonatomic,readonly) BOOL defaultVoiceForRecognitionLanguage;              //@synthesize defaultVoiceForRecognitionLanguage=_defaultVoiceForRecognitionLanguage - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedRecognitionLanguage; 
@property (nonatomic,copy,readonly) NSString * localizedOutputVoice; 
@property (nonatomic,copy,readonly) NSString * localizedOutputVoiceAccent; 
@property (nonatomic,copy,readonly) NSString * localizedOutputVoiceGender; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)outputVoice;
-(BOOL)isDefaultVoiceForRecognitionLanguage;
-(NSString *)recognitionLanguage;
-(NSString *)outputLanguage;
-(long long)outputGender;
-(id)initWithRecognitionLanguage:(id)arg1 outputLanguage:(id)arg2 outputGender:(long long)arg3 defaultVoiceForRecognitionLanguage:(BOOL)arg4 ;
-(NSString *)localizedOutputVoiceAccent;
-(NSString *)localizedOutputVoiceGender;
-(id)initWithRecognitionLanguage:(id)arg1 outputVoice:(id)arg2 defaultVoiceForRecognitionLanguage:(BOOL)arg3 ;
-(NSString *)localizedRecognitionLanguage;
-(NSString *)localizedOutputVoice;
@end

