/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSString, NSArray;

@interface TSDGLFrameBufferTextureConfig : NSObject {

	int _GLInternalFormat;
	unsigned _GLFormat;
	unsigned _GLType;
	unsigned _attachment;
	NSString* _name;
	NSArray* _textureParameters;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                              //@synthesize size=_size - In the implementation block
@property (getter=LInternalFormat,nonatomic,readonly) int GLInternalFormat;              //@synthesize GLInternalFormat=_GLInternalFormat - In the implementation block
@property (getter=LFormat,nonatomic,readonly) unsigned GLFormat;                         //@synthesize GLFormat=_GLFormat - In the implementation block
@property (getter=LType,nonatomic,readonly) unsigned GLType;                             //@synthesize GLType=_GLType - In the implementation block
@property (nonatomic,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned attachment;                                        //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) NSArray * textureParameters;                                //@synthesize textureParameters=_textureParameters - In the implementation block
+(id)textureConfigWithSize:(CGSize)arg1 internalFormat:(int)arg2 format:(unsigned)arg3 type:(unsigned)arg4 attachment:(unsigned)arg5 name:(id)arg6 ;
+(id)textureConfigWithSize:(CGSize)arg1 name:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(CGSize)size;
-(unsigned)attachment;
-(void)setAttachment:(unsigned)arg1 ;
-(id)initWithSize:(CGSize)arg1 internalFormat:(int)arg2 format:(unsigned)arg3 type:(unsigned)arg4 attachment:(unsigned)arg5 name:(id)arg6 ;
-(int)GLInternalFormat;
-(unsigned)GLFormat;
-(unsigned)GLType;
-(NSArray *)textureParameters;
-(void)setTextureParameters:(NSArray *)arg1 ;
@end

