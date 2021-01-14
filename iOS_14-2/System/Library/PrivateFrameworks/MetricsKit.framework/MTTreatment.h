/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class MTMetricsDataPredicate, MTTreatmentAction, NSDictionary;

@interface MTTreatment : NSObject {

	MTMetricsDataPredicate* _predicate;
	MTTreatmentAction* _eventAction;
	NSDictionary* _fieldActions;

}

@property (nonatomic,retain) MTMetricsDataPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) MTTreatmentAction * eventAction;                 //@synthesize eventAction=_eventAction - In the implementation block
@property (nonatomic,retain) NSDictionary * fieldActions;                     //@synthesize fieldActions=_fieldActions - In the implementation block
+(id)treatmentWithConfigData:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(MTMetricsDataPredicate *)predicate;
-(void)setPredicate:(MTMetricsDataPredicate *)arg1 ;
-(void)setEventAction:(MTTreatmentAction *)arg1 ;
-(void)setFieldActions:(NSDictionary *)arg1 ;
-(MTTreatmentAction *)eventAction;
-(NSDictionary *)fieldActions;
-(id)performTreatment:(id)arg1 ;
@end

