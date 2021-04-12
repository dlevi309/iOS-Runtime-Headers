/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

