/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/


#import <PlacesKit/PlacesKit-Structs.h>
@class NSCache, UIColor;

@interface PXPlacesPopoverImageFactory : NSObject {

	NSCache* _cachedBackgroundImages;
	UIColor* _defaultBackgroundColor;

}

@property (nonatomic,retain) NSCache * cachedBackgroundImages;              //@synthesize cachedBackgroundImages=_cachedBackgroundImages - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;              //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
+(id)sharedInstance;
+(CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)init;
-(id)imageNamed:(id)arg1 ;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)defaultBackgroundColor;
-(id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)createPopoverImageForGeotaggable:(id)arg1 withImage:(CGImageRef)arg2 imageType:(unsigned long long)arg3 usingTraitCollection:(id)arg4 ;
-(id)annotationPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(CGSize)backgroundImageSizeForPopoverAnnotation;
-(double)thumbnailTopMarginForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(CGSize)thumbnailImageSizeForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 includeScale:(BOOL)arg3 ;
-(id)_fetchAndCacheBackgroundImageWithName:(id)arg1 ;
-(NSCache *)cachedBackgroundImages;
-(void)setCachedBackgroundImages:(NSCache *)arg1 ;
@end

