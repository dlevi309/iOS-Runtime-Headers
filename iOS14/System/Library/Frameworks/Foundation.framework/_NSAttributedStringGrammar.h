/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface _NSAttributedStringGrammar : NSObject <NSCopying, NSMutableCopying> {

	long long _aspect;
	long long _deictic;
	long long _determinationType;
	long long _gender;
	long long _grammaticalCase;
	long long _mood;
	long long _number;
	long long _person;
	long long _position;
	long long _tense;
	long long _verbForm;

}

@property (getter=_wordAttributes,readonly) SCD_Struct_NS30 _wordAttributes; 
@property (assign) long long aspect;                                                      //@synthesize aspect=_aspect - In the implementation block
@property (assign) long long deictic;                                                     //@synthesize deictic=_deictic - In the implementation block
@property (assign) long long determinationType;                                           //@synthesize determinationType=_determinationType - In the implementation block
@property (assign) long long gender;                                                      //@synthesize gender=_gender - In the implementation block
@property (assign) long long grammaticalCase;                                             //@synthesize grammaticalCase=_grammaticalCase - In the implementation block
@property (assign) long long mood;                                                        //@synthesize mood=_mood - In the implementation block
@property (assign) long long number;                                                      //@synthesize number=_number - In the implementation block
@property (assign) long long person;                                                      //@synthesize person=_person - In the implementation block
@property (assign) long long position;                                                    //@synthesize position=_position - In the implementation block
@property (assign) long long tense;                                                       //@synthesize tense=_tense - In the implementation block
@property (assign) long long verbForm;                                                    //@synthesize verbForm=_verbForm - In the implementation block
+(id)identityGrammar;
-(long long)person;
-(void)setNumber:(long long)arg1 ;
-(long long)mood;
-(long long)tense;
-(long long)aspect;
-(long long)deictic;
-(long long)position;
-(long long)number;
-(long long)verbForm;
-(void)setMood:(long long)arg1 ;
-(id)init;
-(void)setTense:(long long)arg1 ;
-(void)setAspect:(long long)arg1 ;
-(void)setDeictic:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setVerbForm:(long long)arg1 ;
-(id)_initWithMarkupDictionary:(id)arg1 ;
-(SCD_Struct_NS30)_wordAttributes;
-(long long)grammaticalCase;
-(void)setGrammaticalCase:(long long)arg1 ;
-(long long)determinationType;
-(void)setDeterminationType:(long long)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setPerson:(long long)arg1 ;
-(void)setGender:(long long)arg1 ;
-(long long)gender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

