/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSWorkspaceFencing.h>

@protocol OS_dispatch_queue;
@class NSObject, FBSSerialQueue, BSMutableIntegerMap, BSMutableIntegerSet, NSString;

@interface FBSWorkspaceFencingImpl : NSObject <FBSWorkspaceFencing> {

	NSObject*<OS_dispatch_queue> _queue;
	FBSSerialQueue* _callOutQueue;
	unsigned long long _signpostName;
	BSMutableIntegerMap* _triggerToFenceNameMap;
	BSMutableIntegerSet* _triggersToIgnore;
	BOOL _synchronizingFence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 ;
-(id)requestSystemAnimationFence;
-(BOOL)trackSystemAnimationFence:(id)arg1 ;
-(BOOL)isTrackingAnySystemAnimationFence;
@end

