/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSArray, NSDictionary, NSString;

@interface TSDGLFrameBuffer : NSObject {

	NSArray* _textureConfigs;
	NSDictionary* _namesToTextureDict;
	unsigned* _textures[16];
	unsigned long long _textureCount[16];
	unsigned long long _currentTextureIndex[16];
	unsigned long long _desiredTextureIndex[16];
	unsigned _framebuffer;
	BOOL _isUsingNonDefaultAttachments;
	BOOL _isBound;
	BOOL _shouldDeleteTexturesOnTeardown;
	NSString* _name;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isBound;                                   //@synthesize isBound=_isBound - In the implementation block
@property (assign,nonatomic) BOOL shouldDeleteTexturesOnTeardown;              //@synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(int)currentGLFramebuffer;
+(void)setCurrentGLFramebuffer:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CGSize)size;
-(void)teardown;
-(id)initWithSize:(CGSize)arg1 ;
-(BOOL)isBound;
-(id)initWithSize:(CGSize)arg1 textureConfigs:(id)arg2 ;
-(id)initWithSize:(CGSize)arg1 textureCount:(unsigned long long)arg2 ;
-(void)setupFramebufferIfNecessary;
-(void)setCurrentTextureIndex:(unsigned long long)arg1 atAttachment:(unsigned)arg2 ;
-(void)setCurrentTextureIndex:(unsigned long long)arg1 ;
-(void)setCurrentTextureToNextAtAttachment:(unsigned)arg1 ;
-(unsigned)GLTextureAtIndex:(unsigned long long)arg1 attachment:(unsigned)arg2 ;
-(unsigned)currentGLTextureAtAttachment:(unsigned)arg1 ;
-(void)bindFramebuffer;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(void)setCurrentTextureNamed:(id)arg1 ;
-(void)setCurrentTextureToNext;
-(unsigned)GLTextureAtIndex:(unsigned long long)arg1 ;
-(unsigned)GLTextureNamed:(id)arg1 ;
-(unsigned)currentGLTexture;
-(BOOL)shouldDeleteTexturesOnTeardown;
-(void)setShouldDeleteTexturesOnTeardown:(BOOL)arg1 ;
@end

