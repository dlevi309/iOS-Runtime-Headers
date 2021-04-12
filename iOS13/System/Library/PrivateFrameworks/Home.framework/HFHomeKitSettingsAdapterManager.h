/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFHomeKitSettingsVendor;
@class NSMutableDictionary;

@interface HFHomeKitSettingsAdapterManager : NSObject {

	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	NSMutableDictionary* _adaptersByID;

}

@property (nonatomic,__weak,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * adaptersByID;                                    //@synthesize adaptersByID=_adaptersByID - In the implementation block
-(id)init;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(id)adapterForIdentifier:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 ;
-(NSMutableDictionary *)adaptersByID;
-(id)_createAdapterForIdentifier:(id)arg1 ;
@end

