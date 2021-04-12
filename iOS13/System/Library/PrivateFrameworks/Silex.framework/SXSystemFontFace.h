/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontFace.h>

@protocol SXFontAttributes;
@class NSString;

@interface SXSystemFontFace : NSObject <SXFontFace> {

	NSString* _fontName;
	id<SXFontAttributes> _fontAttributes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName;                              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
-(NSString *)description;
-(id<SXFontAttributes>)fontAttributes;
-(NSString *)fontName;
-(id)initWithMetadata:(id)arg1 ;
-(id)fontAttributesForMetadata:(id)arg1 ;
-(long long)fontWeightForValue:(id)arg1 ;
-(long long)fontWidthForValue:(id)arg1 ;
-(long long)fontStyleForValue:(id)arg1 ;
@end

