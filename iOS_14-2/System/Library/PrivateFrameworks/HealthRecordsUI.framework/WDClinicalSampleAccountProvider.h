/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class NSString, NSDictionary, WDClinicalSampleAccountProviderGateway;

@interface WDClinicalSampleAccountProvider : NSObject {

	NSString* _identifier;
	NSString* _title;
	NSDictionary* _properties;
	WDClinicalSampleAccountProviderGateway* _gateway;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDictionary * properties;                                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) WDClinicalSampleAccountProviderGateway * gateway;              //@synthesize gateway=_gateway - In the implementation block
-(void)setGateway:(WDClinicalSampleAccountProviderGateway *)arg1 ;
-(NSDictionary *)properties;
-(WDClinicalSampleAccountProviderGateway *)gateway;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
@end

