/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSBookmarkAndHistoryCompletionMatch.h>

@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {

	BOOL _shouldPreload;

}
-(BOOL)isTopHit;
-(id)initWithBookmarkAndHistoryCompletionMatch:(Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >*)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 shouldPreload:(BOOL)arg4 ;
-(id)parsecDomainIdentifier;
-(BOOL)shouldPreload;
@end

