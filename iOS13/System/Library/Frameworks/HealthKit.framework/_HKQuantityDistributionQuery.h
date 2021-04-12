/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKQuantityDistributionQueryClientInterface.h>

@class NSDate, NSDateComponents, HKQuantity, NSString;

@interface _HKQuantityDistributionQuery : HKQuery <HKQuantityDistributionQueryClientInterface> {

	NSDate* _startDate;
	NSDate* _endDate;
	long long _contextStyle;
	NSDate* _anchorDate;
	NSDateComponents* _intervalComponents;
	HKQuantity* _histogramAnchor;
	HKQuantity* _histogramBucketSize;
	unsigned long long _options;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) long long contextStyle;                             //@synthesize contextStyle=_contextStyle - In the implementation block
@property (nonatomic,readonly) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (nonatomic,readonly) HKQuantity * histogramAnchor;                       //@synthesize histogramAnchor=_histogramAnchor - In the implementation block
@property (nonatomic,readonly) HKQuantity * histogramBucketSize;                   //@synthesize histogramBucketSize=_histogramBucketSize - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(unsigned long long)options;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)completionHandler;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)client_deliverDistributionCollection:(id)arg1 forQuery:(id)arg2 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contextStyle:(long long)arg4 predicate:(id)arg5 anchorDate:(id)arg6 intervalComponents:(id)arg7 histogramAnchor:(id)arg8 histogramBucketSize:(id)arg9 options:(unsigned long long)arg10 completionHandler:(/*^block*/id)arg11 ;
-(long long)contextStyle;
-(NSDate *)anchorDate;
-(NSDateComponents *)intervalComponents;
-(HKQuantity *)histogramAnchor;
-(HKQuantity *)histogramBucketSize;
@end

