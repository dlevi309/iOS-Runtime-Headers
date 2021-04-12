/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>
#import <libobjc.A.dylib/HFActionBuilderFactory.h>
#import <libobjc.A.dylib/HFServiceLikeBuilderCreating.h>
#import <libobjc.A.dylib/HFGroupableItemProtocol.h>

@protocol HFCharacteristicValueSource;
@class HMServiceGroup, NSString, HMHome, NSSet;

@interface HFServiceGroupItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol> {

	id<HFCharacteristicValueSource> _valueSource;
	HMServiceGroup* _serviceGroup;

}

@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;                       //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HMServiceGroup * serviceGroup;                                     //@synthesize serviceGroup=_serviceGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) BOOL isItemGroup; 
@property (nonatomic,readonly) BOOL isContainedWithinItemGroup; 
@property (nonatomic,readonly) unsigned long long numberOfItemsContainedWithinGroup; 
+(BOOL)_isControlItem:(id)arg1 similarToControlItem:(id)arg2 ;
+(BOOL)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2 ;
+(id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(NSSet *)services;
-(id)accessories;
-(HMServiceGroup *)serviceGroup;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)isItemGroup;
-(BOOL)isContainedWithinItemGroup;
-(unsigned long long)numberOfItemsContainedWithinGroup;
-(BOOL)containsActions;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(BOOL)actionsMayRequireDeviceUnlock;
-(id)primaryStateControlItem;
-(id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2 ;
-(id)_buildServiceItems;
-(id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
-(id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(/*^block*/id)arg2 ;
-(id)_sortDescriptorsForServiceItems;
-(id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
-(id)controlPanelItems;
-(id)_buildControlItemsForServiceItems:(id)arg1 ;
-(id)_mergedIconDescriptorForServiceItems:(id)arg1 ;
-(id)_aggregatedValueSource;
-(id)incrementalStateControlItem;
-(id)allControlItems;
-(double)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
-(long long)_highestIntegerValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
@end

