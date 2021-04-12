/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
*/


@class NSMutableArray;

@interface SNTestChain : NSObject {

	NSMutableArray* _linkBlocks;

}

@property (nonatomic,readonly) NSMutableArray * linkBlocks;              //@synthesize linkBlocks=_linkBlocks - In the implementation block
-(id)init;
-(void)addLink:(/*^block*/id)arg1 ;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableArray *)linkBlocks;
-(void)popAndRunWithCompletion:(/*^block*/id)arg1 testFailure:(id)arg2 ;
@end

