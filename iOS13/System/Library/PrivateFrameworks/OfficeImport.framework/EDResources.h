/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDStylesCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection;

@interface EDResources : NSObject {

	EDCollection* mStrings;
	EDContentFormatsCollection* mContentFormats;
	EDFontsCollection* mFonts;
	EDCollection* mAlignmentInfos;
	EDStylesCollection* mStyles;
	EDColorsCollection* mColors;
	EDColorsCollection* mThemes;
	EDCollection* mNames;
	EDLinksCollection* mLinks;
	EDCollection* mBorders;
	EDCollection* mBorder;
	EDCollection* mFills;
	EDCollection* mDifferentialStyles;
	EDTableStylesCollection* mTableStyles;

}
-(id)description;
-(id)names;
-(void)setColors:(id)arg1 ;
-(id)borders;
-(id)strings;
-(id)colors;
-(id)styles;
-(id)fonts;
-(id)border;
-(id)links;
-(id)themes;
-(id)fills;
-(id)tableStyles;
-(id)contentFormats;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(id)alignmentInfos;
-(id)differentialStyles;
-(void)setThemes:(id)arg1 ;
@end

