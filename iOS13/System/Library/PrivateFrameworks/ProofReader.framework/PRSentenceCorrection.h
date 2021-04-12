/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString, NSArray;

@interface PRSentenceCorrection : NSObject {

	int _category;
	NSRange _range;
	NSString* _word;
	NSArray* _corrections;

}
-(void)dealloc;
-(id)description;
-(int)category;
-(NSRange)range;
-(id)corrections;
-(id)word;
-(BOOL)presentAsSpellingError;
-(id)initWithCategory:(int)arg1 range:(NSRange)arg2 word:(id)arg3 corrections:(id)arg4 ;
-(BOOL)presentAsAutocorrection;
-(BOOL)presentAsGrammarError;
@end

