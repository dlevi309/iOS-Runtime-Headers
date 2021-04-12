/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NUGLTexture *)texture;
-(void)setMinificationFilter:(unsigned)arg1 ;
-(void)setMagnificationFilter:(unsigned)arg1 ;
-(id)init;
-(unsigned)magnificationFilter;
-(unsigned)minificationFilter;
-(id)description;
-(unsigned)wrapMode;
-(id)initWithTexture:(id)arg1 ;
-(void)setWrapMode:(unsigned)arg1 ;
@end

