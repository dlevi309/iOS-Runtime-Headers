/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class NSArray;

@interface ETImagePreprocessor : NSObject {

	vimage2espresso_param param;
	shared_ptr<Espresso::blob_cpu>* imageBlob;
	shared_ptr<Espresso::abstract_context>* ctx;
	unsigned long long nChannels;
	NSArray* imageShape;
	unsigned long long bytesPerPixel;
	unsigned long long bitsPerComponent;
	CGColorSpaceRef colorSpace;
	vImage_Buffer* targetBuffer;
	vImage_Buffer* srcBuffer;
	unsigned long long currentSrcBufferSize;

}
-(void)loadSrcBufferWithCGImage:(CGImageRef)arg1 ;
-(void)preprocess;
-(id)tensorWithCGImage:(CGImageRef)arg1 ;
-(id)tensorWithPath:(id)arg1 ;
-(id)initWithImagePreprocessParams:(id)arg1 ;
-(void)dealloc;
@end

