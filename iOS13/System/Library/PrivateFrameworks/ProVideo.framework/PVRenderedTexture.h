/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

