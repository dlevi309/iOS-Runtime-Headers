/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSArray, CUIThemeRendition;

@interface CUINamedLayerStack : CUINamedLookup {

	NSArray* _layers;
	CUIThemeRendition* _flattenedImageRendition;
	CUIThemeRendition* _radiosityImageRendition;

}

@property (nonatomic,retain) NSArray * layers;                         //@synthesize layers=_layers - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) CGImageRef radiosityImage; 
+(vImage_Buffer*)_doRadiosityBlurOnPixelBuffer:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bitsPerPixel:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 scaleFactor:(unsigned long long)arg6 usesGaussianBlur:(BOOL*)arg7 adjustedSize:(CGSize*)arg8 ;
+(CGImageRef)createRadiosityImageWithImage:(CGImageRef)arg1 displayScale:(long long)arg2 ;
+(void)radiosityImageWithImage:(CGImageRef)arg1 displayScale:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)configuration;
-(id)flattenedUIImageWithAsset:(id)arg1 configuration:(id)arg2 ;
-(NSArray *)layers;
-(CGImageRef)radiosityImage;
-(CGSize)size;
-(void)setLayers:(NSArray *)arg1 ;
-(id)layerImageAtIndex:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 resolvingWithBlock:(/*^block*/id)arg4 ;
-(unsigned long long)hash;
-(CGImageRef)flattenedImage;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

