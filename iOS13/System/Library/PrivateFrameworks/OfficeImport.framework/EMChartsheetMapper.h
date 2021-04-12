/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EMSheetMapper.h>

@class EDChartSheet;

@interface EMChartsheetMapper : EMSheetMapper {

	EDChartSheet* mChartSheet;
	CGRect mBox;

}
-(int)width;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithChartSheet:(id)arg1 parent:(id)arg2 ;
-(int)preprocessWidthWithState:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg1 ;
@end

