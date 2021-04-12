/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSDictionary, NSURL, NSArray, IKSrcSetRule, UIColor;

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
-(NSURL *)url;
-(unsigned long long)position;
-(double)width;
-(double)height;
-(double)aspectRatio;
-(NSURL *)resolvedURL;
-(long long)fill;
-(UIColor *)borderColor;
-(unsigned long long)imageType;
-(NSDictionary *)srcset;
-(void)_initCommon;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3 ;
-(id)initWithOriginalElement:(id)arg1 ;
-(void)_resolveURL;
-(void)_parseSrcset:(id)arg1 ;
-(NSArray *)srcsetRules;
-(IKImageElement *)fallbackImageElement;
-(NSURL *)placeholderURL;
-(long long)reflect;
-(void)setResolvedURL:(NSURL *)arg1 ;
-(void)setSrcsetRules:(NSArray *)arg1 ;
-(IKSrcSetRule *)bestRule;
-(void)setBestRule:(IKSrcSetRule *)arg1 ;
@end

