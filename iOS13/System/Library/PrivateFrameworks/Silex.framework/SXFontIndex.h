/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)fontsForFamilyProviders:(id)arg1 ;
-(NSMutableArray *)fontFamilyProviders;
-(NSCache *)attributeToFontIndex;
-(NSCache *)fontToAttributeIndex;
-(id)fontNameForFontAttributes:(id)arg1 size:(long long)arg2 ;
-(id)fontAttributesForFontName:(id)arg1 ;
-(id)initWithFontFamilyProviders:(id)arg1 ;
-(void)addFontFamilyProvider:(id)arg1 ;
@end

