/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
*/


@class NSDictionary, AMSUIDDynamicImpressionMetricsIdentifier;

@interface AMSUIDDynamicImpressionMetrics : NSObject {

	 custom;
	 fields;
	 identifier;

}

@property (copy,nonatomic) NSDictionary * custom; 
@property (copy,nonatomic) NSDictionary * fields; 
@property (retain,nonatomic) AMSUIDDynamicImpressionMetricsIdentifier * identifier; 
-(void)setFields:(NSDictionary *)arg1 ;
-(NSDictionary *)fields;
-(id)init;
-(NSDictionary *)custom;
-(void)setIdentifier:(AMSUIDDynamicImpressionMetricsIdentifier *)arg1 ;
-(AMSUIDDynamicImpressionMetricsIdentifier *)identifier;
-(void)setCustom:(NSDictionary *)arg1 ;
-(id)initWithIdentifier:(id)arg1 fields:(id)arg2 custom:(id)arg3 ;
@end

