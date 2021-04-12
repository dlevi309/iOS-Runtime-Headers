/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EBReaderState, EDSheet;

@interface EBReaderSheetState : NSObject {

	EBReaderState* mReaderState;
	EDSheet* mEDSheet;
	map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long> > >* mSharedFormulas;
	unsigned long long mChartIndex;

}
-(id)resources;
-(id)workbook;
-(XlBinaryReader*)xlReader;
-(id)edSheet;
-(id)readerState;
-(unsigned long long)sharedFormulaIndexForRowCol:(int)arg1 ;
-(void)setSharedFormulaIndex:(unsigned long long)arg1 forRowCol:(int)arg2 ;
-(unsigned long long)nextChartIndex;
-(id)initWithReaderState:(id)arg1 ;
-(void)setEDSheet:(id)arg1 ;
-(void)reportWorksheetWarning:(id)arg1 ;
@end

