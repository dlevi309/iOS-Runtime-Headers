/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NUGLContextPool : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _contexts;

}
+(id)sharedContextPool;
-(id)init;
-(id)newContext;
-(id)newContextForDevice:(id)arg1 ;
-(void)returnContext:(id)arg1 ;
-(id)_newContext;
-(void)_returnContext:(id)arg1 ;
@end

