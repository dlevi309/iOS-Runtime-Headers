/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(WDClinicalSampleAccountProviderGateway *)gateway;
-(void)setGateway:(WDClinicalSampleAccountProviderGateway *)arg1 ;
@end

