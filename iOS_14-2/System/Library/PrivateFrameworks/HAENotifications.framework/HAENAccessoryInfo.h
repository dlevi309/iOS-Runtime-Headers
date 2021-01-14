/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


@class NSString, NSNumber;

@interface HAENAccessoryInfo : NSObject {

	NSString* _manufacturer;
	NSString* _serialNumber;
	NSString* _name;
	NSString* _modelNumber;
	NSNumber* _interfaceDeviceSerialNumber;
	NSString* _interfaceModuleSerialNumber;

}

@property (readonly) NSString * manufacturer;                             //@synthesize manufacturer=_manufacturer - In the implementation block
@property (readonly) NSString * serialNumber;                             //@synthesize serialNumber=_serialNumber - In the implementation block
@property (readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (readonly) NSString * modelNumber;                              //@synthesize modelNumber=_modelNumber - In the implementation block
@property (readonly) NSNumber * interfaceDeviceSerialNumber;              //@synthesize interfaceDeviceSerialNumber=_interfaceDeviceSerialNumber - In the implementation block
@property (readonly) NSString * interfaceModuleSerialNumber;              //@synthesize interfaceModuleSerialNumber=_interfaceModuleSerialNumber - In the implementation block
+(id)getAccessoryInfo:(id*)arg1 ;
+(id)getAccessoryInfoFromIOAccesoryManager:(id*)arg1 ;
+(id)getAccessoryInfoFromIOKitDirectly:(id*)arg1 ;
-(NSString *)serialNumber;
-(NSString *)manufacturer;
-(NSString *)name;
-(id)description;
-(NSString *)modelNumber;
-(NSNumber *)interfaceDeviceSerialNumber;
-(NSString *)interfaceModuleSerialNumber;
@end

