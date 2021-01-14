/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class MTLAccelerationStructureDescriptor;


@protocol MTLAccelerationStructureSPI <MTLAccelerationStructure>
@property (nonatomic,readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) id<MTLBuffer> buffer; 
@property (nonatomic,readonly) unsigned long long bufferOffset; 
@property (nonatomic,retain) MTLAccelerationStructureDescriptor * descriptor; 
@optional
-(MTLAccelerationStructureDescriptor *)descriptor;
-(void)setDescriptor:(id)arg1;

@required
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)bufferOffset;
-(id<MTLBuffer>)buffer;

@end

