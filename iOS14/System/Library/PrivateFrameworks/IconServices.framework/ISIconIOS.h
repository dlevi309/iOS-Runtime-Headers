/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class NSArray, LSResourceProxy;

@interface ISIconIOS : ISIcon {

	NSArray* _decorations;
	LSResourceProxy* _resourceProxy;

}

@property (retain) LSResourceProxy * resourceProxy;              //@synthesize resourceProxy=_resourceProxy - In the implementation block
@property (nonatomic,copy) NSArray * decorations;                //@synthesize decorations=_decorations - In the implementation block
+(id)backgroundQueue;
-(id)initWithType:(id)arg1 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageForImageDescriptor:(id)arg1 ;
-(id)_initTransparent;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)prepareImageForDescriptor:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(int)variantForSize:(CGSize)arg1 scale:(double)arg2 options:(unsigned long long)arg3 ;
-(BOOL)isEqualToIcon:(id)arg1 ;
-(id)initWithResourceProxy:(id)arg1 decorations:(id)arg2 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prepareImageForSymbolImageDescriptor:(id)arg1 ;
-(id)_cachedImageForDescriptor:(id)arg1 ;
-(NSArray *)decorations;
-(void)prepareImagesForDescriptors:(id)arg1 ;
-(id)initWithResourceProxy:(id)arg1 ;
-(id)_imageForSymbolImageDescriptor:(id)arg1 ;
-(void)setDecorations:(NSArray *)arg1 ;
-(void)setResourceProxy:(LSResourceProxy *)arg1 ;
-(LSResourceProxy *)resourceProxy;
-(unsigned long long)hash;
-(double)_aspectRatio;
-(id)imageForDescriptor:(id)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(id)_prepareImageForImageDescriptor:(id)arg1 allowIO:(BOOL)arg2 ;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

