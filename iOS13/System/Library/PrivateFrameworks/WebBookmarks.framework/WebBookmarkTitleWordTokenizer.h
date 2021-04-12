/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


#import <WebBookmarks/WebBookmarks-Structs.h>
@class NSString, TIWordTokenizer;

@interface WebBookmarkTitleWordTokenizer : NSObject {

	NSString* _string;
	unsigned long long _stringLength;
	TIWordTokenizer* _wordTokenizer;
	NSRange _rangeOfNextToken;
	unsigned long long _startOfUnclassifiedRangeBeforeNextToken;

}
+(void)initialize;
-(id)init;
-(void)setString:(id)arg1 ;
-(NSRange)advanceToNextToken;
@end

