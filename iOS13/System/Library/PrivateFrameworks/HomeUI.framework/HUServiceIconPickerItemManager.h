/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFServiceBuilder;

@interface HUServiceIconPickerItemManager : HFItemManager {

	HFServiceBuilder* _serviceBuilder;

}

@property (nonatomic,readonly) HFServiceBuilder * serviceBuilder;              //@synthesize serviceBuilder=_serviceBuilder - In the implementation block
-(id)_serviceType;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(HFServiceBuilder *)serviceBuilder;
-(id)initWithServiceBuilder:(id)arg1 delegate:(id)arg2 ;
@end

