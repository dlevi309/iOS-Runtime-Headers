/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class NSArray, NSNumber;

@interface ETDataTensor : NSObject {

	void* _dataPointer;
	NSArray* _dataArray;
	unsigned long long _type;
	NSArray* _shape;
	NSArray* _strides;
	NSNumber* _maxNumberOfElements;
	shared_ptr<Espresso::blob<float, 4> >* _blob;
	vector<std::__1::shared_ptr<unsigned char>, std::__1::allocator<std::__1::shared_ptr<unsigned char> > >* _allocatedImageData;
	float_buffer_t* _float_buffer;
	vImage_Buffer* _imageBuffer;

}

@property (assign) vImage_Buffer* imageBuffer;                                                 //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (assign) vector<std::__1::shared_ptr<unsigned char> allocatedImageData;              //@synthesize allocatedImageData=_allocatedImageData - In the implementation block
@property (assign) float_buffer_t* float_buffer;                                               //@synthesize float_buffer=_float_buffer - In the implementation block
@property (assign) shared_ptr<Espresso::blob<float blob;                                       //@synthesize blob=_blob - In the implementation block
@property (assign,nonatomic) void* dataPointer;                                                //@synthesize dataPointer=_dataPointer - In the implementation block
@property (nonatomic,retain) NSArray * dataArray;                                              //@synthesize dataArray=_dataArray - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * shape;                                                  //@synthesize shape=_shape - In the implementation block
@property (nonatomic,retain) NSArray * strides;                                                //@synthesize strides=_strides - In the implementation block
@property (nonatomic,retain) NSNumber * maxNumberOfElements;                                   //@synthesize maxNumberOfElements=_maxNumberOfElements - In the implementation block
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(vImage_Buffer*)imageBuffer;
-(void*)dataPointer;
-(NSArray *)shape;
-(NSArray *)strides;
-(void)setShape:(NSArray *)arg1 ;
-(id)initWithData:(void*)arg1 type:(unsigned long long)arg2 shape:(id)arg3 strides:(id)arg4 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 imageParameters:(id)arg2 error:(id*)arg3 ;
-(NSArray *)dataArray;
-(void)setDataArray:(NSArray *)arg1 ;
-(void)setStrides:(NSArray *)arg1 ;
-(id)initWithBlobContainer:(shared_ptr<Espresso::abstract_blob_container>*)arg1 ;
-(void)setMaxNumberOfElements:(NSNumber *)arg1 ;
-(void)setDataPointer:(void*)arg1 ;
-(NSNumber *)maxNumberOfElements;
-(void)setImageBuffer:(vImage_Buffer*)arg1 ;
-(vector<std::__1::shared_ptr<unsigned char>)allocatedImageData;
-(void)setAllocatedImageData:(vector<std::__1::shared_ptr<unsigned char>)arg1 ;
-(float_buffer_t*)float_buffer;
-(void)setFloat_buffer:(float_buffer_t*)arg1 ;
-(shared_ptr<Espresso::blob<float)blob;
-(void)setBlob:(shared_ptr<Espresso::blob<float)arg1 ;
@end

