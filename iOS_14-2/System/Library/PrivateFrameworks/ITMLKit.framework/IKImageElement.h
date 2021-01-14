/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKViewElement.h>

@class NSDictionary, NSURL, NSArray, IKSrcSetRule, UIImage, TVImageProxy, UIColor;

@interface IKImageElement : IKViewElement {

	double _srcWidth;
	double _srcHeight;
	IKImageElement* _fallbackImageElement;
	NSDictionary* _srcset;
	unsigned long long _imageType;
	double _aspectRatio;
	NSURL* _resolvedURL;
	NSArray* _srcsetRules;
	IKSrcSetRule* _bestRule;

}

@property (nonatomic,readonly) BOOL vui_hasValidImage; 
@property (nonatomic,readonly) BOOL tv_isResource; 
@property (nonatomic,readonly) UIImage * tv_resourceImage; 
@property (nonatomic,readonly) BOOL tv_isSymbol; 
@property (nonatomic,readonly) UIImage * tv_symbolImage; 
@property (nonatomic,readonly) TVImageProxy * tv_imageProxy; 
@property (nonatomic,readonly) CGSize tv_imageScaleToSize; 
@property (nonatomic,readonly) long long tv_imageType; 
@property (nonatomic,retain) NSURL * resolvedURL;                                  //@synthesize resolvedURL=_resolvedURL - In the implementation block
@property (nonatomic,retain) NSArray * srcsetRules;                                //@synthesize srcsetRules=_srcsetRules - In the implementation block
@property (nonatomic,retain) IKSrcSetRule * bestRule;                              //@synthesize bestRule=_bestRule - In the implementation block
@property (nonatomic,readonly) IKImageElement * fallbackImageElement;              //@synthesize fallbackImageElement=_fallbackImageElement - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,retain,readonly) NSDictionary * srcset;                       //@synthesize srcset=_srcset - In the implementation block
@property (nonatomic,retain,readonly) NSURL * placeholderURL; 
@property (nonatomic,readonly) unsigned long long imageType;                       //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double aspectRatio;                                 //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long position; 
@property (nonatomic,readonly) UIColor * borderColor; 
@property (nonatomic,readonly) long long fill; 
@property (nonatomic,readonly) long long reflect; 
+(BOOL)shouldParseChildDOMElements;
+(unsigned long long)_imageTypeForTagName:(id)arg1 ;
-(id)bestURL;
-(id)artworkCatalog;
-(long long)accessoryType;
-(id)cachePath;
-(BOOL)vui_hasValidImage;
-(id)resourceImage;
-(TVImageProxy *)tv_imageProxy;
-(CGSize)tv_imageScaleToSize;
-(BOOL)tv_isResource;
-(UIImage *)tv_resourceImage;
-(id)tv_imageProxyWithLayout:(id)arg1 ;
-(BOOL)tv_isSymbol;
-(UIImage *)tv_symbolImage;
-(long long)tv_imageType;
-(id)tv_associatedViewElement;
-(id)tv_urlWithLayout:(id)arg1 ;
-(id)tv_urlWithSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 centerGrowth:(BOOL)arg3 cropCode:(id)arg4 ;
-(id)tv_urlWithSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 ;
-(long long)fill;
-(unsigned long long)position;
-(double)width;
-(void)_initCommon;
-(UIColor *)borderColor;
-(NSDictionary *)srcset;
-(double)height;
-(double)aspectRatio;
-(NSURL *)url;
-(long long)reflect;
-(unsigned long long)imageType;
-(NSURL *)resolvedURL;
-(NSURL *)placeholderURL;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3 ;
-(id)initWithOriginalElement:(id)arg1 ;
-(void)_resolveURL;
-(void)_parseSrcset:(id)arg1 ;
-(NSArray *)srcsetRules;
-(IKImageElement *)fallbackImageElement;
-(void)setResolvedURL:(NSURL *)arg1 ;
-(void)setSrcsetRules:(NSArray *)arg1 ;
-(IKSrcSetRule *)bestRule;
-(void)setBestRule:(IKSrcSetRule *)arg1 ;
@end

