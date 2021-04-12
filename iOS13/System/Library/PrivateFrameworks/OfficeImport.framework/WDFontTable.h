/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {

	OITSUNoCopyDictionary* mFontTable;
	NSMutableArray* mFontsInOrderOfInsertion;

}
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)clear;
-(id)fonts;
-(id)fontAtIndex:(unsigned long long)arg1 ;
-(id)fontWithName:(id)arg1 ;
-(id)createFontWithName:(id)arg1 ;
-(id)fontWithName:(id)arg1 create:(BOOL)arg2 ;
-(unsigned long long)indexOfFont:(id)arg1 ;
@end

