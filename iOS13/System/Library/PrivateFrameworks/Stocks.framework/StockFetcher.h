/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SymbolValidatorDelegate.h>

@class SymbolValidator, NSTimer, NSString;

@interface StockFetcher : NSObject <SymbolValidatorDelegate> {

	double _timeoutDuration;
	SymbolValidator* _validator;
	/*^block*/id _completionHandler;
	NSTimer* _timeoutTimer;

}

@property (retain) SymbolValidator * validator;                     //@synthesize validator=_validator - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign) double timeoutDuration;                          //@synthesize timeoutDuration=_timeoutDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setTimeoutDuration:(double)arg1 ;
-(double)timeoutDuration;
-(id)initWithValidator:(id)arg1 ;
-(void)setValidator:(SymbolValidator *)arg1 ;
-(SymbolValidator *)validator;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
-(void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2 ;
-(void)symbolValidator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)fetchStockWithSymbol:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cleanUpAndReportResult:(id)arg1 ;
-(void)attemptRemoteFetchOfStockWithSymbol:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)remoteFetchTimedOut;
@end

