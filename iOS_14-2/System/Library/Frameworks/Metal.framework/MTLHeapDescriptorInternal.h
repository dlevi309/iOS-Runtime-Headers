/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLHeapDescriptor.h>

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {

	MTLHeapDescriptorPrivate* _private;

}

@property (assign,nonatomic) unsigned long long sparsePageSize; 
@property (assign,nonatomic) BOOL sparsePageAccessCountersEnabled; 
-(unsigned long long)cpuCacheMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setResourceOptions:(unsigned long long)arg1 ;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)storageMode;
-(BOOL)sparsePageAccessCountersEnabled;
-(unsigned long long)size;
-(void)setSparsePageAccessCountersEnabled:(BOOL)arg1 ;
-(const MTLHeapDescriptorPrivate*)descriptorPrivate;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setSparsePageSize:(unsigned long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(unsigned long long)sparsePageSize;
-(long long)type;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)hash;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(BOOL)validateWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)resourceOptions;
-(void)setHazardTrackingMode:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

