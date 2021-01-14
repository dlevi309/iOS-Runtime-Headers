/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCCertificateTransparencyPayload : MCPayload {

	NSArray* _hashDictionaries;
	NSArray* _domainRules;

}

@property (nonatomic,readonly) NSArray * hashDictionaries;              //@synthesize hashDictionaries=_hashDictionaries - In the implementation block
@property (nonatomic,readonly) NSArray * domainRules;                   //@synthesize domainRules=_domainRules - In the implementation block
+(BOOL)isValidDomainRule:(id)arg1 ;
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)subtitle1Label;
-(NSArray *)domainRules;
-(NSArray *)hashDictionaries;
-(id)verboseDescription;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
@end

