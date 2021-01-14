/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary;

@interface MCSetupAssistantPayload : MCPayload {

	NSArray* _skipKeys;

}

@property (nonatomic,readonly) NSDictionary * configuration; 
@property (nonatomic,readonly) NSArray * skipKeys;                        //@synthesize skipKeys=_skipKeys - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)verboseDescription;
-(NSDictionary *)configuration;
-(NSArray *)skipKeys;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

