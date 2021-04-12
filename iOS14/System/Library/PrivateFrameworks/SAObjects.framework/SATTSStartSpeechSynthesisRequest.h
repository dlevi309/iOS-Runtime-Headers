/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSDictionary;

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * audioType; 
@property (assign,nonatomic) BOOL enableAudioInfo; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * quality; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (assign,nonatomic) BOOL streaming; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * voiceName; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startSpeechSynthesisRequest;
+(id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)voiceName;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setText:(NSString *)arg1 ;
-(NSString *)languageCode;
-(NSString *)quality;
-(NSString *)text;
-(NSString *)audioType;
-(void)setAudioType:(NSString *)arg1 ;
-(BOOL)enableAudioInfo;
-(void)setEnableAudioInfo:(BOOL)arg1 ;
-(void)setStreaming:(BOOL)arg1 ;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(void)setQuality:(NSString *)arg1 ;
-(BOOL)streaming;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
@end

