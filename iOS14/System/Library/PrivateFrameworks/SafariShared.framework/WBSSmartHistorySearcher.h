/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface WBSSmartHistorySearcher : NSObject {

	NSArray* _topics;
	NSObject*<OS_dispatch_queue> _searchQueue;

}
-(id)_searchItemsInTopic:(id)arg1 forText:(id)arg2 options:(unsigned long long)arg3 ;
-(id)_searchTopicsForText:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithTopics:(id)arg1 ;
-(void)performSearchWithText:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

