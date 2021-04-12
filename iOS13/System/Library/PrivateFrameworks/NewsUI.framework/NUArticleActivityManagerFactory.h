/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleActivityFactory.h>

@protocol NUURLHandling, NUArticleActivityOptionsProvider;
@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;

@interface NUArticleActivityManagerFactory : NSObject <NUArticleActivityFactory> {

	FCReadingHistory* _readingHistory;
	FCReadingList* _readingList;
	FCSubscriptionList* _subscriptionList;
	id<NUURLHandling> _URLHandler;
	id<NUArticleActivityOptionsProvider> _optionsProvider;

}

@property (nonatomic,readonly) FCReadingHistory * readingHistory;                                 //@synthesize readingHistory=_readingHistory - In the implementation block
@property (nonatomic,readonly) FCReadingList * readingList;                                       //@synthesize readingList=_readingList - In the implementation block
@property (nonatomic,readonly) FCSubscriptionList * subscriptionList;                             //@synthesize subscriptionList=_subscriptionList - In the implementation block
@property (nonatomic,readonly) id<NUURLHandling> URLHandler;                                      //@synthesize URLHandler=_URLHandler - In the implementation block
@property (nonatomic,readonly) id<NUArticleActivityOptionsProvider> optionsProvider;              //@synthesize optionsProvider=_optionsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUArticleActivityOptionsProvider>)optionsProvider;
-(FCSubscriptionList *)subscriptionList;
-(FCReadingHistory *)readingHistory;
-(FCReadingList *)readingList;
-(id)activityProviderForHeadline:(id)arg1 reportConcernViewPresenter:(id)arg2 URLModifier:(id)arg3 ;
-(id<NUURLHandling>)URLHandler;
-(id)initWithReadingHistory:(id)arg1 readingList:(id)arg2 subscriptionList:(id)arg3 URLHandler:(id)arg4 optionsProvider:(id)arg5 ;
@end

