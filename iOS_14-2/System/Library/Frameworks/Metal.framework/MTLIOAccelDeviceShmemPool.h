/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@interface MTLIOAccelDeviceShmemPool : NSObject {

	MTLIOAccelDeviceShmemPoolPrivate* _priv;

}
-(void)prune;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned)arg3 options:(id)arg4 ;
-(unsigned)shmemSize;
-(void)setShmemSize:(unsigned)arg1 ;
-(int)availableCount;
-(void)purge;
-(void)dealloc;
@end

