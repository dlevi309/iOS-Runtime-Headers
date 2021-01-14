/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXTextStyleFontDescribing.h>

@protocol SXTextStyleFontAttributes;
@class NSString;

@interface SXDefaultFontDescribing : NSObject <SXTextStyleFontDescribing> {

	id<SXTextStyleFontAttributes> _fontAttributes;
	NSString* _fontName;

}

@property (nonatomic,readonly) NSString * fontName;                                       //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) id<SXTextStyleFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)fontName;
-(id)init;
-(id<SXTextStyleFontAttributes>)fontAttributes;
@end

