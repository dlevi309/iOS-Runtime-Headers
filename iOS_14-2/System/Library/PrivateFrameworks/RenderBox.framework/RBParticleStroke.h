/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


@protocol RBParticleStroke <RBStroke>
@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) float imageScale; 
@property (nonatomic,readonly) int imageCount; 
@property (nonatomic,readonly) BOOL rotatesImage; 
@property (nonatomic,readonly) int blendMode; 
@property (nonatomic,readonly) long long seed; 
@required
-(long long)seed;
-(float)imageScale;
-(int)blendMode;
-(CGImageRef)image;
-(int)imageCount;
-(BOOL)rotatesImage;

@end

