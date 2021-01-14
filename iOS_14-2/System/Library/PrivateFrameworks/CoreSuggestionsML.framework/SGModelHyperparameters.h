/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
@class NSString;

@interface SGModelHyperparameters : NSObject {

	NSString* _featuresModelId;
	NSString* _featuresVersion;
	unsigned long long _vectorLength;
	NSRange _characterNGramRange;
	NSRange _tokenNGramRange;

}

@property (nonatomic,copy,readonly) NSString * featuresModelId;              //@synthesize featuresModelId=_featuresModelId - In the implementation block
@property (nonatomic,copy,readonly) NSString * featuresVersion;              //@synthesize featuresVersion=_featuresVersion - In the implementation block
@property (nonatomic,readonly) NSRange characterNGramRange;                  //@synthesize characterNGramRange=_characterNGramRange - In the implementation block
@property (nonatomic,readonly) NSRange tokenNGramRange;                      //@synthesize tokenNGramRange=_tokenNGramRange - In the implementation block
@property (nonatomic,readonly) unsigned long long vectorLength;              //@synthesize vectorLength=_vectorLength - In the implementation block
-(unsigned long long)vectorLength;
-(id)initWithDictionary:(id)arg1 ;
-(id)sessionDescriptorForLanguage:(id)arg1 ;
-(NSString *)featuresModelId;
-(NSString *)featuresVersion;
-(NSRange)characterNGramRange;
-(NSRange)tokenNGramRange;
@end

