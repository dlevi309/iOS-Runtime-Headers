/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDomainsPayload : MCPayload {

	NSDictionary* _restrictions;

}

@property (nonatomic,retain) NSDictionary * restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)invalidDomainPatternErrorWithPattern:(id)arg1 ;
+(BOOL)isPatternValid:(id)arg1 outError:(id*)arg2 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSDictionary *)restrictions;
-(void)setRestrictions:(NSDictionary *)arg1 ;
@end

