/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLHeapDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) unsigned long long size; 
@property (assign,nonatomic) unsigned long long storageMode; 
@property (assign,nonatomic) unsigned long long cpuCacheMode; 
@property (assign,nonatomic) unsigned long long hazardTrackingMode; 
@property (assign,nonatomic) unsigned long long resourceOptions; 
@property (assign,nonatomic) long long type; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

