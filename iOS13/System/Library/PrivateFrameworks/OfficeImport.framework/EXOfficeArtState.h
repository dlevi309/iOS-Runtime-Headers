/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OAXDrawingState.h>

@class EXReadState;

@interface EXOfficeArtState : OAXDrawingState {

	EXReadState* mExcelState;

}

@property (__weak,readonly) EXReadState * excelState; 
-(EXReadState *)excelState;
-(id)initWithExcelState:(id)arg1 ;
@end

