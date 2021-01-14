/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLPointerType.h>

@class MTLType;

@interface MTLPointerTypeInternal : MTLPointerType {

	unsigned long long _dataType;
	unsigned long long _elementType;
	MTLType* _elementTypeInfo;
	unsigned long long _access;
	unsigned long long _alignment;
	unsigned long long _dataSize;
	BOOL _elementIsArgumentBuffer;
	BOOL _isConstantBuffer;
	BOOL _doRetain;

}
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)structType;
-(BOOL)elementIsArgumentBuffer;
-(unsigned long long)access;
-(unsigned long long)alignment;
-(BOOL)elementIsIndirectArgumentBuffer;
-(unsigned long long)elementType;
-(unsigned long long)dataSize;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 doRetain:(BOOL)arg8 ;
-(BOOL)isConstantBuffer;
-(id)elementTypeDescription;
-(id)elementArrayType;
-(void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)elementStructType;
@end

