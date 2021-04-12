/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLArgument.h>

@class NSString, MTLType, MTLStructType;

@interface MTLArgumentInternal : MTLArgument {

	NSString* _name;
	unsigned long long _type;
	unsigned long long _access;
	unsigned long long _index;
	BOOL _active;
	unsigned long long _arrayLength;
	MTLType* _typeInfo;

}

@property (readonly) unsigned long long bufferPixelFormat; 
@property (readonly) unsigned long long bufferALUType; 
@property (readonly) MTLStructType * structType; 
-(id)bufferStructType;
-(unsigned long long)threadgroupMemoryAlignment;
-(id)bufferPointerType;
-(unsigned long long)textureDataType;
-(unsigned long long)bufferAlignment;
-(unsigned long long)bufferDataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)threadgroupMemoryDataSize;
-(id)dataTypeDescription;
-(unsigned long long)textureType;
-(MTLStructType *)structType;
-(unsigned long long)index;
-(unsigned long long)indirectConstantDataSize;
-(unsigned long long)bufferDataSize;
-(unsigned long long)indirectConstantAlignment;
-(unsigned long long)indirectConstantDataType;
-(unsigned long long)arrayLength;
-(id)bufferIndirectArgumentType;
-(unsigned long long)access;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(BOOL)arg5 arrayLength:(unsigned long long)arg6 ;
-(BOOL)isActive;
-(id)name;
-(id)description;
-(unsigned long long)type;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(BOOL)arg5 arrayLength:(unsigned long long)arg6 typeDescription:(id)arg7 ;
-(void)dealloc;
@end

