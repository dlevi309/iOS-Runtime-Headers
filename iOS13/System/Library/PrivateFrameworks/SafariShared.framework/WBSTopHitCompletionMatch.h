/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSBookmarkAndHistoryCompletionMatch.h>

@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {

	BOOL _shouldPreload;

}
-(id)parsecDomainIdentifier;
-(BOOL)shouldPreload;
-(id)initWithBookmarkAndHistoryCompletionMatch:(Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >*)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 shouldPreload:(BOOL)arg4 ;
-(BOOL)isTopHit;
@end

