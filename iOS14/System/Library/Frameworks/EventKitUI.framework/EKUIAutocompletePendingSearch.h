/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <libobjc.A.dylib/EKUIAutocompletePendingSearchProtocol.h>

@protocol CalSpotlightQueryPendingSearchProtocol;
@class EKEventStore, NSString;

@interface EKUIAutocompletePendingSearch : NSObject <EKUIAutocompletePendingSearchProtocol> {

	EKEventStore* _eventStore;
	unsigned long long _maximumResultCount;
	id<CalSpotlightQueryPendingSearchProtocol> _pendingSearch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_queue;
+(id)_eventKitQueue;
+(void)_updateResult:(id)arg1 withEvent:(id)arg2 ;
-(void)searchWithString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancel;
@end

