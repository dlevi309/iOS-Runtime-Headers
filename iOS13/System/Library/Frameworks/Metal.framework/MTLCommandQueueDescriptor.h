/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLCommandQueueDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) unsigned long long maxCommandBufferCount; 
@property (assign,nonatomic) unsigned long long qosLevel; 
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> commitQueue; 
@property (assign,nonatomic) BOOL commitSynchronously; 
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> completionQueue; 
@property (assign,nonatomic) BOOL disableCrossQueueHazardTracking; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)commandQueueDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

