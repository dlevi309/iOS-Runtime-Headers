/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)searchWithString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

