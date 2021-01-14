/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
*/


@class NSMutableArray;

@interface SNTestChain : NSObject {

	NSMutableArray* _linkBlocks;

}

@property (nonatomic,readonly) NSMutableArray * linkBlocks;              //@synthesize linkBlocks=_linkBlocks - In the implementation block
-(void)addLink:(/*^block*/id)arg1 ;
-(id)init;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableArray *)linkBlocks;
-(void)popAndRunWithCompletion:(/*^block*/id)arg1 testFailure:(id)arg2 ;
@end

