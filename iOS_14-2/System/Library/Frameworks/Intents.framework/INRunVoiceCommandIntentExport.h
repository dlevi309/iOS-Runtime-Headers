/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString, INVoiceCommandDeviceInformation, INIntentExecutionResult, NSString;


@protocol INRunVoiceCommandIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * voiceCommand; 
@property (nonatomic,copy) INVoiceCommandDeviceInformation * originDevice; 
@property (nonatomic,copy) INIntentExecutionResult * executionResult; 
@property (nonatomic,copy) NSString * previousIntentIdentifier; 
@required
-(id)init;
-(INIntentExecutionResult *)executionResult;
-(void)setExecutionResult:(id)arg1;
-(INVoiceCommandDeviceInformation *)originDevice;
-(void)setOriginDevice:(id)arg1;
-(NSString *)previousIntentIdentifier;
-(void)setPreviousIntentIdentifier:(id)arg1;
-(INSpeakableString *)voiceCommand;
-(void)setVoiceCommand:(id)arg1;

@end

