/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface OADTableRow : NSObject {

	NSMutableArray* mCells;
	float mHeight;

}
-(id)init;
-(id)description;
-(float)height;
-(void)setHeight:(float)arg1 ;
-(unsigned long long)cellCount;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(id)addCell;
-(void)flipCellsRTL;
@end

