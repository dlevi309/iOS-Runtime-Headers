/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)arrayLength;
-(unsigned)width;
-(unsigned)height;
-(unsigned)name;
-(id)description;
-(unsigned)target;
-(unsigned)depth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)lossyCompressedSource;
-(int)alphaState;
-(int)textureOrigin;
-(BOOL)containsMipmaps;
-(id)initWithTexture:(id)arg1 textureName:(unsigned)arg2 ;
-(id)initWithTextureTXR:(id)arg1 textureName:(unsigned)arg2 ;
-(unsigned)mimapLevelCount;
@end

