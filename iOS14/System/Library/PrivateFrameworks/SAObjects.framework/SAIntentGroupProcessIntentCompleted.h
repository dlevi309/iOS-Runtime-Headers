/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAIntentGroupBatchSlotResolutionResult, SAIntentGroupConfirmIntentCompleted, SAIntentGroupHandleIntentCompleted, NSString;

@interface SAIntentGroupProcessIntentCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAIntentGroupBatchSlotResolutionResult * batchSlotResolutionResult; 
@property (nonatomic,retain) SAIntentGroupConfirmIntentCompleted * confirmIntentCompleted; 
@property (nonatomic,retain) SAIntentGroupHandleIntentCompleted * handleIntentCompleted; 
@property (nonatomic,copy) NSString * lastAttemptedStep; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)processIntentCompleted;
+(id)processIntentCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setBatchSlotResolutionResult:(SAIntentGroupBatchSlotResolutionResult *)arg1 ;
-(void)setConfirmIntentCompleted:(SAIntentGroupConfirmIntentCompleted *)arg1 ;
-(void)setHandleIntentCompleted:(SAIntentGroupHandleIntentCompleted *)arg1 ;
-(NSString *)lastAttemptedStep;
-(void)setLastAttemptedStep:(NSString *)arg1 ;
-(SAIntentGroupBatchSlotResolutionResult *)batchSlotResolutionResult;
-(SAIntentGroupConfirmIntentCompleted *)confirmIntentCompleted;
-(SAIntentGroupHandleIntentCompleted *)handleIntentCompleted;
@end

