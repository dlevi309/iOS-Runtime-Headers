/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NUGLTexture;

@interface NUGLSampler : NSObject {

	unsigned _wrapMode;
	unsigned _minificationFilter;
	unsigned _magnificationFilter;
	NUGLTexture* _texture;

}

@property (nonatomic,readonly) NUGLTexture * texture;                   //@synthesize texture=_texture - In the implementation block
@property (assign,nonatomic) unsigned wrapMode;                         //@synthesize wrapMode=_wrapMode - In the implementation block
@property (assign,nonatomic) unsigned minificationFilter;               //@synthesize minificationFilter=_minificationFilter - In the implementation block
@property (assign,nonatomic) unsigned magnificationFilter;              //@synthesize magnificationFilter=_magnificationFilter - In the implementation block
-(id)init;
-(id)description;
-(unsigned)wrapMode;
-(NUGLTexture *)texture;
-(void)setMinificationFilter:(unsigned)arg1 ;
-(unsigned)magnificationFilter;
-(void)setMagnificationFilter:(unsigned)arg1 ;
-(unsigned)minificationFilter;
-(void)setWrapMode:(unsigned)arg1 ;
-(id)initWithTexture:(id)arg1 ;
@end

