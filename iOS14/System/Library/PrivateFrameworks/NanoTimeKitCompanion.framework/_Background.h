/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/_Geometry.h>

@protocol MTLTexture;
@class NSNumber;

@interface _Background : _Geometry {

	NSNumber* _numbers;
	NSNumber* _glow;
	id<MTLTexture> _numbersTex;
	id<MTLTexture> _glowTex;

}

@property (nonatomic,retain) NSNumber * numbers;                     //@synthesize numbers=_numbers - In the implementation block
@property (nonatomic,retain) NSNumber * glow;                        //@synthesize glow=_glow - In the implementation block
@property (nonatomic,retain) id<MTLTexture> numbersTex;              //@synthesize numbersTex=_numbersTex - In the implementation block
@property (nonatomic,retain) id<MTLTexture> glowTex;                 //@synthesize glowTex=_glowTex - In the implementation block
-(NSNumber *)glow;
-(NSNumber *)numbers;
-(id<MTLTexture>)glowTex;
-(void)setNumbers:(NSNumber *)arg1 ;
-(void)setGlow:(NSNumber *)arg1 ;
-(id<MTLTexture>)numbersTex;
-(void)setNumbersTex:(id<MTLTexture>)arg1 ;
-(void)setGlowTex:(id<MTLTexture>)arg1 ;
@end

