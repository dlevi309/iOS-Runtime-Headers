/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/Platform-Bluetooth.platform/Platform-Bluetooth
*/


@class NSString, NSMutableDictionary;

@interface ACCPlatformBluetoothStatusAccessory : NSObject {

	NSString* _accessoryUID;
	NSMutableDictionary* _componentList;

}

@property (nonatomic,readonly) NSString * accessoryUID;                          //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * componentList;              //@synthesize componentList=_componentList - In the implementation block
-(id)description;
-(NSString *)accessoryUID;
-(NSMutableDictionary *)componentList;
-(id)initWithUID:(id)arg1 ;
@end

