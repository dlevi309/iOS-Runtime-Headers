/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGImageRef)image;
-(long long)seed;
-(int)imageCount;
-(float)imageScale;
-(int)blendMode;
-(BOOL)rotatesImage;

@end

