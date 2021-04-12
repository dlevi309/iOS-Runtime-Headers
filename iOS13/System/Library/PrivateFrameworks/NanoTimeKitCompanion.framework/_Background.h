/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)numbers;
-(void)setNumbers:(NSNumber *)arg1 ;
-(NSNumber *)glow;
-(void)setGlow:(NSNumber *)arg1 ;
-(id<MTLTexture>)numbersTex;
-(void)setNumbersTex:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)glowTex;
-(void)setGlowTex:(id<MTLTexture>)arg1 ;
@end

