/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupSiriKitAppSelectionState, NSString, NSArray, SAIntentGroupParse, SAIntentGroupSiriKitListPosition, SAIntentGroupSiriKitRemoteExecution, SAIntentGroupSiriKitMetrics;

@interface SAIntentGroupRunSiriKitExecutor : SABaseClientBoundCommand

@property (nonatomic,retain) SAIntentGroupSiriKitAppSelectionState * appSelectionState; 
@property (nonatomic,copy) NSString * confirmationState; 
@property (assign,nonatomic) BOOL directAction; 
@property (assign,nonatomic) BOOL eyesFree; 
@property (nonatomic,copy) NSString * goalID; 
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
-(SAIntentGroupParse *)parse;
-(id)groupIdentifier;
-(NSString *)interactionType;
-(void)setInteractionType:(NSString *)arg1 ;
-(BOOL)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(id)encodedClassName;
-(void)setDirectAction:(BOOL)arg1 ;
-(BOOL)directAction;
-(NSString *)userInitiatedAction;
-(NSString *)inputOrigin;
-(void)setInputOrigin:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(SAIntentGroupSiriKitMetrics *)siriKitMetrics;
-(BOOL)mutatingCommand;
-(SAIntentGroupSiriKitAppSelectionState *)appSelectionState;
-(void)setAppSelectionState:(SAIntentGroupSiriKitAppSelectionState *)arg1 ;
-(NSString *)confirmationState;
-(void)setConfirmationState:(NSString *)arg1 ;
-(BOOL)eyesFree;
-(void)setEyesFree:(BOOL)arg1 ;
-(NSString *)goalID;
-(void)setGoalID:(NSString *)arg1 ;
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
-(void)setUserInitiatedAction:(NSString *)arg1 ;
-(NSString *)usoVerb;
-(void)setUsoVerb:(NSString *)arg1 ;
@end

