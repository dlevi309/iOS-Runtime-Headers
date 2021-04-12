/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableArray;

@interface WBSURLSuffixChecker : NSObject {

	SCD_Struct_WB77* _trie;
	unsigned _trieNodeCount;
	unsigned long long _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(void)dealloc;
-(BOOL)hasSuffix:(id)arg1 ;
-(BOOL)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_WB79*)arg2 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
-(id)initWithSuffixes:(id)arg1 ;
@end

