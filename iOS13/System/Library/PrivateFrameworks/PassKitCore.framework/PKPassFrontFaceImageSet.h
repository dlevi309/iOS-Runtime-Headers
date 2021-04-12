/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassFrontFaceImageSet : PKPassImageSet {

	PKImage* _faceImage;
	PKImage* _faceShadowImage;
	CGRect _logoRect;
	CGRect _thumbnailRect;
	CGRect _stripRect;

}

@property (nonatomic,retain) PKImage * faceImage;                    //@synthesize faceImage=_faceImage - In the implementation block
@property (nonatomic,retain) PKImage * faceShadowImage;              //@synthesize faceShadowImage=_faceShadowImage - In the implementation block
@property (assign,nonatomic) CGRect logoRect;                        //@synthesize logoRect=_logoRect - In the implementation block
@property (assign,nonatomic) CGRect thumbnailRect;                   //@synthesize thumbnailRect=_thumbnailRect - In the implementation block
@property (assign,nonatomic) CGRect stripRect;                       //@synthesize stripRect=_stripRect - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned)currentVersion;
+(long long)imageSetType;
+(id)archiveName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)faceImage;
-(PKImage *)faceShadowImage;
-(CGRect)thumbnailRect;
-(CGRect)stripRect;
-(CGRect)logoRect;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setFaceImage:(PKImage *)arg1 ;
-(void)setFaceShadowImage:(PKImage *)arg1 ;
-(void)setLogoRect:(CGRect)arg1 ;
-(void)setThumbnailRect:(CGRect)arg1 ;
-(void)setStripRect:(CGRect)arg1 ;
@end

