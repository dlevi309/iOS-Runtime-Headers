/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLTextureArgument : MTLArgumentInternal {

	unsigned _textureType : 15;
	unsigned _isDepthTexture : 1;
	unsigned short _textureDataType;

}
-(unsigned long long)textureDataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(BOOL)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(BOOL)arg8 ;
-(BOOL)isDepthTexture;
@end

