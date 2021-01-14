/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/MPSImageAllocator.h>

@class NSString;

@interface MLCDeviceGPUHeapAllocator : NSObject <MPSImageAllocator> {

	BOOL _isDebuggingEnabled;
	unsigned long long _heapSize;

}

@property (assign,nonatomic) BOOL isDebuggingEnabled;                    //@synthesize isDebuggingEnabled=_isDebuggingEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long heapSize;              //@synthesize heapSize=_heapSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)imageBatchForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 count:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isDebuggingEnabled;
-(void)setIsDebuggingEnabled:(BOOL)arg1 ;
-(id)initWithHeapSize:(unsigned long long)arg1 ;
-(unsigned long long)heapSize;
@end

