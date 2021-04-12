/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

