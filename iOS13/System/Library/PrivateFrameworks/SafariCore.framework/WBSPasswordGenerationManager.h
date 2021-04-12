/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)defaultRequirementsForURL:(id)arg1 ;
-(BOOL)passwordGenerationIsDisallowedByRequirements:(id)arg1 ;
-(id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1 ;
-(BOOL)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1 ;
-(void)_lexiconEnumerateEntries:(LXLexiconRef)arg1 forString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_moreTypeablePassword;
-(BOOL)_tokensContainUnwantedWords:(id)arg1 ;
-(id)defaultRequirementsForDomain:(id)arg1 ;
-(id)initWithPasswordRequirementsByDomain:(id)arg1 ;
-(id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2 ;
-(id)generatedPasswordMatchingRequirements:(id)arg1 ;
-(NSDictionary *)passwordRequirementsByDomain;
-(void)setPasswordRequirementsByDomain:(NSDictionary *)arg1 ;
@end

