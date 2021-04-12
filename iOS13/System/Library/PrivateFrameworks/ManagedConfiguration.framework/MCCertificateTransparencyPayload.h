/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(BOOL)isValidDomainRule:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(NSArray *)hashDictionaries;
-(NSArray *)domainRules;
@end

