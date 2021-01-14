/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@class NSDictionary, AMSUIDynamicImpressionMetricsIdentifier;

@interface AMSUIDynamicImpressionMetrics : NSObject {

	NSDictionary* _custom;
	NSDictionary* _fields;
	AMSUIDynamicImpressionMetricsIdentifier* _identifier;

}

@property (nonatomic,retain) NSDictionary * custom;                                             //@synthesize custom=_custom - In the implementation block
@property (nonatomic,retain) NSDictionary * fields;                                             //@synthesize fields=_fields - In the implementation block
@property (nonatomic,retain) AMSUIDynamicImpressionMetricsIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setFields:(NSDictionary *)arg1 ;
-(NSDictionary *)fields;
-(NSDictionary *)custom;
-(void)setIdentifier:(AMSUIDynamicImpressionMetricsIdentifier *)arg1 ;
-(AMSUIDynamicImpressionMetricsIdentifier *)identifier;
-(void)setCustom:(NSDictionary *)arg1 ;
-(id)initWithIdentifier:(id)arg1 fields:(id)arg2 custom:(id)arg3 ;
@end

