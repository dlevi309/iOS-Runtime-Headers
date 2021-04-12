/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setString:(id)arg1 withSearchRange:(NSRange)arg2 ;
-(NSRange)advanceToNextToken;
-(NSRange)rangeOfCurrentToken;
-(id)allTokensForString:(id)arg1 ;
@end

