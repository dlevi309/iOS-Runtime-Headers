/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)colors;
-(void)setColors:(id)arg1 ;
-(id)fonts;
-(id)strings;
-(id)border;
-(id)borders;
-(id)fills;
-(id)themes;
-(id)description;
-(id)names;
-(id)styles;
-(id)links;
-(id)tableStyles;
-(id)contentFormats;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(id)alignmentInfos;
-(id)differentialStyles;
-(void)setThemes:(id)arg1 ;
@end

