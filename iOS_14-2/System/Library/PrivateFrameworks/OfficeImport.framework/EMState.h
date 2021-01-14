/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMState.h>

@class EDWorkbook, EDSheet, NSMutableDictionary;

@interface EMState : CMState {

	EDWorkbook* _workbook;
	EDSheet* _currentSheet;
	NSMutableDictionary* _hyperlinks;

}

@property (retain) EDWorkbook * document; 
@property (__weak) EDSheet * currentSheet;              //@synthesize currentSheet=_currentSheet - In the implementation block
-(EDSheet *)currentSheet;
-(id)hyperlinkForRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(void)setCurrentSheet:(EDSheet *)arg1 ;
-(void)setHyperlink:(id)arg1 forRow:(unsigned long long)arg2 column:(unsigned long long)arg3 ;
@end

