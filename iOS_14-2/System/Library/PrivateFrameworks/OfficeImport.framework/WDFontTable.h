/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {

	OITSUNoCopyDictionary* mFontTable;
	NSMutableArray* mFontsInOrderOfInsertion;

}
-(void)clear;
-(id)fonts;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(id)fontAtIndex:(unsigned long long)arg1 ;
-(id)createFontWithName:(id)arg1 ;
-(id)fontWithName:(id)arg1 create:(BOOL)arg2 ;
-(id)fontWithName:(id)arg1 ;
-(unsigned long long)indexOfFont:(id)arg1 ;
@end

