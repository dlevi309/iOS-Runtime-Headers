/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@interface MTLIOAccelDeviceShmemPool : NSObject {

	MTLIOAccelDeviceShmemPoolPrivate* _priv;

}
-(void)dealloc;
-(void)purge;
-(void)prune;
-(unsigned)shmemSize;
-(int)availableCount;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned)arg3 options:(id)arg4 ;
-(void)setShmemSize:(unsigned)arg1 ;
@end

