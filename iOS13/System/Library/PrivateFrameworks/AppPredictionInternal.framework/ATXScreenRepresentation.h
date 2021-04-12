/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSObject;

@interface ATXScreenRepresentation : NSObject {

	NSMutableOrderedSet* _scr;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)getAllObjects;
-(unsigned long long)findPosition:(id)arg1 ;
@end

