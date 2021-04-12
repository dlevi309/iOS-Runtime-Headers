/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GLKTextureInfo : NSObject <NSCopying> {

	unsigned name;
	unsigned target;
	unsigned width;
	unsigned height;
	unsigned depth;
	int alphaState;
	int textureOrigin;
	BOOL containsMipmaps;
	unsigned mimapLevelCount;
	unsigned arrayLength;
	BOOL lossyCompressedSource;

}

@property (readonly) unsigned name; 
@property (readonly) unsigned target; 
@property (readonly) unsigned width; 
@property (readonly) unsigned height; 
@property (readonly) unsigned depth; 
@property (readonly) int alphaState; 
@property (readonly) int textureOrigin; 
@property (readonly) BOOL containsMipmaps; 
@property (readonly) unsigned mimapLevelCount; 
@property (readonly) unsigned arrayLength; 
-(void)dealloc;
-(id)description;
-(unsigned)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)target;
-(unsigned)depth;
-(unsigned)width;
-(unsigned)height;
-(unsigned)arrayLength;
-(BOOL)containsMipmaps;
-(BOOL)lossyCompressedSource;
-(int)alphaState;
-(int)textureOrigin;
-(id)initWithTexture:(id)arg1 textureName:(unsigned)arg2 ;
-(id)initWithTextureTXR:(id)arg1 textureName:(unsigned)arg2 ;
-(unsigned)mimapLevelCount;
@end

