/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSString, NSPersonNameComponents, NSArray;

@interface CNNameComponentsStringTokenizer : NSObject {

	NSString* _string;
	NSPersonNameComponents* _components;
	NSArray* _tokens;

}

@property (copy) NSString * string;                                  //@synthesize string=_string - In the implementation block
@property (retain) NSPersonNameComponents * components;              //@synthesize components=_components - In the implementation block
@property (retain) NSArray * tokens;                                 //@synthesize tokens=_tokens - In the implementation block
+(id)componentsFromString:(id)arg1 ;
+(id)tokensFromString:(id)arg1 nameOrder:(long long*)arg2 ;
+(id)whitespaceTokens:(id)arg1 ;
+(BOOL)isNameSuffix:(id)arg1 ;
+(BOOL)isNamePrefix:(id)arg1 ;
+(id)tokensByAdjustingForNobiliaryParticles:(id)arg1 ;
+(BOOL)isNobiliaryParticle:(id)arg1 ;
+(id)namePrefixElements;
+(id)nameComponentElements;
+(id)nameSuffixElements;
+(id)nobiliaryParticleElements;
+(id)uncachedNameComponentElements;
-(void)setTokens:(NSArray *)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSArray *)tokens;
-(void)setComponents:(NSPersonNameComponents *)arg1 ;
-(NSPersonNameComponents *)components;
-(NSString *)string;
-(id)parseComponents;
-(void)removeParentheticalContent;
-(void)extractNicknameFromQuotedContent;
-(void)extractNameSuffixFromEnd;
-(void)extractNamePrefixFromBeginning;
-(void)adjustTokensForNobiliaryParticles;
-(void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(long long)arg1 ;
-(void)setString:(NSString *)arg1 ;
@end

