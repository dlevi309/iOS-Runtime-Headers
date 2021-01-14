/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHPostprocessingStep.h>

@class NSCharacterSet, NSDictionary;

@interface CHNumberFieldResultReorderingStep : CHPostprocessingStep {

	NSCharacterSet* _allowedCharacters;
	NSDictionary* _characterReplacements;

}

@property (nonatomic,retain) NSCharacterSet * allowedCharacters;                //@synthesize allowedCharacters=_allowedCharacters - In the implementation block
@property (nonatomic,retain) NSDictionary * characterReplacements;              //@synthesize characterReplacements=_characterReplacements - In the implementation block
+(id)tokenRowAsString:(id)arg1 ;
-(id)process:(id)arg1 ;
-(NSCharacterSet *)allowedCharacters;
-(void)setAllowedCharacters:(NSCharacterSet *)arg1 ;
-(void)dealloc;
-(id)initForPhoneNumberFields;
-(id)initForDigitFields;
-(long long)countUnallowedCharactersInString:(id)arg1 ;
-(long long)compareStringForPhoneNumberCompatibility:(id)arg1 with:(id)arg2 ;
-(NSDictionary *)characterReplacements;
-(void)setCharacterReplacements:(NSDictionary *)arg1 ;
@end

