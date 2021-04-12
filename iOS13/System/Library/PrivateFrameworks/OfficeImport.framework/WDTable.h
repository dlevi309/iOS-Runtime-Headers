/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDBlock.h>

@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {

	WDTableProperties* mProperties;
	NSMutableArray* mRows;

}
-(id)description;
-(int)nestingLevel;
-(unsigned long long)rowCount;
-(id)properties;
-(void)clearProperties;
-(id)initWithText:(id)arg1 ;
-(id)rowAt:(unsigned long long)arg1 ;
-(id)insertRowAtIndex:(unsigned long long)arg1 ;
-(int)blockType;
-(id)addRow;
-(id)runIterator;
-(id)newRunIterator;
-(id)rowIterator;
-(id)newRowIterator;
-(void)clearRows;
-(id)cellIterator;
-(id)newCellIterator;
@end

