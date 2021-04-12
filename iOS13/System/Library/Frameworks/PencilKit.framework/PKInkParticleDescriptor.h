/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSString;

@interface PKInkParticleDescriptor : NSObject {

	BOOL _adjustEndCapParticleAlpha;
	double _dynamicStep;
	unique_ptr<PKFunction, std::__1::default_delete<PKFunction> >* _particleSpacingFunction;
	NSString* _textureName;
	CGImageRef _textureImage;
	double _particleSpacing;
	long long _particleCount;
	unsigned long long _particleRotation;
	CGSize _particleSize;

}

@property (nonatomic,copy) NSString * textureName;                             //@synthesize textureName=_textureName - In the implementation block
@property (nonatomic,retain) CGImageRef textureImage;                          //@synthesize textureImage=_textureImage - In the implementation block
@property (assign,nonatomic) double particleSpacing;                           //@synthesize particleSpacing=_particleSpacing - In the implementation block
@property (assign,nonatomic) long long particleCount;                          //@synthesize particleCount=_particleCount - In the implementation block
@property (assign,nonatomic) CGSize particleSize;                              //@synthesize particleSize=_particleSize - In the implementation block
@property (assign,nonatomic) unsigned long long particleRotation;              //@synthesize particleRotation=_particleRotation - In the implementation block
+(id)arrayFromVector:(vector<double, std::__1::allocator<double> >*)arg1 ;
+(id)particleDescriptorWithName:(id)arg1 particleSpacing:(double)arg2 particleCount:(long long)arg3 particleSize:(CGSize)arg4 particleRotation:(unsigned long long)arg5 ;
+(id)particleDescriptorWithName:(id)arg1 texture:(CGImageRef)arg2 particleSpacing:(double)arg3 particleCount:(long long)arg4 particleSize:(CGSize)arg5 particleRotation:(unsigned long long)arg6 ;
-(void)setTextureName:(NSString *)arg1 ;
-(void)setParticleSpacing:(double)arg1 ;
-(void)setParticleCount:(long long)arg1 ;
-(void)setParticleSize:(CGSize)arg1 ;
-(void)setParticleRotation:(unsigned long long)arg1 ;
-(void)setTextureImage:(CGImageRef)arg1 ;
-(void)setParticleSpacingFunction:(unique_ptr<PKFunction, std::__1::default_delete<PKFunction> >*)arg1 ;
-(unique_ptr<PKFunction, std::__1::default_delete<PKFunction> >*)particleSpacingFunction;
-(id)particleSpacingInkFunction;
-(void)setParticleSpacingInkFunction:(id)arg1 ;
-(BOOL)adjustEndCapParticleAlpha;
-(void)setAdjustEndCapParticleAlpha:(BOOL)arg1 ;
-(void)setDynamicStep:(double)arg1 ;
-(double)dynamicStep;
-(NSString *)textureName;
-(CGImageRef)textureImage;
-(double)particleSpacing;
-(long long)particleCount;
-(CGSize)particleSize;
-(unsigned long long)particleRotation;
@end

