/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class CXNamespace;

@interface OCXState : NSObject {

	int mXMLFormat;
	CXNamespace* mOCXRelationshipsNamespace;
	CXNamespace* mOCXDrawingNamespace;

}

@property (nonatomic,readonly) int xmlFormat; 
@property (nonatomic,retain) CXNamespace * OCXRelationshipsNamespace; 
@property (nonatomic,retain) CXNamespace * OCXDrawingNamespace; 
-(id)init;
-(int)xmlFormat;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)OCXThemeRelationshipType;
-(void)setOCXRelationshipsNamespace:(CXNamespace *)arg1 ;
-(void)setOCXDrawingNamespace:(CXNamespace *)arg1 ;
-(id)OCXStylesRelationshipType;
-(id)OCXSharedStringsRelationshipType;
-(id)OCXDrawingRelationshipType;
-(id)OCXEndnotesRelationshipType;
-(id)OCXFontTableRelationshipType;
-(id)OCXFootnotesRelationshipType;
-(id)OCXCommentsRelationshipType;
-(id)OCXCommentsExtendedRelationshipType;
-(id)OCXPivotTableRelationshipType;
-(id)OCXTableRelationshipType;
-(id)OCXSlideMasterRelationshipType;
-(id)OCXSlideLayoutRelationshipType;
-(id)OCXSlideRelationshipType;
-(id)OCXNotesSlideRelationshipType;
-(id)OCXCommentAuthorsRelationshipType;
-(id)OCXCustomXmlRelationshipType;
-(id)OCXLegacyDocTextInfoRelationshipType;
-(id)OCXThemeOverrideRelationshipType;
-(id)OCXVmlDrawingRelationshipType;
-(id)OCXNotesMasterRelationshipType;
-(id)OCXNumberingRelationshipType;
-(id)OCXPackagePresPropsRelationshipType;
-(id)OCXPackageViewPropsRelationshipType;
-(id)OCXTableStylesRelationshipType;
-(id)OCXSettingsRelationshipType;
-(CXNamespace *)OCXRelationshipsNamespace;
-(CXNamespace *)OCXDrawingNamespace;
-(void)setXmlFormat:(int)arg1 ;
@end

