/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFServiceBuilder;

@interface HUServiceIconPickerItemManager : HFItemManager {

	HFServiceBuilder* _serviceBuilder;

}

@property (nonatomic,readonly) HFServiceBuilder * serviceBuilder;              //@synthesize serviceBuilder=_serviceBuilder - In the implementation block
-(id)_serviceType;
-(HFServiceBuilder *)serviceBuilder;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithServiceBuilder:(id)arg1 delegate:(id)arg2 ;
@end

