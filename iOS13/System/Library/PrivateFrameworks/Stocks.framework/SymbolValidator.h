/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/YQLRequest.h>

@class NSArray;

@interface SymbolValidator : YQLRequest {

	NSArray* _symbols;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)didParseData;
-(id)aggregateDictionaryDomain;
-(void)validateSymbol:(id)arg1 withMaxResults:(int)arg2 ;
@end

