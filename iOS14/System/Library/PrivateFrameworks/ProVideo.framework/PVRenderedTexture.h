/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVRenderedTexture : NSObject {

	HGRef<HGGLTexture>* _glTexture;

}

@property (nonatomic,readonly) unsigned textureName; 
@property (nonatomic,readonly) unsigned textureTarget; 
@property (nonatomic,readonly) CGRect textureRect; 
@property (nonatomic,readonly) CGRect bitmapRect; 
-(unsigned)textureName;
-(unsigned)textureTarget;
-(CGRect)textureRect;
-(CGSize)textureSize;
-(id)initWithHGGLTexture:(HGRef<HGGLTexture>*)arg1 ;
-(CGRect)bitmapRect;
@end

