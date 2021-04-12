/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAIntentGroupSiriKitMetrics : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * intentTypeName; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * metricsStateOrigin; 
@property (nonatomic,copy) NSString * resultCandidateId; 
@property (nonatomic,copy) NSString * taskId; 
@property (nonatomic,copy) NSNumber * taskStepStartTime; 
@property (nonatomic,copy) NSString * turnId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitMetrics;
+(id)siriKitMetricsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)taskId;
-(id)encodedClassName;
-(NSString *)intentTypeName;
-(void)setIntentTypeName:(NSString *)arg1 ;
-(NSString *)turnId;
-(void)setTaskId:(NSString *)arg1 ;
-(void)setTurnId:(NSString *)arg1 ;
-(NSString *)metricsStateOrigin;
-(void)setMetricsStateOrigin:(NSString *)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSNumber *)taskStepStartTime;
-(void)setTaskStepStartTime:(NSNumber *)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
@end

