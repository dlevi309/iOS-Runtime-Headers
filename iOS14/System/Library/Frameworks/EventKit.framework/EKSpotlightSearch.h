/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class CSSearchQuery, EKEventStore;

@interface EKSpotlightSearch : NSObject {

	CSSearchQuery* csQuery;
	EKEventStore* _eventStore;

}

@property (__weak) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
+(id)queryStringForSearchTerm:(id)arg1 matchingTypes:(unsigned long long)arg2 fromStartDate:(id)arg3 toEndDate:(id)arg4 ;
+(id)_queryStringForPeopleMatchingSearchTerm:(id)arg1 ;
+(id)searchWithCSQuery:(id)arg1 inStore:(id)arg2 resultHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)queryStringForSearchTerm:(id)arg1 matchingTypes:(unsigned long long)arg2 ;
-(EKEventStore *)eventStore;
-(id)query;
-(void)start;
-(id)initWithSearchWithCSQuery:(id)arg1 inStore:(id)arg2 resultHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)cancel;
@end

