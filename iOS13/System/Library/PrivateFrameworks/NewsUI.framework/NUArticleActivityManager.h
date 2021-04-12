/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUActivityProvider.h>

@protocol FCHeadlineProviding, NUURLHandling, NUReportConcernViewPresenter, NUURLModifying, NUArticleActivityOptionsProvider;
@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;

@interface NUArticleActivityManager : NSObject <NUActivityProvider> {

	id<FCHeadlineProviding> _headline;
	FCReadingHistory* _readingHistory;
	FCReadingList* _readingList;
	FCSubscriptionList* _subscriptionList;
	id<NUURLHandling> _URLHandler;
	id<NUReportConcernViewPresenter> _reportConcernViewPresenter;
	id<NUURLModifying> _URLModifier;
	id<NUArticleActivityOptionsProvider> _optionsProvider;

}

@property (nonatomic,readonly) FCReadingHistory * readingHistory;                                        //@synthesize readingHistory=_readingHistory - In the implementation block
@property (nonatomic,readonly) FCReadingList * readingList;                                              //@synthesize readingList=_readingList - In the implementation block
@property (nonatomic,readonly) FCSubscriptionList * subscriptionList;                                    //@synthesize subscriptionList=_subscriptionList - In the implementation block
@property (nonatomic,readonly) id<NUURLHandling> URLHandler;                                             //@synthesize URLHandler=_URLHandler - In the implementation block
@property (nonatomic,readonly) id<NUReportConcernViewPresenter> reportConcernViewPresenter;              //@synthesize reportConcernViewPresenter=_reportConcernViewPresenter - In the implementation block
@property (nonatomic,readonly) id<NUURLModifying> URLModifier;                                           //@synthesize URLModifier=_URLModifier - In the implementation block
@property (nonatomic,readonly) id<NUArticleActivityOptionsProvider> optionsProvider;                     //@synthesize optionsProvider=_optionsProvider - In the implementation block
@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                                         //@synthesize headline=_headline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activities;
-(id<NUArticleActivityOptionsProvider>)optionsProvider;
-(id<FCHeadlineProviding>)headline;
-(FCSubscriptionList *)subscriptionList;
-(FCReadingHistory *)readingHistory;
-(FCReadingList *)readingList;
-(id<NUURLHandling>)URLHandler;
-(id)activityItemSources;
-(id)initWithHeadline:(id)arg1 readingHistory:(id)arg2 readingList:(id)arg3 subscriptionList:(id)arg4 URLHandler:(id)arg5 reportConcernViewPresenter:(id)arg6 URLModifier:(id)arg7 optionsProvider:(id)arg8 ;
-(id<NUURLModifying>)URLModifier;
-(id)supportedActivities;
-(id)activityForType:(unsigned long long)arg1 ;
-(id)activityTypeForHeadline:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)activityTitleForHeadline:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)activityImageForHeadline:(id)arg1 withType:(unsigned long long)arg2 ;
-(/*^block*/id)performBlockForHeadline:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)articleDislikedForHeadline:(id)arg1 ;
-(BOOL)articleLikedForHeadline:(id)arg1 ;
-(BOOL)articleSavedForHeadline:(id)arg1 ;
-(BOOL)channelMutedForHeadline:(id)arg1 ;
-(void)toggleArticleLikeStatusForHeadline:(id)arg1 ;
-(void)toggleArticleDislikeStatusForHeadline:(id)arg1 ;
-(void)toggleSaveForHeadline:(id)arg1 ;
-(void)toggleMuteForHeadline:(id)arg1 ;
-(id<NUReportConcernViewPresenter>)reportConcernViewPresenter;
@end

