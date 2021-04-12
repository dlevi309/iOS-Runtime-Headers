/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSData, NSString;

@interface _NSLexicon : NSObject {

	NSData* _data;
	NSString* _languageCode;

}

@property (nonatomic,copy,readonly) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
+(id)systemLexiconForLanguageCode:(id)arg1 ;
-(id)_lemmasInLikelihoodOrderForWord:(id)arg1 matchingWordAttributes:(SCD_Struct_NS28)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 languageCode:(id)arg2 error:(id*)arg3 ;
-(NSString *)languageCode;
-(id)lemmasForWord:(id)arg1 ;
-(void)dealloc;
@end

