/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class WDTableCell;

@interface WMTableCellMapper : CMMapper {

	WDTableCell* mWdTableCell;
	unsigned mColSpan;
	double mHeight;
	double mWidth;
	double mLeftPadding;
	double mRightPadding;

}
-(unsigned)colSpan;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)tableMapper;
-(void)mapCellStyleAt:(id)arg1 ;
-(id)initWithWDTableCell:(id)arg1 atIndex:(unsigned)arg2 parent:(id)arg3 ;
@end

