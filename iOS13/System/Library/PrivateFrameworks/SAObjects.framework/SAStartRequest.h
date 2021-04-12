/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber, SASStartSpeech;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * applicationName; 
@property (assign,nonatomic) BOOL clearContext; 
@property (assign,nonatomic) BOOL eyesFree; 
@property (assign,nonatomic) BOOL handsFree; 
@property (nonatomic,copy) NSString * hardwareBuild; 
@property (nonatomic,copy) NSString * inputOrigin; 
@property (nonatomic,copy) NSNumber * isCarryDevice; 
@property (nonatomic,copy) NSString * motionActivity; 
@property (nonatomic,copy) NSNumber * motionConfidence; 
@property (nonatomic,retain) SASStartSpeech * sourceSpeechRequest; 
@property (assign,nonatomic) BOOL talkOnly; 
@property (assign,nonatomic) BOOL textToSpeechIsMuted; 
@property (nonatomic,copy) NSString * turnId; 
@property (nonatomic,copy) NSString * utterance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)startRequest;
+(id)startRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)setMotionActivity:(NSString *)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(NSString *)motionActivity;
-(id)encodedClassName;
-(BOOL)clearContext;
-(NSString *)applicationName;
-(NSString *)inputOrigin;
-(void)setInputOrigin:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(void)setClearContext:(BOOL)arg1 ;
-(NSNumber *)isCarryDevice;
-(void)setIsCarryDevice:(NSNumber *)arg1 ;
-(NSNumber *)motionConfidence;
-(void)setMotionConfidence:(NSNumber *)arg1 ;
-(NSString *)turnId;
-(void)setTurnId:(NSString *)arg1 ;
-(BOOL)eyesFree;
-(void)setEyesFree:(BOOL)arg1 ;
-(BOOL)textToSpeechIsMuted;
-(void)setTextToSpeechIsMuted:(BOOL)arg1 ;
-(BOOL)handsFree;
-(void)setHandsFree:(BOOL)arg1 ;
-(BOOL)talkOnly;
-(void)setTalkOnly:(BOOL)arg1 ;
-(NSString *)hardwareBuild;
-(void)setHardwareBuild:(NSString *)arg1 ;
-(SASStartSpeech *)sourceSpeechRequest;
-(void)setSourceSpeechRequest:(SASStartSpeech *)arg1 ;
@end

