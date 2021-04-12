/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueRunBlockExtension : PFDispatchQueueExtension
+(id)alloc;
+(void)initialize;
+(id)sharedRunBlockExtension;
-(id)initInternal;
-(id)queue:(id)arg1 willTargetQueue:(id)arg2 ;
-(void)installOnQueue:(id)arg1 ;
-(id)init;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
@end

