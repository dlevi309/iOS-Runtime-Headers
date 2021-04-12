/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSURLCompletionMatchData.h>

@class NSString;

@interface WBSHistoryURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {

	RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >* _item;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * originalURLString; 
@property (nonatomic,readonly) BOOL containsBookmark; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) BOOL lastVisitWasFailure; 
@property (nonatomic,readonly) BOOL shouldPreload; 
@property (nonatomic,readonly) long long visitCount; 
-(id)init;
-(long long)visitCount;
-(BOOL)lastVisitWasFailure;
-(double)lastVisitedTimeInterval;
-(NSString *)originalURLString;
-(id)pageTitleAtIndex:(unsigned long long)arg1 ;
-(id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsBookmark;
-(id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1 ;
-(id)userVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(void)enumeratePageTitlesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateUserVisibleURLsUsingBlock:(/*^block*/id)arg1 ;
-(float)topSitesScoreForPageTitleAtTime:(double)arg1 ;
-(float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2 ;
-(id)matchDataByMergingWithMatchData:(id)arg1 ;
-(BOOL)matchesAutocompleteTrigger:(id)arg1 ;
-(BOOL)shouldPreload;
-(id)initWithCompletionItem:(HistoryURLCompletionItem*)arg1 ;
@end

