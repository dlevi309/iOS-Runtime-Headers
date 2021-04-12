/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSDictionary;

@interface MTMetricsDataPredicate : NSObject {

	NSDictionary* _fieldPredicates;

}

@property (nonatomic,retain) NSDictionary * fieldPredicates;              //@synthesize fieldPredicates=_fieldPredicates - In the implementation block
+(id)predicateWithType:(id)arg1 argument:(id)arg2 ;
+(id)predicateWithConfigData:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithFormat:(id)arg1 ;
-(void)setFieldPredicates:(NSDictionary *)arg1 ;
-(NSDictionary *)fieldPredicates;
-(BOOL)evaluateWithMetricsData:(id)arg1 ;
@end

