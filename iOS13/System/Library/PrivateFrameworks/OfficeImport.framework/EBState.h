/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol TCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class EDWorkbook, EDResources;

@interface EBState : NSObject {

	XlLinkTable* mXlLinkTable;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mSheetNames;
	XlFormulaProcessor* mXlFormulaProcessor;
	EDWorkbook* mWorkbook;
	EDResources* mResources;
	id<TCCancelDelegate> mCancelDelegate;

}

@property (nonatomic,readonly) id<TCCancelDelegate> cancelDelegate; 
-(void)dealloc;
-(BOOL)isCancelled;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)workbook;
-(id)initWithCancelDelegate:(id)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(void)setWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)xlFormulaProcessor;
-(XlLinkTable*)xlLinkTable;
-(XlNameTable*)xlNameTable;
-(ChVector<OcText>*)sheetNames;
@end

