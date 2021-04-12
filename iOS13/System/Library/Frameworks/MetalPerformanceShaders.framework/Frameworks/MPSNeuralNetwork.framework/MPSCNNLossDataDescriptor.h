/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPSImageCoordinate)size;
-(unsigned long long)bytesPerRow;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(unsigned long long)layout;
-(unsigned long long)bytesPerImage;
-(void)setBytesPerImage:(unsigned long long)arg1 ;
@end

