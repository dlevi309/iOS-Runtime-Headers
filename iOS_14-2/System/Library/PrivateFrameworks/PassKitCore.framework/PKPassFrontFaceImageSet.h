/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassImageSet.h>

@class PKImage, NSData;

@interface PKPassFrontFaceImageSet : PKPassImageSet {

	PKImage* _faceImage;
	PKImage* _faceShadowImage;
	PKImage* _footerImage;
	PKImage* _dynamicLayerStaticFallbackImage;
	PKImage* _backgroundParallaxEmitterImage;
	PKImage* _backgroundParallaxImage;
	PKImage* _neutralEmitterImage;
	PKImage* _neutralImage;
	PKImage* _foregroundParallaxEmitterImage;
	PKImage* _foregroundParallaxImage;
	PKImage* _staticOverlayEmitterImage;
	PKImage* _staticOverlayImage;
	PKImage* _transactionEffectEmitterImage;
	NSData* _transactionEffectEmitterShapeSVGData;
	CGRect _logoRect;
	CGRect _thumbnailRect;
	CGRect _stripRect;

}

@property (nonatomic,retain) PKImage * faceImage;                                        //@synthesize faceImage=_faceImage - In the implementation block
@property (nonatomic,retain) PKImage * faceShadowImage;                                  //@synthesize faceShadowImage=_faceShadowImage - In the implementation block
@property (nonatomic,retain) PKImage * footerImage;                                      //@synthesize footerImage=_footerImage - In the implementation block
@property (assign,nonatomic) CGRect logoRect;                                            //@synthesize logoRect=_logoRect - In the implementation block
@property (assign,nonatomic) CGRect thumbnailRect;                                       //@synthesize thumbnailRect=_thumbnailRect - In the implementation block
@property (assign,nonatomic) CGRect stripRect;                                           //@synthesize stripRect=_stripRect - In the implementation block
@property (nonatomic,retain) PKImage * dynamicLayerStaticFallbackImage;                  //@synthesize dynamicLayerStaticFallbackImage=_dynamicLayerStaticFallbackImage - In the implementation block
@property (nonatomic,retain) PKImage * backgroundParallaxEmitterImage;                   //@synthesize backgroundParallaxEmitterImage=_backgroundParallaxEmitterImage - In the implementation block
@property (nonatomic,retain) PKImage * backgroundParallaxImage;                          //@synthesize backgroundParallaxImage=_backgroundParallaxImage - In the implementation block
@property (nonatomic,retain) PKImage * neutralEmitterImage;                              //@synthesize neutralEmitterImage=_neutralEmitterImage - In the implementation block
@property (nonatomic,retain) PKImage * neutralImage;                                     //@synthesize neutralImage=_neutralImage - In the implementation block
@property (nonatomic,retain) PKImage * foregroundParallaxEmitterImage;                   //@synthesize foregroundParallaxEmitterImage=_foregroundParallaxEmitterImage - In the implementation block
@property (nonatomic,retain) PKImage * foregroundParallaxImage;                          //@synthesize foregroundParallaxImage=_foregroundParallaxImage - In the implementation block
@property (nonatomic,retain) PKImage * staticOverlayEmitterImage;                        //@synthesize staticOverlayEmitterImage=_staticOverlayEmitterImage - In the implementation block
@property (nonatomic,retain) PKImage * staticOverlayImage;                               //@synthesize staticOverlayImage=_staticOverlayImage - In the implementation block
@property (nonatomic,retain) PKImage * transactionEffectEmitterImage;                    //@synthesize transactionEffectEmitterImage=_transactionEffectEmitterImage - In the implementation block
@property (nonatomic,retain) NSData * transactionEffectEmitterShapeSVGData;              //@synthesize transactionEffectEmitterShapeSVGData=_transactionEffectEmitterShapeSVGData - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned)currentVersion;
+(id)archiveName;
+(long long)imageSetType;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFaceShadowImage:(PKImage *)arg1 ;
-(void)setFooterImage:(PKImage *)arg1 ;
-(void)setBackgroundParallaxEmitterImage:(PKImage *)arg1 ;
-(void)setDynamicLayerStaticFallbackImage:(PKImage *)arg1 ;
-(void)setBackgroundParallaxImage:(PKImage *)arg1 ;
-(void)setNeutralEmitterImage:(PKImage *)arg1 ;
-(void)setNeutralImage:(PKImage *)arg1 ;
-(void)setStripRect:(CGRect)arg1 ;
-(PKImage *)faceImage;
-(void)setForegroundParallaxEmitterImage:(PKImage *)arg1 ;
-(void)setForegroundParallaxImage:(PKImage *)arg1 ;
-(void)setStaticOverlayEmitterImage:(PKImage *)arg1 ;
-(void)setStaticOverlayImage:(PKImage *)arg1 ;
-(void)setTransactionEffectEmitterImage:(PKImage *)arg1 ;
-(void)setTransactionEffectEmitterShapeSVGData:(NSData *)arg1 ;
-(void)setThumbnailRect:(CGRect)arg1 ;
-(PKImage *)backgroundParallaxImage;
-(PKImage *)dynamicLayerStaticFallbackImage;
-(PKImage *)backgroundParallaxEmitterImage;
-(PKImage *)neutralEmitterImage;
-(PKImage *)neutralImage;
-(PKImage *)foregroundParallaxImage;
-(PKImage *)foregroundParallaxEmitterImage;
-(PKImage *)staticOverlayEmitterImage;
-(PKImage *)staticOverlayImage;
-(PKImage *)transactionEffectEmitterImage;
-(NSData *)transactionEffectEmitterShapeSVGData;
-(CGRect)logoRect;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)stripRect;
-(void)setFaceImage:(PKImage *)arg1 ;
-(PKImage *)footerImage;
-(PKImage *)faceShadowImage;
-(CGRect)thumbnailRect;
-(void)setLogoRect:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

