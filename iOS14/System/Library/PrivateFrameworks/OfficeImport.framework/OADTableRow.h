/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface OADTableRow : NSObject {

	NSMutableArray* mCells;
	float mHeight;

}
-(void)setHeight:(float)arg1 ;
-(id)init;
-(float)height;
-(id)description;
-(id)addCell;
-(unsigned long long)cellCount;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(void)flipCellsRTL;
@end

