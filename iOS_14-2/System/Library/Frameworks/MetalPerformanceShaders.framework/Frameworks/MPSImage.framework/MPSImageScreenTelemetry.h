/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageScreenTelemetry : MPSUnaryImageKernel {

	unsigned long long _zoneWidth;
	unsigned long long _zoneHeight;
	unsigned long long _numberOfZonesInX;
	unsigned long long _numberOfZonesInY;
	SCD_Struct_MP10 _sourceRegion;

}

@property (assign,nonatomic) unsigned long long zoneWidth;                     //@synthesize zoneWidth=_zoneWidth - In the implementation block
@property (assign,nonatomic) unsigned long long zoneHeight;                    //@synthesize zoneHeight=_zoneHeight - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfZonesInX;              //@synthesize numberOfZonesInX=_numberOfZonesInX - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfZonesInY;              //@synthesize numberOfZonesInY=_numberOfZonesInY - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP10 sourceRegion;                     //@synthesize sourceRegion=_sourceRegion - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setZoneHeight:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 ;
-(void)setNumberOfZonesInY:(unsigned long long)arg1 ;
-(void)setNumberOfZonesInX:(unsigned long long)arg1 ;
-(void)setZoneWidth:(unsigned long long)arg1 ;
-(void)dealloc;
-(SCD_Struct_MP10)sourceRegion;
-(void)setSourceRegion:(SCD_Struct_MP10)arg1 ;
-(unsigned long long)zoneWidth;
-(unsigned long long)zoneHeight;
-(unsigned long long)numberOfZonesInX;
-(unsigned long long)numberOfZonesInY;
@end

