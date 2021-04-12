/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMState.h>

@class CMOutlineState, OADTablePartStyle;

@interface PMState : CMState {

	CMOutlineState* mListState;
	OADTablePartStyle* mCurrentRowStyle;

}
-(id)init;
-(id)currentRowStyle;
-(id)listState;
-(void)setCurrentRowStyle:(id)arg1 ;
@end

