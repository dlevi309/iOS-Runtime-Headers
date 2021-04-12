/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

