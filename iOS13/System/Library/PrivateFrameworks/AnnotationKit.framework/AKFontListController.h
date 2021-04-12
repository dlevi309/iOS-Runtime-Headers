/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIFont *)defaultFont;
-(NSArray *)fonts;
-(void)setFonts:(NSArray *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)_createFontsList;
-(void)setDefaultFont:(UIFont *)arg1 ;
@end

