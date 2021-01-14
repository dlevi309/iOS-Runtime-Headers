/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/Platform-Bluetooth.platform/Platform-Bluetooth
*/


@class NSString, NSMutableDictionary;

@interface ACCPlatformBluetoothStatusAccessory : NSObject {

	NSString* _accessoryUID;
	NSMutableDictionary* _componentList;

}

@property (nonatomic,readonly) NSString * accessoryUID;                          //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * componentList;              //@synthesize componentList=_componentList - In the implementation block
-(id)initWithUID:(id)arg1 ;
-(id)description;
-(NSString *)accessoryUID;
-(NSMutableDictionary *)componentList;
@end

