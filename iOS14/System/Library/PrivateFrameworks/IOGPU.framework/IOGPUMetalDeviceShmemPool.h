/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/


#import <IOGPU/IOGPU-Structs.h>
@interface IOGPUMetalDeviceShmemPool : NSObject {

	IOGPUMetalDeviceShmemPoolPrivate* _priv;

}
-(void)prune;
-(unsigned)shmemSize;
-(void)setShmemSize:(unsigned)arg1 ;
-(int)availableCount;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned)arg3 shmemType:(int)arg4 options:(id)arg5 ;
-(void)purge;
-(void)dealloc;
@end

