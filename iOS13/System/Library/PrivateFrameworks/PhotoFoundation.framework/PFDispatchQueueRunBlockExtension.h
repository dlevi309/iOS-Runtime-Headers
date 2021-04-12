/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueRunBlockExtension : PFDispatchQueueExtension
+(id)alloc;
+(void)initialize;
+(id)sharedRunBlockExtension;
-(id)init;
-(id)initInternal;
-(void)installOnQueue:(id)arg1 ;
-(id)queue:(id)arg1 willTargetQueue:(id)arg2 ;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
@end

