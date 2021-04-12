/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSString, NSArray;

@interface TIUserModelMetricsDescriptor : NSObject {

	NSString* _name;
	NSArray* _counterNames;

}

@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * counterNames;              //@synthesize counterNames=_counterNames - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithMetricName:(id)arg1 counterNames:(id)arg2 ;
-(NSArray *)counterNames;
@end

