/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFCharacteristicValueSource, HFServiceLikeItem;
@class HMActionSet, HFItem, NSString;

@interface HFActionSetItem : HFItem <HFHomeKitItemProtocol, NSCopying> {

	HMActionSet* _actionSet;
	unsigned long long _actionSetItemStyle;
	id<HFCharacteristicValueSource> _valueSource;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;

}

@property (nonatomic,readonly) HMActionSet * actionSet;                                  //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSetItemStyle;                    //@synthesize actionSetItemStyle=_actionSetItemStyle - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,copy) HFItem*<HFServiceLikeItem> serviceLikeItem;                   //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
+(id)_primaryStateForActionSet:(id)arg1 valueSource:(id)arg2 logger:(id)arg3 fastInitialUpdate:(BOOL)arg4 ;
+(BOOL)_value:(id)arg1 isApproximatelyEqualToValue:(id)arg2 forMinimumValue:(id)arg3 maximumValue:(id)arg4 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)rooms;
-(HMActionSet *)actionSet;
-(id<HFCharacteristicValueSource>)valueSource;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)actionSetItemStyle;
-(void)setServiceLikeItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(id)initWithActionSet:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 valueSource:(id)arg3 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1 ;
-(id)_mostCommonRoomForActionSet:(id)arg1 ;
-(id)actionSetOperation:(id)arg1 errorFromError:(id)arg2 ;
-(id)executeActionSet;
-(id)turnOffActionSet;
@end

