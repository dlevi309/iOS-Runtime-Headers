/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemManager.h>

@protocol HFMediaProfileContainer;
@class HFDataAnalyticsModule;

@interface HFDataAnalyticsLogItemManager : HFItemManager {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HFDataAnalyticsModule* _dataAnalyticsModule;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HFDataAnalyticsModule * dataAnalyticsModule;                    //@synthesize dataAnalyticsModule=_dataAnalyticsModule - In the implementation block
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFDataAnalyticsModule *)dataAnalyticsModule;
-(id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2 ;
@end

