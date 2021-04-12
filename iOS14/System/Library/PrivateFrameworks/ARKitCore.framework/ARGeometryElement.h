/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLBuffer;
@interface ARGeometryElement : NSObject <NSSecureCoding> {

	id<MTLBuffer> _buffer;
	long long _count;
	long long _bytesPerIndex;
	long long _primitiveType;

}

@property (nonatomic,retain) id<MTLBuffer> buffer;                            //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) long long count;                                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) long long bytesPerIndex;                         //@synthesize bytesPerIndex=_bytesPerIndex - In the implementation block
@property (assign,nonatomic) long long primitiveType;                         //@synthesize primitiveType=_primitiveType - In the implementation block
@property (nonatomic,readonly) long long indexCountPerPrimitive; 
+(BOOL)supportsSecureCoding;
-(void)setCount:(long long)arg1 ;
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(long long)primitiveType;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id<MTLBuffer>)buffer;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBuffer:(id)arg1 count:(long long)arg2 bytesPerIndex:(long long)arg3 primitiveType:(long long)arg4 ;
-(long long)indexCountPerPrimitive;
-(long long)bytesPerIndex;
-(void)setBytesPerIndex:(long long)arg1 ;
@end

