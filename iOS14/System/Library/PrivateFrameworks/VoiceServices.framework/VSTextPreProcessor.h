/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject {

	NSArray* _rules;
	NSString* _languageID;
	CFStringTokenizerRef _tokenizer;

}
-(id)processedTextFromString:(id)arg1 ;
-(id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2 ;
-(void)dealloc;
@end

