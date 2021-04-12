/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSURLCompletionMatchData.h>

@class NSArray, NSString;

@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {

	unique_ptr<SafariShared::_HistoryStreamedMatchData, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData> >* _streamData;
	NSArray* _autocompleteTriggersAsStringArray;
	NSArray* _entries;

}

@property (nonatomic,copy) NSArray * entries;                                     //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) BOOL lastVisitWasFailure; 
@property (assign,nonatomic) long long visitCount; 
@property (nonatomic,readonly) HistoryStreamedMatchData* streamData; 
@property (nonatomic,readonly) NSString * originalURLString; 
@property (nonatomic,readonly) BOOL containsBookmark; 
@property (nonatomic,readonly) BOOL shouldPreload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEntries:(NSArray *)arg1 ;
-(id)init;
-(double)lastVisitedTimeInterval;
-(id)initWithStreamData:(unique_ptr<SafariShared::_HistoryStreamedMatchData, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData> >*)arg1 entries:(id)arg2 ;
-(long long)visitCount;
-(NSArray *)entries;
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
-(void)setVisitCount:(long long)arg1 ;
-(void)setLastVisitedTimeInterval:(double)arg1 ;
-(void)setAutocompleteTriggers:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLastVisitWasFailure:(BOOL)arg1 visitWasFromThisDevice:(BOOL)arg2 ;
-(HistoryStreamedMatchData*)streamData;
-(BOOL)shouldPreload;
-(id)matchDataByMergingWithMatchData:(id)arg1 ;
-(BOOL)matchesAutocompleteTrigger:(id)arg1 ;
@end

