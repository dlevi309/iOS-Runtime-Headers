/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


#import <SafariCore/SafariCore-Structs.h>
@class NSDictionary;

@interface WBSPasswordGenerationManager : NSObject {

	LXLexiconRef _lexiconForEnglish;
	LXLexiconRef _lexiconForUserLocale;
	NSDictionary* _passwordRequirementsByDomain;

}

@property (nonatomic,copy) NSDictionary * passwordRequirementsByDomain;              //@synthesize passwordRequirementsByDomain=_passwordRequirementsByDomain - In the implementation block
+(unsigned long long)minimumPasswordLength;
+(id)requirementsForPasswordRuleSet:(id)arg1 respectingMinLength:(id)arg2 maxLength:(id)arg3 ;
+(BOOL)passwordLooksLikePasswordManagerGeneratedPassword:(id)arg1 ;
-(void)_lexiconEnumerateEntries:(LXLexiconRef)arg1 forString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)_moreTypeablePassword;
-(BOOL)_tokensContainUnwantedWords:(id)arg1 ;
-(id)defaultRequirementsForDomain:(id)arg1 ;
-(BOOL)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1 ;
-(id)initWithPasswordRequirementsByDomain:(id)arg1 ;
-(id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2 ;
-(id)defaultRequirementsForURL:(id)arg1 ;
-(id)generatedPasswordMatchingRequirements:(id)arg1 ;
-(id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1 ;
-(BOOL)passwordGenerationIsDisallowedByRequirements:(id)arg1 ;
-(NSDictionary *)passwordRequirementsByDomain;
-(void)setPasswordRequirementsByDomain:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

