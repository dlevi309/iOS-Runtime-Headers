/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFHomeBuilder;

@interface HUUserListItemManager : HFItemManager {

	HFHomeBuilder* _homeBuilder;

}

@property (nonatomic,readonly) HFHomeBuilder * homeBuilder;              //@synthesize homeBuilder=_homeBuilder - In the implementation block
-(unsigned long long)_numberOfSections;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_homeFuture;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 ;
-(HFHomeBuilder *)homeBuilder;
@end

