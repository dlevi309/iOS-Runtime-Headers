/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>
#import <libobjc.A.dylib/HUSelectableCellProtocol.h>

@class HURecommendationListContentItemManager, HURecommendationItemModuleController, NSString;

@interface HURecommendationListContentViewController : HUItemTableViewController <HUPreloadableViewController, HUSelectableCellProtocol> {

	BOOL canBeSelected;
	unsigned long long _selectionType;
	HURecommendationListContentItemManager* _recommendationItemManager;
	HURecommendationItemModuleController* _recommendationItemModuleController;

}

@property (nonatomic,retain) HURecommendationListContentItemManager * recommendationItemManager;                     //@synthesize recommendationItemManager=_recommendationItemManager - In the implementation block
@property (nonatomic,retain) HURecommendationItemModuleController * recommendationItemModuleController;              //@synthesize recommendationItemModuleController=_recommendationItemModuleController - In the implementation block
@property (nonatomic,readonly) unsigned long long selectionType;                                                     //@synthesize selectionType=_selectionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL canBeSelected; 
-(void)viewWillLayoutSubviews;
-(unsigned long long)selectionType;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(void)setCanBeSelected:(BOOL)arg1 ;
-(BOOL)canBeSelected;
-(HURecommendationItemModuleController *)recommendationItemModuleController;
-(id)initWithServiceLikeItems:(id)arg1 selectionType:(unsigned long long)arg2 ;
-(id)commitSelectedChanges;
-(HURecommendationListContentItemManager *)recommendationItemManager;
-(void)setRecommendationItemManager:(HURecommendationListContentItemManager *)arg1 ;
-(void)setRecommendationItemModuleController:(HURecommendationItemModuleController *)arg1 ;
@end

