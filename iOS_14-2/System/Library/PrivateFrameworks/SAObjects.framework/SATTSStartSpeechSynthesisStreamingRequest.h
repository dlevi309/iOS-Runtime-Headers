/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class NSString, NSDictionary;

@interface SATTSStartSpeechSynthesisStreamingRequest : SAStartRequest

@property (nonatomic,copy) NSString * audioType; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * quality; 
@property (assign,nonatomic) BOOL requiresWordTimingInfo; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * voiceName; 
+(id)startSpeechSynthesisStreamingRequest;
+(id)startSpeechSynthesisStreamingRequestWithDictionary:(id)arg1 context:(id)arg2 ;
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
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(void)setQuality:(NSString *)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
-(BOOL)requiresWordTimingInfo;
-(void)setRequiresWordTimingInfo:(BOOL)arg1 ;
@end

