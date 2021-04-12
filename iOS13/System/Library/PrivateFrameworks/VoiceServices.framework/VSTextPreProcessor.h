/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject {

	NSArray* _rules;
	NSString* _languageID;
	CFStringTokenizerRef _tokenizer;

}
-(void)dealloc;
-(id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2 ;
-(id)processedTextFromString:(id)arg1 ;
@end

