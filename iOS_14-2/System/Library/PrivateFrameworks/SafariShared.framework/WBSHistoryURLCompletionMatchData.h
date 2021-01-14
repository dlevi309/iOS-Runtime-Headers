/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSURLCompletionMatchData.h>

@class NSString;

@interface WBSHistoryURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {

	RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >* _item;

}

@property (nonatomic,readonly) NSString * originalURLString; 
@property (nonatomic,readonly) BOOL containsBookmark; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) BOOL lastVisitWasFailure; 
@property (nonatomic,readonly) BOOL shouldPreload; 
@property (nonatomic,readonly) long long visitCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)lastVisitedTimeInterval;
-(long long)visitCount;
-(id)pageTitleAtIndex:(unsigned long long)arg1 ;
-(id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(NSString *)originalURLString;
-(BOOL)containsBookmark;
-(id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1 ;
-(id)userVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(void)enumeratePageTitlesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateUserVisibleURLsUsingBlock:(/*^block*/id)arg1 ;
-(float)topSitesScoreForPageTitleAtTime:(double)arg1 ;
-(float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)lastVisitWasFailure;
-(BOOL)shouldPreload;
-(id)matchDataByMergingWithMatchData:(id)arg1 ;
-(BOOL)matchesAutocompleteTrigger:(id)arg1 ;
-(id)initWithCompletionItem:(HistoryURLCompletionItem*)arg1 ;
@end

