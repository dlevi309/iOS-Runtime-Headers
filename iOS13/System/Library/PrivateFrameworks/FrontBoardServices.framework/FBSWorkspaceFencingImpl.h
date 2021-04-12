/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSWorkspaceFencing.h>

@protocol OS_dispatch_queue;
@class NSObject, FBSSerialQueue, BSMutableIntegerMap, NSString;

@interface FBSWorkspaceFencingImpl : NSObject <FBSWorkspaceFencing> {

	NSObject*<OS_dispatch_queue> _queue;
	FBSSerialQueue* _callOutQueue;
	unsigned long long _signpostName;
	BSMutableIntegerMap* _triggerToFenceNameMap;
	BOOL _synchronizingFence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)trackSystemAnimationFence:(id)arg1 ;
-(id)requestSystemAnimationFence;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(BOOL)isTrackingAnySystemAnimationFence;
-(id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 ;
@end

