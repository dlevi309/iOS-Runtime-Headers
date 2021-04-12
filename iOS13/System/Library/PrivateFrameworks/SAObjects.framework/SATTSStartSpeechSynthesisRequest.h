/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)startSpeechSynthesisRequest;
+(id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)languageCode;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)quality;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)voiceName;
-(void)setQuality:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)streaming;
-(BOOL)requiresResponse;
-(NSString *)audioType;
-(void)setAudioType:(NSString *)arg1 ;
-(BOOL)enableAudioInfo;
-(void)setEnableAudioInfo:(BOOL)arg1 ;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(void)setStreaming:(BOOL)arg1 ;
@end

