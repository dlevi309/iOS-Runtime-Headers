/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MPSCNNLossDataDescriptor : NSObject <NSCopying> {

	NSData* _data;
	unsigned long long _layout;
	MPSImageCoordinate _size;
	unsigned long long _bytesPerRow;
	unsigned long long _bytesPerImage;

}

@property (nonatomic,readonly) unsigned long long layout;                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) MPSImageCoordinate size;                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRow;                //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerImage;              //@synthesize bytesPerImage=_bytesPerImage - In the implementation block
+(id)cnnLossDataDescriptorWithData:(id)arg1 layout:(unsigned long long)arg2 size:(MPSImageCoordinate)arg3 ;
-(MPSImageCoordinate)size;
-(unsigned long long)bytesPerRow;
-(void)setBytesPerImage:(unsigned long long)arg1 ;
-(id)debugDescription;
-(unsigned long long)bytesPerImage;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)layout;
@end

