/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAIntentGroupSiriKitMetrics : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * resultCandidateId; 
@property (nonatomic,copy) NSString * taskId; 
@property (nonatomic,copy) NSNumber * taskStepStartTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitMetrics;
+(id)siriKitMetricsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(NSString *)taskId;
-(void)setTaskId:(NSString *)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSNumber *)taskStepStartTime;
-(void)setTaskStepStartTime:(NSNumber *)arg1 ;
@end

