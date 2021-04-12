/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class MTTreatment, NSDictionary;

@interface MTTreatmentContext : NSObject {

	MTTreatment* _treatment;
	NSDictionary* _metrics;

}

@property (nonatomic,retain) MTTreatment * treatment;              //@synthesize treatment=_treatment - In the implementation block
@property (nonatomic,retain) NSDictionary * metrics;               //@synthesize metrics=_metrics - In the implementation block
-(void)setMetrics:(NSDictionary *)arg1 ;
-(MTTreatment *)treatment;
-(NSDictionary *)metrics;
-(void)setTreatment:(MTTreatment *)arg1 ;
-(id)initWithTreatment:(id)arg1 metrics:(id)arg2 ;
@end

