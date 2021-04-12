/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLBuffer;
@interface ARGeometrySource : NSObject <NSSecureCoding> {

	id<MTLBuffer> _buffer;
	long long _count;
	unsigned long long _format;
	long long _componentsPerVector;
	long long _offset;
	long long _stride;

}

@property (nonatomic,retain) id<MTLBuffer> buffer;                       //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) long long count;                            //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long format;                  //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) long long componentsPerVector;              //@synthesize componentsPerVector=_componentsPerVector - In the implementation block
@property (assign,nonatomic) long long offset;                           //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) long long stride;                           //@synthesize stride=_stride - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setCount:(long long)arg1 ;
-(unsigned long long)format;
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(void)setStride:(long long)arg1 ;
-(long long)stride;
-(long long)offset;
-(id<MTLBuffer>)buffer;
-(void)setOffset:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBuffer:(id)arg1 count:(long long)arg2 format:(unsigned long long)arg3 componentsPerVector:(long long)arg4 offset:(long long)arg5 stride:(long long)arg6 ;
-(unsigned long long)componentSize;
-(long long)componentsPerVector;
-(void)setComponentsPerVector:(long long)arg1 ;
@end

