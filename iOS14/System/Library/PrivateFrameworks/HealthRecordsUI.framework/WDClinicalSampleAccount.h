/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class NSDictionary, WDClinicalSampleAccountProvider, NSArray;

@interface WDClinicalSampleAccount : NSObject {

	NSDictionary* _properties;
	WDClinicalSampleAccountProvider* _provider;
	NSArray* _batches;

}

@property (nonatomic,copy) NSDictionary * properties;                                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) WDClinicalSampleAccountProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSArray * batches;                                         //@synthesize batches=_batches - In the implementation block
-(void)setProvider:(WDClinicalSampleAccountProvider *)arg1 ;
-(NSDictionary *)properties;
-(WDClinicalSampleAccountProvider *)provider;
-(NSArray *)batches;
-(void)setBatches:(NSArray *)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
@end

