/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet, NSArray, NSMutableDictionary, HUCCPredictionManager;

@interface HUCCPredictionsItemProvider : HFItemProvider {

	HMHome* _home;
	NSMutableSet* _allItems;
	NSArray* _predictions;
	NSMutableDictionary* _objectPriorities;
	HUCCPredictionManager* _predictionManager;
	unsigned long long _itemLimit;

}

@property (nonatomic,retain) NSMutableSet * allItems;                                //@synthesize allItems=_allItems - In the implementation block
@property (nonatomic,retain) NSArray * predictions;                                  //@synthesize predictions=_predictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * objectPriorities;                 //@synthesize objectPriorities=_objectPriorities - In the implementation block
@property (nonatomic,retain) HUCCPredictionManager * predictionManager;              //@synthesize predictionManager=_predictionManager - In the implementation block
@property (assign,nonatomic) unsigned long long itemLimit;                           //@synthesize itemLimit=_itemLimit - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                        //@synthesize home=_home - In the implementation block
-(id)init;
-(NSMutableSet *)allItems;
-(NSArray *)predictions;
-(void)setAllItems:(NSMutableSet *)arg1 ;
-(id)items;
-(id)reloadItems;
-(void)setPredictions:(NSArray *)arg1 ;
-(id)invalidationReasons;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 predictionManager:(id)arg2 itemLimit:(unsigned long long)arg3 ;
-(HUCCPredictionManager *)predictionManager;
-(unsigned long long)itemLimit;
-(id)_loadHomeKitObjectsWithPredictions:(id)arg1 ;
-(void)setObjectPriorities:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)objectPriorities;
-(id)itemPriority:(id)arg1 ;
-(void)setPredictionManager:(HUCCPredictionManager *)arg1 ;
-(void)setItemLimit:(unsigned long long)arg1 ;
@end

