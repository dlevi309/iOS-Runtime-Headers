/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface OADTableGrid : NSObject {

	NSMutableArray* mColumns;

}
-(id)init;
-(id)description;
-(unsigned long long)columnCount;
-(id)columnAtIndex:(unsigned long long)arg1 ;
-(id)addColumn;
-(void)flipColumnsRTL;
@end

