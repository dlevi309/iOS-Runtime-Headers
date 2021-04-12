/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface EKAvailabilityCache : NSObject {

	BOOL _sourceIsInvalid;
	NSString* _accountID;
	BOOL _sourceSupportsAvailabilityRequests;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _addressesToCachedSpanRanges;
	NSMutableDictionary* _ignoredEventIDsToAddressBasedCaches;
	unsigned long long _nextRequestID;
	unsigned long long _cancelledID;

}
+(BOOL)_isValidStartDate:(id)arg1 endDate:(id)arg2 ;
+(void)_logRequestElapsedTime:(double)arg1 forNumberOfAddresses:(unsigned long long)arg2 ;
+(id)_generateEventKitSpansFromPersistenceSpans:(id)arg1 ;
+(long long)_convertType:(long long)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(id)init;
-(id)description;
-(id)_dictionaryForIgnoredEventID:(id)arg1 ;
-(BOOL)_validateRequestStartDate:(id)arg1 endDate:(id)arg2 addresses:(id)arg3 error:(id*)arg4 ;
-(id)_cachedSpanResultsBetweenStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 ;
-(void)_handleResults:(id)arg1 resultsBlock:(/*^block*/id)arg2 ignoredEventID:(id)arg3 ;
-(id)requestAvailabilityBetweenStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 resultsBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)cachedAvailabilityInDateRange:(id)arg1 ignoredEventID:(id)arg2 addresses:(id)arg3 ;
-(void)cancelAvailabilityRequestWithID:(id)arg1 ;
@end

