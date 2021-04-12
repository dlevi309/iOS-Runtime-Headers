/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSTransactionObserver.h>

@class NSMutableArray, NSString;

@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver> {

	NSMutableArray* _willBeginBlocks;
	NSMutableArray* _didBeginBlocks;
	NSMutableArray* _didFinishWorkBlocks;
	NSMutableArray* _didCompleteBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transactionWillBegin:(id)arg1 ;
-(void)transactionDidBegin:(id)arg1 ;
-(void)transactionDidFinishWork:(id)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(void)addTransactionWillBeginBlock:(/*^block*/id)arg1 ;
-(void)addTransactionDidBeginBlock:(/*^block*/id)arg1 ;
-(void)addTransactionDidFinishWorkBlock:(/*^block*/id)arg1 ;
-(void)addTransactionDidCompleteBlock:(/*^block*/id)arg1 ;
@end

