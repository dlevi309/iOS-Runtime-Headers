/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFHomeBuilder;

@interface HUUserListItemManager : HFItemManager {

	HFHomeBuilder* _homeBuilder;

}

@property (nonatomic,readonly) HFHomeBuilder * homeBuilder;              //@synthesize homeBuilder=_homeBuilder - In the implementation block
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)_homeFuture;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(unsigned long long)_numberOfSections;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 ;
-(HFHomeBuilder *)homeBuilder;
@end

