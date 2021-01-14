/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface NURenderNodeCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _cache;

}
+(id)sharedInstance;
-(id)init;
-(id)debugDescription;
-(id)description;
-(void)_addNode:(id)arg1 ;
-(void)addNode:(id)arg1 ;
-(id)cachedNodeForNode:(id)arg1 ;
-(id)retrieveAndCacheNode:(id)arg1 ;
@end

