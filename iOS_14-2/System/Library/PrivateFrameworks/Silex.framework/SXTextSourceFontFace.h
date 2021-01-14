/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontFace.h>

@protocol SXFontAttributes;
@class NSString;

@interface SXTextSourceFontFace : NSObject <SXFontFace> {

	NSString* _fontName;
	id<SXFontAttributes> _fontAttributes;

}

@property (nonatomic,readonly) NSString * fontName;                              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)basicFontAttributesForFontName:(id)arg1 ;
+(id)fontFaceWithFontName:(id)arg1 andAttributes:(id)arg2 ;
+(id)fontFaceWithFontName:(id)arg1 ;
-(NSString *)fontName;
-(id<SXFontAttributes>)fontAttributes;
@end

