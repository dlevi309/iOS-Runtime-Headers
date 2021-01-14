/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@protocol NFLPipelayerDelegate, NFLPipeSegment;
@class NSArray, NSObject;

@interface NFLPipelayer : NSObject {

	id<NFLPipelayerDelegate> _delegate;
	NSArray* _pipeUnits;
	NSObject*<NFLPipeSegment> _previousPipeSegment;
	NSObject*<NFLPipeSegment> _nextPipeSegment;

}

@property (nonatomic,copy) NSArray * pipeUnits;                                          //@synthesize pipeUnits=_pipeUnits - In the implementation block
@property (nonatomic,retain) NSObject*<NFLPipeSegment> previousPipeSegment;              //@synthesize previousPipeSegment=_previousPipeSegment - In the implementation block
@property (nonatomic,retain) NSObject*<NFLPipeSegment> nextPipeSegment;                  //@synthesize nextPipeSegment=_nextPipeSegment - In the implementation block
@property (assign,nonatomic,__weak) id<NFLPipelayerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(void)setNextPipeSegment:(NSObject*<NFLPipeSegment>)arg1 ;
-(id)init;
-(id<NFLPipelayerDelegate>)delegate;
-(id)initWithPipe:(id)arg1 previousPipeSegment:(id)arg2 nextPipeSegment:(id)arg3 ;
-(void)setPreviousPipeSegment:(NSObject*<NFLPipeSegment>)arg1 ;
-(NSObject*<NFLPipeSegment>)nextPipeSegment;
-(NSArray *)pipeUnits;
-(void)setDelegate:(id<NFLPipelayerDelegate>)arg1 ;
-(NSObject*<NFLPipeSegment>)previousPipeSegment;
-(id)layPipeWithWallTime:(double)arg1 qualityOfService:(long long)arg2 ;
-(void)setPipeUnits:(NSArray *)arg1 ;
@end

