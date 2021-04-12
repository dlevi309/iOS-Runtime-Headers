/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EBState.h>

@class ECColumnWidthConvertor, OABReaderState;

@interface EBReaderState : EBState {

	XlBinaryReader* mXlReader;
	XlSheetInfoTable* mXlSheetInfoTable;
	ECColumnWidthConvertor* mColumnWidthConvertor;
	XlEshObjectFactory* mXlEshObjectFactory;
	OABReaderState* mOAState;
	BOOL mImportCSV;

}

@property (assign,nonatomic) BOOL importCSV; 
-(void)dealloc;
-(id)columnWidthConvertor;
-(void)reportWarning:(id)arg1 ;
-(XlBinaryReader*)xlReader;
-(id)initWithXlReader:(XlBinaryReader*)arg1 cancelDelegate:(id)arg2 ;
-(void)pauseReading;
-(void)resumeReading;
-(void)readGlobalXlObjects;
-(XlSheetInfoTable*)xlSheetInfoTable;
-(id)oaState;
-(BOOL)importCSV;
-(void)setImportCSV:(BOOL)arg1 ;
@end

