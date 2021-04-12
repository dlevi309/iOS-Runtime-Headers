/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {

	NSDictionary* _defaultsByDomain;

}
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(BOOL)isAllowedToWriteDefaults;
-(id)defaultsForDomain:(id)arg1 ;
-(id)verboseDescription;
-(id)domains;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
@end

