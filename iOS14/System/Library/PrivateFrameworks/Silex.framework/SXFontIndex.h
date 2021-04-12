/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontIndex.h>

@protocol SXFontIndex <NSObject>
@required
-(id)fontNameForFontAttributes:(id)arg1 size:(long long)arg2;
-(id)fontAttributesForFontName:(id)arg1;

@end


@class NSDictionary, NSCache, NSMutableArray, NSString;

@interface SXFontIndex : NSObject <SXFontIndex> {

	NSDictionary* _fonts;
	NSCache* _attributeToFontIndex;
	NSCache* _fontToAttributeIndex;
	NSMutableArray* _fontFamilyProviders;

}

@property (nonatomic,readonly) NSDictionary * fonts;                              //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,readonly) NSCache * attributeToFontIndex;                    //@synthesize attributeToFontIndex=_attributeToFontIndex - In the implementation block
@property (nonatomic,readonly) NSCache * fontToAttributeIndex;                    //@synthesize fontToAttributeIndex=_fontToAttributeIndex - In the implementation block
@property (nonatomic,readonly) NSMutableArray * fontFamilyProviders;              //@synthesize fontFamilyProviders=_fontFamilyProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)fonts;
-(NSMutableArray *)fontFamilyProviders;
-(id)initWithFontFamilyProviders:(id)arg1 ;
-(NSCache *)fontToAttributeIndex;
-(id)fontNameForFontAttributes:(id)arg1 size:(long long)arg2 ;
-(NSCache *)attributeToFontIndex;
-(id)fontsForFamilyProviders:(id)arg1 ;
-(void)addFontFamilyProvider:(id)arg1 ;
-(id)fontAttributesForFontName:(id)arg1 ;
@end

