/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MDLTexture *)texture;
-(id)init;
-(void)setTransform:(MDLTransform *)arg1 ;
-(MDLTransform *)transform;
-(void)setTexture:(MDLTexture *)arg1 ;
-(MDLTextureFilter *)hardwareFilter;
-(void)setHardwareFilter:(MDLTextureFilter *)arg1 ;
-(unsigned long long)mappingChannel;
-(void)setMappingChannel:(unsigned long long)arg1 ;
-(long long)textureComponents;
-(void)setTextureComponents:(long long)arg1 ;
@end

