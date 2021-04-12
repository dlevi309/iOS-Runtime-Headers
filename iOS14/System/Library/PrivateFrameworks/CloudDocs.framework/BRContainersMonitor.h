/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BRContainersMonitor : NSObject {

	NSMutableDictionary* _observersByContainerID;
	NSMutableDictionary* _notifyTokenByContainerID;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
+(BOOL)isContainerID:(id)arg1 ;
+(id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
+(BOOL)isContainerIDForeground:(id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 forContainerID:(id)arg2 ;
-(void)removeObserver:(id)arg1 forContainerID:(id)arg2 ;
-(void)dealloc;
@end

