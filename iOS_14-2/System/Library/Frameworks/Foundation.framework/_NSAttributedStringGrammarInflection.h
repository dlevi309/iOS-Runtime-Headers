/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/_NSAttributedStringGrammarInflecting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface _NSAttributedStringGrammarInflection : NSObject <_NSAttributedStringGrammarInflecting, NSCopying, NSMutableCopying> {

	long long _number;
	long long _context;
	long long _gender;
	long long _grammaticalCase;
	long long _person;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long context;                               //@synthesize context=_context - In the implementation block
@property (assign) long long gender;                                //@synthesize gender=_gender - In the implementation block
@property (assign) long long grammaticalCase;                       //@synthesize grammaticalCase=_grammaticalCase - In the implementation block
@property (assign) long long number;                                //@synthesize number=_number - In the implementation block
@property (assign) long long person;                                //@synthesize person=_person - In the implementation block
+(id)_inflectionToMatchWordWithToken:(id)arg1 wordGrammar:(id)arg2 ;
-(long long)person;
-(void)setNumber:(long long)arg1 ;
-(long long)number;
-(void)_editByAddingWordAttributes:(SCD_Struct_NS30)arg1 overrideIfAlreadySet:(BOOL)arg2 ;
-(void)_editByApplyingPluralityRulesForNumber:(id)arg1 inLanguage:(id)arg2 ;
-(id)init;
-(long long)context;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_initWithMarkupDictionary:(id)arg1 ;
-(long long)grammaticalCase;
-(void)setGrammaticalCase:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setPerson:(long long)arg1 ;
-(void)setGender:(long long)arg1 ;
-(long long)gender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(long long)arg1 ;
@end

