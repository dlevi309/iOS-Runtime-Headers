/*
* Generated on Thursday, January 14, 2021 at 2:29:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLTexture;
@interface ResamplerTextures : NSObject {

	id<MTLTexture> _inputTexture;
	id<MTLTexture> _inputTexureUV;
	id<MTLTexture> _tempTextureY;
	id<MTLTexture> _tempTextureUV;
	id<MTLTexture> _outputTextureY;
	id<MTLTexture> _outputTextureUV;

}

@property (retain) id<MTLTexture> inputTexture;                 //@synthesize inputTexture=_inputTexture - In the implementation block
@property (retain) id<MTLTexture> inputTexureUV;                //@synthesize inputTexureUV=_inputTexureUV - In the implementation block
@property (retain) id<MTLTexture> tempTextureY;                 //@synthesize tempTextureY=_tempTextureY - In the implementation block
@property (retain) id<MTLTexture> tempTextureUV;                //@synthesize tempTextureUV=_tempTextureUV - In the implementation block
@property (retain) id<MTLTexture> outputTextureY;               //@synthesize outputTextureY=_outputTextureY - In the implementation block
@property (retain) id<MTLTexture> outputTextureUV;              //@synthesize outputTextureUV=_outputTextureUV - In the implementation block
-(void)setInputTexture:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)inputTexture;
-(id<MTLTexture>)inputTexureUV;
-(void)setInputTexureUV:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)tempTextureY;
-(void)setTempTextureY:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)tempTextureUV;
-(void)setTempTextureUV:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)outputTextureY;
-(void)setOutputTextureY:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)outputTextureUV;
-(void)setOutputTextureUV:(id<MTLTexture>)arg1 ;
@end

