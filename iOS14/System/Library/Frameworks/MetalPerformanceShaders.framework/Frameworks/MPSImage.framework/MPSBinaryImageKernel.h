/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSBinaryImageKernel : MPSKernel {

	SCD_Struct_MP10 _clipRect;
	SCD_Struct_MP13 _primaryOffset;
	SCD_Struct_MP13 _secondaryOffset;
	unsigned long long _primaryEdgeMode;
	unsigned long long _secondaryEdgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	void* _encodeData;
	const SCD_Struct_MP9* _preferredTileSize;

}

@property (assign,nonatomic) SCD_Struct_MP13 primaryOffset;                     //@synthesize primaryOffset=_primaryOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP13 secondaryOffset;                   //@synthesize secondaryOffset=_secondaryOffset - In the implementation block
@property (assign,nonatomic) unsigned long long primaryEdgeMode;                //@synthesize primaryEdgeMode=_primaryEdgeMode - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryEdgeMode;              //@synthesize secondaryEdgeMode=_secondaryEdgeMode - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP10 clipRect;                          //@synthesize clipRect=_clipRect - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(SCD_Struct_MP13)primaryOffset;
-(SCD_Struct_MP13)secondaryOffset;
-(void)setClipRect:(SCD_Struct_MP10)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4 ;
-(SCD_Struct_MP10)clipRect;
-(void)setSecondaryEdgeMode:(unsigned long long)arg1 ;
-(void)setPrimaryOffset:(SCD_Struct_MP13)arg1 ;
-(void)setSecondaryOffset:(SCD_Struct_MP13)arg1 ;
-(unsigned long long)primaryEdgeMode;
-(MPSRegion)primarySourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(unsigned long long)secondaryEdgeMode;
-(MPSRegion)secondarySourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(void)setPrimaryEdgeMode:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 secondaryTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(BOOL)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 inPlaceSecondaryTexture:(id*)arg3 fallbackCopyAllocator:(/*^block*/id)arg4 ;
-(BOOL)encodeToCommandBuffer:(id)arg1 inPlacePrimaryTexture:(id*)arg2 secondaryTexture:(id)arg3 fallbackCopyAllocator:(/*^block*/id)arg4 ;
@end

