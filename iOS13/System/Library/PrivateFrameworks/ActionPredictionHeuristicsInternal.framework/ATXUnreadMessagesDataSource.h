/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

