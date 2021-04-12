/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGEffect.h>

@interface PXGPinchEffect : PXGEffect

@property (assign,nonatomic) CGPoint normalizedCenter; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGRect sampleRect; 
-(double)scale;
-(void)setScale:(double)arg1 ;
-(unsigned short)type;
-(CGRect)sampleRect;
-(CGPoint)normalizedCenter;
-(void)setNormalizedCenter:(CGPoint)arg1 ;
-(void)setSampleRect:(CGRect)arg1 ;
-(int)shaderFlags;
-(id)initWithMetadataStore:(id)arg1 ;
@end

