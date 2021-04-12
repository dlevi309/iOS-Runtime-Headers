/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSPasswordWordList.h>

@class NSOrderedSet;

@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList {

	NSOrderedSet* _words;
	BOOL _sensitive;

}

@property (getter=isSensitive,nonatomic,readonly) BOOL sensitive;              //@synthesize sensitive=_sensitive - In the implementation block
-(BOOL)isSensitive;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 isSensitive:(BOOL)arg2 orderedWordsArray:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 isSensitive:(BOOL)arg2 orderedWords:(id)arg3 ;
@end

