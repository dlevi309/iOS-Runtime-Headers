/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFItemBuilderItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>

@class HFServiceBuilder, HFServiceItem, NSString, HMHome, NSSet;

@interface HFServiceBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem> {

	HFServiceBuilder* _serviceBuilder;
	HFServiceItem* _serviceItem;

}

@property (nonatomic,readonly) HFServiceItem * serviceItem;                              //@synthesize serviceItem=_serviceItem - In the implementation block
@property (nonatomic,readonly) HFServiceBuilder * serviceBuilder;                        //@synthesize serviceBuilder=_serviceBuilder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)services;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithServiceBuilder:(id)arg1 ;
-(id)initWithServiceBuilder:(id)arg1 valueSource:(id)arg2 ;
-(HFServiceBuilder *)serviceBuilder;
-(HFServiceItem *)serviceItem;
@end

