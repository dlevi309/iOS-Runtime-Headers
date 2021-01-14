/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)thumbnailTopMarginForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)imageNamed:(id)arg1 ;
-(id)createPopoverImageForGeotaggable:(id)arg1 withImage:(CGImageRef)arg2 imageType:(unsigned long long)arg3 usingTraitCollection:(id)arg4 ;
-(id)init;
-(CGSize)thumbnailImageSizeForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 includeScale:(BOOL)arg3 ;
-(id)_fetchAndCacheBackgroundImageWithName:(id)arg1 ;
-(CGSize)backgroundImageSizeForPopoverAnnotation;
-(id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(NSCache *)cachedBackgroundImages;
-(id)annotationPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(void)setCachedBackgroundImages:(NSCache *)arg1 ;
-(UIColor *)defaultBackgroundColor;
-(CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
@end

