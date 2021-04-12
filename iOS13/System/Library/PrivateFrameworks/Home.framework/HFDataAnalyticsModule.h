/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemModule.h>

@protocol HFMediaProfileContainer;
@class HFDataAnalyticsLogItemProvider;

@interface HFDataAnalyticsModule : HFItemModule {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HFDataAnalyticsLogItemProvider* _logItemProvider;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HFDataAnalyticsLogItemProvider * logItemProvider;               //@synthesize logItemProvider=_logItemProvider - In the implementation block
-(id)itemProviders;
-(HFDataAnalyticsLogItemProvider *)logItemProvider;
-(id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
@end

