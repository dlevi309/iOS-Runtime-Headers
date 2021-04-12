/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, NSNumber, SAIntentGroupSiriKitMetrics, SASVSystemDialogActOutput;

@interface SACFClientFlowRequestCallback : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * applicationContextObjects; 
@property (nonatomic,copy) NSArray * conversationStateAttachments; 
@property (nonatomic,copy) NSArray * dictationPromptAbortValues; 
@property (nonatomic,copy) NSString * dictationPromptTargetDomain; 
@property (nonatomic,copy) NSArray * dictationPromptTargetNodes; 
@property (nonatomic,copy) NSArray * disambiguationPromptAbortValues; 
@property (nonatomic,copy) NSNumber * disambiguationPromptAmbiguityId; 
@property (nonatomic,copy) NSArray * disambiguationPromptResponseTargets; 
@property (nonatomic,copy) NSString * disambiguationPromptTargetDomain; 
@property (nonatomic,copy) NSArray * displayHintsAsJson; 
@property (nonatomic,copy) NSString * nlInput; 
@property (nonatomic,copy) NSNumber * objectDisambiguation; 
@property (assign,nonatomic) BOOL shouldResetFlowTaskState; 
@property (nonatomic,retain) SAIntentGroupSiriKitMetrics * siriKitMetrics; 
@property (nonatomic,retain) SASVSystemDialogActOutput * systemDialogActOutput; 
@property (nonatomic,copy) NSArray * weightedPromptAbortValues; 
@property (nonatomic,copy) NSArray * weightedPromptResponseOptions; 
@property (nonatomic,copy) NSArray * weightedPromptResponseTargets; 
@property (nonatomic,copy) NSNumber * weightedPromptStrict; 
@property (nonatomic,copy) NSString * weightedPromptTargetDomain; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientFlowRequestCallback;
+(id)clientFlowRequestCallbackWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)nlInput;
-(id)encodedClassName;
-(NSArray *)applicationContextObjects;
-(void)setNlInput:(NSString *)arg1 ;
-(void)setApplicationContextObjects:(NSArray *)arg1 ;
-(NSArray *)conversationStateAttachments;
-(void)setConversationStateAttachments:(NSArray *)arg1 ;
-(NSArray *)dictationPromptAbortValues;
-(void)setDictationPromptAbortValues:(NSArray *)arg1 ;
-(NSString *)dictationPromptTargetDomain;
-(void)setDictationPromptTargetDomain:(NSString *)arg1 ;
-(NSArray *)dictationPromptTargetNodes;
-(void)setDictationPromptTargetNodes:(NSArray *)arg1 ;
-(NSArray *)disambiguationPromptAbortValues;
-(void)setDisambiguationPromptAbortValues:(NSArray *)arg1 ;
-(NSNumber *)disambiguationPromptAmbiguityId;
-(void)setDisambiguationPromptAmbiguityId:(NSNumber *)arg1 ;
-(NSArray *)disambiguationPromptResponseTargets;
-(void)setDisambiguationPromptResponseTargets:(NSArray *)arg1 ;
-(NSString *)disambiguationPromptTargetDomain;
-(void)setDisambiguationPromptTargetDomain:(NSString *)arg1 ;
-(NSArray *)displayHintsAsJson;
-(NSNumber *)objectDisambiguation;
-(SAIntentGroupSiriKitMetrics *)siriKitMetrics;
-(void)setDisplayHintsAsJson:(NSArray *)arg1 ;
-(void)setObjectDisambiguation:(NSNumber *)arg1 ;
-(BOOL)shouldResetFlowTaskState;
-(void)setShouldResetFlowTaskState:(BOOL)arg1 ;
-(SASVSystemDialogActOutput *)systemDialogActOutput;
-(void)setSystemDialogActOutput:(SASVSystemDialogActOutput *)arg1 ;
-(NSArray *)weightedPromptAbortValues;
-(void)setWeightedPromptAbortValues:(NSArray *)arg1 ;
-(NSArray *)weightedPromptResponseOptions;
-(void)setWeightedPromptResponseOptions:(NSArray *)arg1 ;
-(NSArray *)weightedPromptResponseTargets;
-(NSNumber *)weightedPromptStrict;
-(void)setWeightedPromptResponseTargets:(NSArray *)arg1 ;
-(void)setWeightedPromptStrict:(NSNumber *)arg1 ;
-(NSString *)weightedPromptTargetDomain;
-(void)setWeightedPromptTargetDomain:(NSString *)arg1 ;
-(void)setSiriKitMetrics:(SAIntentGroupSiriKitMetrics *)arg1 ;
@end

