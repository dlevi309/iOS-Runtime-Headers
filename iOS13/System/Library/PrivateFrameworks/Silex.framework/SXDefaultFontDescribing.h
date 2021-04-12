/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXTextStyleFontDescribing.h>

@protocol SXTextStyleFontAttributes;
@class NSString;

@interface SXDefaultFontDescribing : NSObject <SXTextStyleFontDescribing> {

	id<SXTextStyleFontAttributes> _fontAttributes;
	NSString* _fontName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName;                                       //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) id<SXTextStyleFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
-(id)init;
-(id<SXTextStyleFontAttributes>)fontAttributes;
-(NSString *)fontName;
@end

