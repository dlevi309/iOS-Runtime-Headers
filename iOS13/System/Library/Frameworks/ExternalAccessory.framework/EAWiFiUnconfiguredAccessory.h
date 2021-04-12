/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
*/


@class NSString;

@interface EAWiFiUnconfiguredAccessory : NSObject {

	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _ssid;
	NSString* _macAddress;
	unsigned long long _properties;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturer;               //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * ssid;                       //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy,readonly) NSString * macAddress;                 //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long properties;              //@synthesize properties=_properties - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)model;
-(unsigned long long)properties;
-(NSString *)ssid;
-(NSString *)macAddress;
-(NSString *)manufacturer;
-(id)initWithAirPortAssistantWACDevice:(id)arg1 ;
@end

