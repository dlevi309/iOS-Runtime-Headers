/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLStructMember.h>

@class NSString, MTLType;

@interface MTLStructMemberInternal : MTLStructMember {

	NSString* _name;
	unsigned long long _offset;
	unsigned _dataType : 16;
	id _details;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;
	unsigned long long _argumentIndex;
	unsigned long long _render_target;
	unsigned long long _raster_order_group;
	MTLType* _typeInfo;

}

@property (readonly) unsigned long long pixelFormat;                     //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned long long aluType;                         //@synthesize aluType=_aluType - In the implementation block
@property (readonly) unsigned long long render_target;                   //@synthesize render_target=_render_target - In the implementation block
@property (readonly) unsigned long long raster_order_group;              //@synthesize raster_order_group=_raster_order_group - In the implementation block
-(void)dealloc;
-(id)name;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(unsigned long long)dataType;
-(id)dataTypeDescription;
-(unsigned long long)offset;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)structType;
-(id)arrayType;
-(unsigned long long)indirectArgumentIndex;
-(id)indirectArgumentType;
-(unsigned long long)aluType;
-(unsigned long long)render_target;
-(unsigned long long)raster_order_group;
-(id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 indirectArgumentIndex:(unsigned long long)arg6 render_target:(unsigned long long)arg7 raster_order_group:(unsigned long long)arg8 details:(id)arg9 ;
-(unsigned long long)argumentIndex;
-(BOOL)isMemberLayoutThreadSafeWith:(id)arg1 ;
-(id)textureReferenceType;
-(id)pointerType;
@end

