/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSString;

@interface NUGLVertexAttribute : NSObject {

	BOOL _normalized;
	unsigned _type;
	int _size;
	NSString* _name;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned type;                          //@synthesize type=_type - In the implementation block
@property (readonly) int size;                               //@synthesize size=_size - In the implementation block
@property (readonly) long long sizeInBytes; 
@property (nonatomic,readonly) BOOL normalized;              //@synthesize normalized=_normalized - In the implementation block
+(id)vec2Attribute:(id)arg1 ;
+(id)vec4Attribute:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(unsigned)type;
-(int)size;
-(long long)sizeInBytes;
-(long long)_typeSize;
-(BOOL)normalized;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 size:(int)arg3 ;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 size:(int)arg3 normalized:(BOOL)arg4 ;
@end

