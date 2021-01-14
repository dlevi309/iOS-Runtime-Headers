/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDBlock.h>

@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {

	WDTableProperties* mProperties;
	NSMutableArray* mRows;

}
-(id)initWithText:(id)arg1 ;
-(id)properties;
-(int)nestingLevel;
-(id)rowAt:(unsigned long long)arg1 ;
-(void)clearProperties;
-(id)insertRowAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)addRow;
-(unsigned long long)rowCount;
-(int)blockType;
-(id)runIterator;
-(id)newRunIterator;
-(id)rowIterator;
-(id)newRowIterator;
-(void)clearRows;
-(id)cellIterator;
-(id)newCellIterator;
@end

