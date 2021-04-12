/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject {

	NSMutableDictionary* _trie;

}
+(WBSFieldLabelPatternMatcherArrayRef)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg1 allowingEndOfWordMatches:(BOOL)arg2 ;
-(id)init;
-(void)_addWord:(id)arg1 allowingEndOfWordMatch:(BOOL)arg2 ;
@end

