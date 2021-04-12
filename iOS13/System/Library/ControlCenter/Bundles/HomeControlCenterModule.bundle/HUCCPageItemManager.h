/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <Home/HFItemManager.h>

@interface HUCCPageItemManager : HFItemManager {

	BOOL _homeAppRemoved;

}

@property (assign,getter=isHomeAppRemoved,nonatomic) BOOL homeAppRemoved;              //@synthesize homeAppRemoved=_homeAppRemoved - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowScenesPage; 
@property (nonatomic,readonly) BOOL shouldShowServicesPage; 
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(BOOL)shouldShowServicesPage;
-(BOOL)shouldShowScenesPage;
-(BOOL)isHomeAppRemoved;
-(void)setHomeAppRemoved:(BOOL)arg1 ;
@end

