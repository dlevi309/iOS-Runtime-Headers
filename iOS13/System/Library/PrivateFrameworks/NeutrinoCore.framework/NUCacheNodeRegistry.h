/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface NUCacheNodeRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _registry;

}
-(id)init;
-(void)registerClass:(Class)arg1 forCacheNodeType:(id)arg2 ;
-(Class)classForCacheNodeType:(id)arg1 ;
@end

