/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSArray *)batches;
-(void)setBatches:(NSArray *)arg1 ;
-(WDClinicalSampleAccountProvider *)provider;
@end

