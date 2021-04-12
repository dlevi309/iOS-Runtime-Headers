/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLObject.h>

@class NUGLBuffer, NSArray, NUGLVertexLayout;

@interface NUGLVertexArray : NUGLObject {

	NUGLBuffer* _buffer;
	NSArray* _locations;
	BOOL _needsUpdate;
	NUGLVertexLayout* _layout;
	long long _capacity;
	long long _count;
	NSArray* _attributeLocations;

}

@property (nonatomic,readonly) NUGLVertexLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) long long capacity;                     //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) long long count;                        //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSArray * attributeLocations;               //@synthesize attributeLocations=_attributeLocations - In the implementation block
-(id)init;
-(long long)count;
-(long long)capacity;
-(void)reset;
-(NUGLVertexLayout *)layout;
-(void)delete;
-(void)generate:(id)arg1 ;
-(void)ensure:(id)arg1 ;
-(id)initWithLayout:(id)arg1 capacity:(long long)arg2 ;
-(void)setAttributeLocations:(NSArray *)arg1 ;
-(void)_updateAttributesWithContext:(id)arg1 ;
-(void)readVertexDataInRange:(NSRange)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSRange)bufferRangeForVertexRange:(NSRange)arg1 ;
-(NSRange)writeVertexData:(long long)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_growToCapacity:(long long)arg1 context:(id)arg2 ;
-(NSArray *)attributeLocations;
@end

