/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupSiriKitAppSelectionState, NSString, SAPerson, NSArray, SAIntentGroupParse, SAIntentGroupSiriKitListPosition, SAIntentGroupSiriKitRemoteExecution, SAIntentGroupSiriKitMetrics;

@interface SAIntentGroupRunSiriKitExecutor : SABaseClientBoundCommand

@property (nonatomic,retain) SAIntentGroupSiriKitAppSelectionState * appSelectionState; 
@property (nonatomic,copy) NSString * confirmationState; 
@property (assign,nonatomic) BOOL directAction; 
@property (assign,nonatomic) BOOL eyesFree; 
@property (nonatomic,copy) NSString * goalID; 
@property (nonatomic,retain) SAPerson * identifiedUserMeCard; 
@property (nonatomic,copy) NSString * inputOrigin; 
@property (nonatomic,copy) NSString * interactionType; 
@property (assign,nonatomic) BOOL multiUser; 
@property (nonatomic,copy) NSArray * parameterMetadata; 
@property (nonatomic,copy) NSArray * parameterPrompts; 
@property (nonatomic,copy) NSString * parentGoalID; 
@property (nonatomic,retain) SAIntentGroupParse * parse; 
@property (nonatomic,retain) SAIntentGroupSiriKitListPosition * readingListPosition; 
@property (nonatomic,retain) SAIntentGroupSiriKitRemoteExecution * remoteExecution; 
@property (assign,nonatomic) BOOL requiresConditionalMultiUserGrounding; 
@property (nonatomic,copy) NSString * sessionHandOffContinuityID; 
@property (nonatomic,retain) SAIntentGroupSiriKitMetrics * siriKitMetrics; 
@property (assign,nonatomic) BOOL textToSpeechEnabled; 
@property (nonatomic,copy) NSString * userInitiatedAction; 
@property (nonatomic,copy) NSString * usoVerb; 
@property (assign,nonatomic) BOOL voiceTriggerEnabled; 
+(id)runSiriKitExecutor;
+(id)runSiriKitExecutorWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAIntentGroupParse *)parse;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)voiceTriggerEnabled;
-(BOOL)requiresResponse;
-(NSString *)goalID;
-(NSString *)usoVerb;
-(SAIntentGroupSiriKitMetrics *)siriKitMetrics;
-(BOOL)mutatingCommand;
-(NSString *)interactionType;
-(void)setInteractionType:(NSString *)arg1 ;
-(BOOL)eyesFree;
-(SAIntentGroupSiriKitAppSelectionState *)appSelectionState;
-(void)setAppSelectionState:(SAIntentGroupSiriKitAppSelectionState *)arg1 ;
-(NSString *)confirmationState;
-(void)setConfirmationState:(NSString *)arg1 ;
-(BOOL)directAction;
-(void)setDirectAction:(BOOL)arg1 ;
-(void)setEyesFree:(BOOL)arg1 ;
-(void)setGoalID:(NSString *)arg1 ;
-(SAPerson *)identifiedUserMeCard;
-(void)setIdentifiedUserMeCard:(SAPerson *)arg1 ;
-(NSString *)inputOrigin;
-(void)setInputOrigin:(NSString *)arg1 ;
-(BOOL)multiUser;
-(void)setMultiUser:(BOOL)arg1 ;
-(NSArray *)parameterMetadata;
-(void)setParameterMetadata:(NSArray *)arg1 ;
-(NSArray *)parameterPrompts;
-(void)setParameterPrompts:(NSArray *)arg1 ;
-(NSString *)parentGoalID;
-(void)setParentGoalID:(NSString *)arg1 ;
-(void)setParse:(SAIntentGroupParse *)arg1 ;
-(SAIntentGroupSiriKitListPosition *)readingListPosition;
-(void)setReadingListPosition:(SAIntentGroupSiriKitListPosition *)arg1 ;
-(SAIntentGroupSiriKitRemoteExecution *)remoteExecution;
-(void)setRemoteExecution:(SAIntentGroupSiriKitRemoteExecution *)arg1 ;
-(BOOL)requiresConditionalMultiUserGrounding;
-(void)setRequiresConditionalMultiUserGrounding:(BOOL)arg1 ;
-(NSString *)sessionHandOffContinuityID;
-(void)setSessionHandOffContinuityID:(NSString *)arg1 ;
-(void)setSiriKitMetrics:(SAIntentGroupSiriKitMetrics *)arg1 ;
-(BOOL)textToSpeechEnabled;
-(void)setTextToSpeechEnabled:(BOOL)arg1 ;
-(NSString *)userInitiatedAction;
-(void)setUserInitiatedAction:(NSString *)arg1 ;
-(void)setUsoVerb:(NSString *)arg1 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
@end

