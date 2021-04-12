/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@class NSArray;

@interface MLMultiArray : NSObject {

	MultiArrayBuffer* _pArray;
	BOOL _managingData;
	/*^block*/id _deallocator;
	NSArray* _shape;
	NSArray* _strides;

}

@property (nonatomic,readonly) unsigned long long numberOfBytesPerElement; 
@property (getter=isManagingData,nonatomic,readonly) BOOL managingData; 
@property (getter=isContiguous,nonatomic,readonly) BOOL contiguous; 
@property (nonatomic,readonly) void* dataPointer; 
@property (nonatomic,readonly) long long dataType; 
@property (nonatomic,readonly) NSArray * shape;                                         //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) NSArray * strides;                                       //@synthesize strides=_strides - In the implementation block
@property (nonatomic,readonly) long long count; 
+(id)stringForDataType:(long long)arg1 ;
+(vector<unsigned long, std::__1::allocator<unsigned long> >*)indexVectorFromArray:(id)arg1 ;
+(id)arrayFromIndexVector:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg1 ;
+(int)cppStorageOrder:(long long)arg1 ;
+(id)doubleMultiArrayWithCopyOfMultiArray:(id)arg1 ;
+(id)doubleVectorWithValues:(id)arg1 ;
+(id)doubleMultiArrayWithShape:(id)arg1 valueArray:(id)arg2 error:(id*)arg3 ;
+(id)doubleMatrixWithValues:(id)arg1 error:(id*)arg2 ;
+(CVBufferRef)pixelBufferGray8FromMultiArrayHW:(id)arg1 error:(id*)arg2 ;
+(CVBufferRef)pixelBufferBGRA8FromMultiArrayCHW:(id)arg1 channelOrderIsBGR:(BOOL)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)count;
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)debugQuickLookObject;
-(id)initWithDataPointer:(void*)arg1 shape:(id)arg2 dataType:(long long)arg3 strides:(id)arg4 deallocator:(/*^block*/id)arg5 error:(id*)arg6 ;
-(void*)dataPointer;
-(NSArray *)shape;
-(NSArray *)strides;
-(long long)dataType;
-(id)initWithShape:(id)arg1 dataType:(long long)arg2 error:(id*)arg3 ;
-(id)numberAtOffset:(unsigned long long)arg1 ;
-(void)setNumber:(id)arg1 atOffset:(unsigned long long)arg2 ;
-(unsigned long long)offsetForKeyedSubscript:(id)arg1 ;
-(id)initWithShape:(id)arg1 dataType:(long long)arg2 storageOrder:(long long)arg3 error:(id*)arg4 ;
-(unsigned long long)numberOfBytesPerElement;
-(BOOL)isEqualToMultiArray:(id)arg1 ;
-(BOOL)isManagingData;
-(BOOL)isContiguous;
-(BOOL)isContiguousInOrder:(long long)arg1 ;
-(double*)doublePointer;
-(BOOL)copyIntoMultiArray:(id)arg1 error:(id*)arg2 ;
-(BOOL)vectorizeIntoMultiArray:(id)arg1 storageOrder:(long long)arg2 error:(id*)arg3 ;
-(BOOL)fillWithNumber:(id)arg1 ;
-(BOOL)setRangeWithRawData:(id)arg1 destIndex:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)numberArray;
-(id)sliceAtOrigin:(id)arg1 shape:(id)arg2 squeeze:(BOOL)arg3 error:(id*)arg4 ;
-(id)squeeze;
-(id)squeezeDimensions:(id)arg1 error:(id*)arg2 ;
-(void*)multiArrayBuffer;
@end

