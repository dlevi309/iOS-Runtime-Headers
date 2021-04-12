/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)radiosityImageWithImage:(CGImageRef)arg1 displayScale:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(vImage_Buffer*)_doRadiosityBlurOnPixelBuffer:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bitsPerPixel:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 scaleFactor:(unsigned long long)arg6 usesGaussianBlur:(BOOL*)arg7 adjustedSize:(CGSize*)arg8 ;
+(CGImageRef)createRadiosityImageWithImage:(CGImageRef)arg1 displayScale:(long long)arg2 ;
-(id)configuration;
-(id)flattenedUIImageWithAsset:(id)arg1 configuration:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(NSArray *)layers;
-(void)setLayers:(NSArray *)arg1 ;
-(CGImageRef)flattenedImage;
-(CGImageRef)radiosityImage;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 resolvingWithBlock:(/*^block*/id)arg4 ;
-(id)layerImageAtIndex:(unsigned long long)arg1 ;
@end

