/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>
#import <libobjc.A.dylib/HFServiceLikeBuilderCreating.h>
#import <libobjc.A.dylib/HFItemBuilderItem.h>
#import <libobjc.A.dylib/HFGroupableItemProtocol.h>

@class HMAccessory, NSDictionary, NSString, HMHome, NSSet;

@interface HFDemoModeAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating, HFItemBuilderItem, HFGroupableItemProtocol> {

	HMAccessory* _accessory;
	NSDictionary* _configInfo;

}

@property (nonatomic,retain) NSDictionary * configInfo;                                           //@synthesize configInfo=_configInfo - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                                      //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
@property (nonatomic,readonly) BOOL isItemGroup; 
@property (nonatomic,readonly) BOOL isContainedWithinItemGroup; 
@property (nonatomic,readonly) unsigned long long numberOfItemsContainedWithinGroup; 
+(id)accessoryItemForAccessory:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(NSSet *)services;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)accessories;
-(NSDictionary *)configInfo;
-(id)initWithAccessory:(id)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)hf_serviceNameComponents;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)mediaProfileContainer;
-(BOOL)isItemGroup;
-(BOOL)isContainedWithinItemGroup;
-(unsigned long long)numberOfItemsContainedWithinGroup;
-(BOOL)isMediaSystemDemoType;
-(void)setConfigInfo:(NSDictionary *)arg1 ;
@end

