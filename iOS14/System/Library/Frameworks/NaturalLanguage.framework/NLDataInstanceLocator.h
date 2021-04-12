/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@interface NLDataInstanceLocator : NSObject {

	unsigned long long _instanceIndex;
	NSRange _rangeOfCharacters;
	NSRange _rangeOfTokens;

}

@property (readonly) unsigned long long instanceIndex; 
@property (readonly) NSRange rangeOfCharacters; 
@property (readonly) NSRange rangeOfTokens; 
-(id)description;
-(id)initWithInstanceIndex:(unsigned long long)arg1 rangeOfCharacters:(NSRange)arg2 rangeOfTokens:(NSRange)arg3 ;
-(NSRange)rangeOfTokens;
-(NSRange)rangeOfCharacters;
-(unsigned long long)instanceIndex;
@end

