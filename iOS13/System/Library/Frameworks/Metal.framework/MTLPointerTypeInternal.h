/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)alignment;
-(unsigned long long)access;
-(unsigned long long)dataType;
-(unsigned long long)elementType;
-(unsigned long long)dataSize;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)structType;
-(id)elementStructType;
-(id)elementArrayType;
-(BOOL)elementIsArgumentBuffer;
-(id)elementTypeDescription;
-(BOOL)isConstantBuffer;
-(void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 doRetain:(BOOL)arg8 ;
-(BOOL)elementIsIndirectArgumentBuffer;
@end

