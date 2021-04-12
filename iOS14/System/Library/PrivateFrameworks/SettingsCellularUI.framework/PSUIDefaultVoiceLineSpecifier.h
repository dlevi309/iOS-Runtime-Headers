/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class NSArray, PSUICellularPlanManagerCache, CTCellularPlanManager, PSSimStatusCache;

@interface PSUIDefaultVoiceLineSpecifier : PSSpecifier {

	NSArray* _cachedPlanItems;
	PSUICellularPlanManagerCache* _planManagerCache;
	CTCellularPlanManager* _planManager;
	PSSimStatusCache* _simStatusCache;
	NSArray* _cachedSubscriptionContexts;

}

@property (nonatomic,retain) NSArray * cachedPlanItems;                                    //@synthesize cachedPlanItems=_cachedPlanItems - In the implementation block
@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;              //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * planManager;                          //@synthesize planManager=_planManager - In the implementation block
@property (nonatomic,retain) PSSimStatusCache * simStatusCache;                            //@synthesize simStatusCache=_simStatusCache - In the implementation block
@property (nonatomic,retain) NSArray * cachedSubscriptionContexts;                         //@synthesize cachedSubscriptionContexts=_cachedSubscriptionContexts - In the implementation block
@property (nonatomic,readonly) BOOL isSubcontrollerNeeded; 
-(void)setCachedSubscriptionContexts:(NSArray *)arg1 ;
-(NSArray *)cachedSubscriptionContexts;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(id)initWithPlanManagerCache:(id)arg1 planManager:(id)arg2 simStatusCache:(id)arg3 ;
-(void)setDefaultVoiceLine:(id)arg1 specifier:(id)arg2 ;
-(id)defaultVoiceLine:(id)arg1 ;
-(void)updateCachedState;
-(id)planItemForListItem:(id)arg1 ;
-(id)initSpecifier;
-(BOOL)isSubcontrollerNeeded;
-(id)subscriptionContextForListItem:(id)arg1 ;
-(NSArray *)cachedPlanItems;
-(void)setCachedPlanItems:(NSArray *)arg1 ;
-(CTCellularPlanManager *)planManager;
-(void)setPlanManager:(CTCellularPlanManager *)arg1 ;
-(PSSimStatusCache *)simStatusCache;
-(void)setSimStatusCache:(PSSimStatusCache *)arg1 ;
@end

