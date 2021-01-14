/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKMultiTypeSampleQueryClientInterface.h>

@class NSMutableArray, HKMultiTypeQueryCursor, NSString;

@interface HKMultiTypeSampleQuery : HKQuery <HKMultiTypeSampleQueryClientInterface> {

	NSMutableArray* _samplesPendingDelivery;
	HKMultiTypeQueryCursor* _queryCursor;
	unsigned long long _limit;
	/*^block*/id _resultsHandler;

}

@property (nonatomic,copy) HKMultiTypeQueryCursor * queryCursor;              //@synthesize queryCursor=_queryCursor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy,readonly) id resultsHandler;                        //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(unsigned long long)limit;
-(id)init;
-(void)queue_deliverError:(id)arg1 ;
-(void)client_deliverSampleObjects:(id)arg1 queryCursor:(id)arg2 deliverResults:(BOOL)arg3 query:(id)arg4 ;
-(id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 limit:(unsigned long long)arg6 resultsHandler:(/*^block*/id)arg7 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)resultsHandler;
-(HKMultiTypeQueryCursor *)queryCursor;
-(void)setQueryCursor:(HKMultiTypeQueryCursor *)arg1 ;
-(id)initWithQueryCursor:(id)arg1 limit:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)queue_validate;
@end

