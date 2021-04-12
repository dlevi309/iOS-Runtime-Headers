/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(void)addNode:(id)arg1 ;
-(void)_addNode:(id)arg1 ;
-(id)cachedNodeForNode:(id)arg1 ;
-(id)retrieveAndCacheNode:(id)arg1 ;
@end

