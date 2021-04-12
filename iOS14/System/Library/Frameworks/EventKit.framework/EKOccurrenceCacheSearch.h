/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/EKCancellableRemoteOperation.h>

@class NSSet, NSString, EKEventStore, NSNumber;

@interface EKOccurrenceCacheSearch : NSObject <EKCancellableRemoteOperation> {

	NSSet* _calendars;
	NSString* _searchTerm;
	EKEventStore* _store;
	/*^block*/id _callback;
	NSNumber* _replyID;
	BOOL _canceled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)disconnect;
-(void)run;
-(id)searchTerm;
-(id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(/*^block*/id)arg4 ;
-(int)performSearchOperation:(unsigned)arg1 inCalendars:(id)arg2 withEventStore:(id)arg3 andSearchTerm:(id)arg4 ;
-(void)receivedBatchResultsFromServer:(id)arg1 finished:(BOOL)arg2 ;
-(void)cancel;
@end

