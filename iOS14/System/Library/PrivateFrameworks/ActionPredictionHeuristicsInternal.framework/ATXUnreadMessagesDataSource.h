/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@protocol OS_dispatch_queue;
@class ATXHeuristicDevice, NSObject;

@interface ATXUnreadMessagesDataSource : NSObject {

	ATXHeuristicDevice* _device;
	NSObject*<OS_dispatch_queue> _resultsQueue;

}
-(id)initWithDevice:(id)arg1 ;
-(void)unreadMessagesWithLimit:(long long)arg1 callback:(/*^block*/id)arg2 ;
@end

