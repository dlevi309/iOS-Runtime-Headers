/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontFace.h>

@protocol SXFontAttributes;
@class NSString;

@interface SXTextSourceFontFace : NSObject <SXFontFace> {

	NSString* _fontName;
	id<SXFontAttributes> _fontAttributes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName;                              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
+(id)basicFontAttributesForFontName:(id)arg1 ;
+(id)fontFaceWithFontName:(id)arg1 andAttributes:(id)arg2 ;
+(id)fontFaceWithFontName:(id)arg1 ;
-(id<SXFontAttributes>)fontAttributes;
-(NSString *)fontName;
@end

