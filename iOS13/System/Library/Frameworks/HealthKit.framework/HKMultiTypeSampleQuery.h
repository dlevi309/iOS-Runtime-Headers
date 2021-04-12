/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(id)init;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)resultsHandler;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithQueryCursor:(id)arg1 limit:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 limit:(unsigned long long)arg6 resultsHandler:(/*^block*/id)arg7 ;
-(void)client_deliverSampleObjects:(id)arg1 queryCursor:(id)arg2 deliverResults:(BOOL)arg3 query:(id)arg4 ;
-(void)setQueryCursor:(HKMultiTypeQueryCursor *)arg1 ;
-(HKMultiTypeQueryCursor *)queryCursor;
@end

