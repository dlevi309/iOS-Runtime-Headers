/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDomainsPayload : MCPayload {

	NSDictionary* _restrictions;

}

@property (nonatomic,retain) NSDictionary * restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
+(id)invalidDomainPatternErrorWithPattern:(id)arg1 ;
+(BOOL)isPatternValid:(id)arg1 outError:(id*)arg2 ;
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSDictionary *)restrictions;
-(void)setRestrictions:(NSDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

