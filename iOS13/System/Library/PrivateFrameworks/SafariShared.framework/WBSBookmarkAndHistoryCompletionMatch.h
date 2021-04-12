/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSURLCompletionMatch.h>

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {

	RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >* _match;

}

@property (nonatomic,readonly) id<WBSURLCompletionMatchData> data; 
@property (nonatomic,readonly) float weight; 
-(id<WBSURLCompletionMatchData>)data;
-(id)title;
-(float)weight;
-(id)originalURLString;
-(id)userVisibleURLString;
-(id)initWithBookmarkAndHistoryCompletionMatch:(Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >*)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 ;
-(id)parsecDomainIdentifier;
@end

