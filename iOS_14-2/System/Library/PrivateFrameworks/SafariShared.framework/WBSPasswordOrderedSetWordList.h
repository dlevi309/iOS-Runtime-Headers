/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

