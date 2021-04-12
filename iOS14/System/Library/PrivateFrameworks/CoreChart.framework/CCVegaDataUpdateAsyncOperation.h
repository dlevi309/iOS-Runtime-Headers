/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <libobjc.A.dylib/CCAsyncOperation.h>

@class CCVegaRenderer, NSString, NSArray;

@interface CCVegaDataUpdateAsyncOperation : NSObject <CCAsyncOperation> {

	CCVegaRenderer* _renderer;
	NSString* _namedDataset;
	NSArray* _rowsToInsert;
	/*^block*/id _callbackForRowsToRemove;

}

@property (assign,nonatomic,__weak) CCVegaRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (retain) NSString * namedDataset;                                 //@synthesize namedDataset=_namedDataset - In the implementation block
@property (retain) NSArray * rowsToInsert;                                  //@synthesize rowsToInsert=_rowsToInsert - In the implementation block
@property (copy) id callbackForRowsToRemove;                                //@synthesize callbackForRowsToRemove=_callbackForRowsToRemove - In the implementation block
-(CCVegaRenderer *)renderer;
-(void)setRenderer:(CCVegaRenderer *)arg1 ;
-(void)performOperationWithCallback:(/*^block*/id)arg1 ;
-(void)setNamedDataset:(NSString *)arg1 ;
-(void)setRowsToInsert:(NSArray *)arg1 ;
-(void)setCallbackForRowsToRemove:(id)arg1 ;
-(NSArray *)rowsToInsert;
-(id)callbackForRowsToRemove;
-(NSString *)namedDataset;
-(void)doDataUpdate:(/*^block*/id)arg1 ;
@end

