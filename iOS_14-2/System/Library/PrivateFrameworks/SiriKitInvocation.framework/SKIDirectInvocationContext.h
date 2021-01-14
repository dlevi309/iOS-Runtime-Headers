/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
*/


@class NSString;

@interface SKIDirectInvocationContext : NSObject {

	BOOL _voiceTriggerEnabled;
	BOOL _textToSpeechEnabled;
	BOOL _eyesFree;
	NSString* _inputOrigin;
	NSString* _interactionType;

}

@property (assign,getter=isVoiceTriggerEnabled,nonatomic) BOOL voiceTriggerEnabled;              //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
@property (assign,getter=isTextToSpeechEnabled,nonatomic) BOOL textToSpeechEnabled;              //@synthesize textToSpeechEnabled=_textToSpeechEnabled - In the implementation block
@property (assign,getter=isEyesFree,nonatomic) BOOL eyesFree;                                    //@synthesize eyesFree=_eyesFree - In the implementation block
@property (nonatomic,copy) NSString * inputOrigin;                                               //@synthesize inputOrigin=_inputOrigin - In the implementation block
@property (nonatomic,copy) NSString * interactionType;                                           //@synthesize interactionType=_interactionType - In the implementation block
+(id)contextForCarPlayDirectAction;
+(id)contextForAnnounceNotifications;
-(id)init;
-(BOOL)isEyesFree;
-(NSString *)interactionType;
-(void)setInteractionType:(NSString *)arg1 ;
-(void)setEyesFree:(BOOL)arg1 ;
-(NSString *)inputOrigin;
-(void)setInputOrigin:(NSString *)arg1 ;
-(void)setTextToSpeechEnabled:(BOOL)arg1 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(BOOL)isVoiceTriggerEnabled;
-(BOOL)isTextToSpeechEnabled;
@end

