/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

