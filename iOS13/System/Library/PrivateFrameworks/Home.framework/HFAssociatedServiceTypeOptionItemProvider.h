/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFStaticItemProvider.h>

@class HMHome, HMService, NSString;

@interface HFAssociatedServiceTypeOptionItemProvider : HFStaticItemProvider {

	HMHome* _home;
	HMService* _service;
	NSString* _serviceType;

}

@property (nonatomic,readonly) HMHome * home;                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMService * service;                 //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;              //@synthesize serviceType=_serviceType - In the implementation block
+(id)_allItemsForService:(id)arg1 serviceType:(id)arg2 ;
+(id)_itemForService:(id)arg1 associatedServiceType:(id)arg2 ;
+(id)localizedAssociatedServiceTypeStringForServiceType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serviceType;
-(HMHome *)home;
-(HMService *)service;
-(id)initWithItems:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 home:(id)arg2 ;
-(id)initWithService:(id)arg1 serviceType:(id)arg2 home:(id)arg3 ;
@end

