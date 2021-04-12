/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject {

	MDLTexture* texture;
	MDLTextureFilter* hardwareFilter;
	MDLTransform* transform;
	unsigned long long mappingChannel;
	long long textureComponents;

}

@property (assign,nonatomic) unsigned long long mappingChannel; 
@property (assign,nonatomic) long long textureComponents; 
@property (nonatomic,retain) MDLTexture * texture; 
@property (nonatomic,retain) MDLTextureFilter * hardwareFilter; 
@property (nonatomic,retain) MDLTransform * transform; 
-(id)init;
-(MDLTransform *)transform;
-(void)setTexture:(MDLTexture *)arg1 ;
-(void)setTransform:(MDLTransform *)arg1 ;
-(MDLTexture *)texture;
-(MDLTextureFilter *)hardwareFilter;
-(void)setHardwareFilter:(MDLTextureFilter *)arg1 ;
-(unsigned long long)mappingChannel;
-(void)setMappingChannel:(unsigned long long)arg1 ;
-(long long)textureComponents;
-(void)setTextureComponents:(long long)arg1 ;
@end

