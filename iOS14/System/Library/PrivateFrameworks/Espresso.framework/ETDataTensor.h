/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShape:(NSArray *)arg1 ;
-(NSArray *)shape;
-(NSArray *)dataArray;
-(shared_ptr<Espresso::blob<float)blob;
-(void)setType:(unsigned long long)arg1 ;
-(NSArray *)strides;
-(id)description;
-(unsigned long long)type;
-(id)initWithBlobContainer:(shared_ptr<Espresso::abstract_blob_container>*)arg1 ;
-(vImage_Buffer*)imageBuffer;
-(void)setBlob:(shared_ptr<Espresso::blob<float)arg1 ;
-(void*)dataPointer;
-(void)setMaxNumberOfElements:(NSNumber *)arg1 ;
-(id)initWithData:(void*)arg1 type:(unsigned long long)arg2 shape:(id)arg3 strides:(id)arg4 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 imageParameters:(id)arg2 error:(id*)arg3 ;
-(void)setDataPointer:(void*)arg1 ;
-(NSNumber *)maxNumberOfElements;
-(void)setImageBuffer:(vImage_Buffer*)arg1 ;
-(float_buffer_t*)float_buffer;
-(void)setStrides:(NSArray *)arg1 ;
-(vector<std::__1::shared_ptr<unsigned char>)allocatedImageData;
-(void)setAllocatedImageData:(vector<std::__1::shared_ptr<unsigned char>)arg1 ;
-(void)setFloat_buffer:(float_buffer_t*)arg1 ;
-(void)setDataArray:(NSArray *)arg1 ;
@end

