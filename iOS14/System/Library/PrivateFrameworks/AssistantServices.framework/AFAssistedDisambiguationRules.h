/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@interface AFAssistedDisambiguationRules : NSObject

@property (nonatomic,readonly) unsigned long long decisionDepth; 
@property (nonatomic,readonly) double decisionAge; 
@property (nonatomic,readonly) double decisionThreshold; 
@property (nonatomic,readonly) unsigned long long maxPersistenceDepth; 
@property (nonatomic,readonly) double maxPersistenceAge; 
+(id)defaultRules;
-(unsigned long long)decisionDepth;
-(double)decisionAge;
-(double)decisionThreshold;
-(double)weightForEvent:(id)arg1 ;
-(unsigned long long)maxPersistenceDepth;
-(double)maxPersistenceAge;
@end

