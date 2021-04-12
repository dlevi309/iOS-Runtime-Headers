/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)model;
-(unsigned long long)properties;
-(NSString *)manufacturer;
-(NSString *)ssid;
-(NSString *)name;
-(NSString *)macAddress;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAirPortAssistantWACDevice:(id)arg1 ;
@end

