/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


#import <TextInput/TextInput-Structs.h>
@class NSString;

@interface TIWordTokenizer : NSObject {

	NSString* m_string;
	SCD_Struct_TI18* m_inlineBuffer;
	NSRange m_tokenRange;
	NSRange m_searchRange;
	unsigned long long m_bufferOffset;

}
-(id)init;
-(id)allTokensForString:(id)arg1 ;
-(NSRange)rangeOfCurrentToken;
-(void)setString:(id)arg1 withSearchRange:(NSRange)arg2 ;
-(NSRange)advanceToNextToken;
@end

