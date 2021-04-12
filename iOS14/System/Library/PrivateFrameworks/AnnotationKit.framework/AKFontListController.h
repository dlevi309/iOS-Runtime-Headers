/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class NSArray, UIFont;

@interface AKFontListController : NSObject {

	NSArray* _fonts;
	UIFont* _defaultFont;

}

@property (retain) NSArray * fonts;                   //@synthesize fonts=_fonts - In the implementation block
@property (retain) UIFont * defaultFont;              //@synthesize defaultFont=_defaultFont - In the implementation block
+(id)attributedStringForFont:(id)arg1 ;
-(NSArray *)fonts;
-(void)setFonts:(NSArray *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(UIFont *)defaultFont;
-(id)_createFontsList;
-(void)setDefaultFont:(UIFont *)arg1 ;
@end

