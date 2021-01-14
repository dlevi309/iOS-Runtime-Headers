/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resources;
-(void)setResources:(id)arg1 ;
-(BOOL)isCancelled;
-(void)dealloc;
-(id)workbook;
-(id)initWithCancelDelegate:(id)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(void)setWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)xlFormulaProcessor;
-(XlLinkTable*)xlLinkTable;
-(XlNameTable*)xlNameTable;
-(ChVector<OcText>*)sheetNames;
@end

