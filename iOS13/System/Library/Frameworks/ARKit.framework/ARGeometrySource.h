/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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
-(BOOL)isEqual:(id)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(unsigned long long)format;
-(void)setOffset:(long long)arg1 ;
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)buffer;
-(long long)offset;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setStride:(long long)arg1 ;
-(long long)stride;
-(long long)componentsPerVector;
-(id)initWithBuffer:(id)arg1 count:(long long)arg2 format:(unsigned long long)arg3 componentsPerVector:(long long)arg4 offset:(long long)arg5 stride:(long long)arg6 ;
-(unsigned long long)componentSize;
-(void)setComponentsPerVector:(long long)arg1 ;
@end

