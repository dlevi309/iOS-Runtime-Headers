/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableArray;

@interface WBSURLSuffixChecker : NSObject {

	SCD_Struct_WB118* _trie;
	unsigned _trieNodeCount;
	unsigned long long _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(id)initWithSuffixes:(id)arg1 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
-(BOOL)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_WB120*)arg2 ;
-(void)dealloc;
@end

