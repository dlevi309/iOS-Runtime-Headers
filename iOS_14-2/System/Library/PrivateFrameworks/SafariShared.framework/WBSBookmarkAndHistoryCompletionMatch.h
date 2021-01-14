/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSURLCompletionMatch.h>

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {

	RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >* _match;

}

@property (nonatomic,readonly) id<WBSURLCompletionMatchData> data; 
@property (nonatomic,readonly) float weight; 
-(id)userVisibleURLString;
-(float)weight;
-(id)originalURLString;
-(id<WBSURLCompletionMatchData>)data;
-(id)parsecDomainIdentifier;
-(id)initWithBookmarkAndHistoryCompletionMatch:(Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >*)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 ;
-(id)title;
@end

