/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNetworkUsageRulesPayload : MCPayload {

	NSArray* _applicationRules;
	NSArray* _SIMRules;

}

@property (nonatomic,copy) NSArray * applicationRules;                     //@synthesize applicationRules=_applicationRules - In the implementation block
@property (setter=IMRules,nonatomic,copy) NSArray * SIMRules;              //@synthesize SIMRules=_SIMRules - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)installationWarnings;
-(NSArray *)applicationRules;
-(NSArray *)SIMRules;
-(void)setApplicationRules:(NSArray *)arg1 ;
-(void)setSIMRules:(NSArray *)arg1 ;
@end

