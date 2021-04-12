/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLAccelerationStructureDescriptor.h>

@class NSArray;

@interface MTLPrimitiveAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {

	NSArray* _geometryDescriptors;

}

@property (nonatomic,retain) NSArray * geometryDescriptors;              //@synthesize geometryDescriptors=_geometryDescriptors - In the implementation block
+(id)descriptor;
-(NSArray *)geometryDescriptors;
-(void)setGeometryDescriptors:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

