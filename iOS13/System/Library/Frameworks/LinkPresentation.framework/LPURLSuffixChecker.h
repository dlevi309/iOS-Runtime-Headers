/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


#import <LinkPresentation/LinkPresentation-Structs.h>
@class NSMutableArray;

@interface LPURLSuffixChecker : NSObject {

	SCD_Struct_LP7* _trie;
	unsigned _trieNodeCount;
	unsigned long long _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(void)dealloc;
-(BOOL)hasSuffix:(id)arg1 ;
-(BOOL)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_LP9*)arg2 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
-(BOOL)hasSuffix:(id)arg1 remainingPrefix:(id*)arg2 ;
-(id)initWithSuffixes:(id)arg1 ;
@end

