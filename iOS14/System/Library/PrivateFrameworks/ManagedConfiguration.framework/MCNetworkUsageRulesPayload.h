/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)installationWarnings;
-(NSArray *)SIMRules;
-(NSArray *)applicationRules;
-(void)setApplicationRules:(NSArray *)arg1 ;
-(void)setSIMRules:(NSArray *)arg1 ;
-(id)verboseDescription;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

