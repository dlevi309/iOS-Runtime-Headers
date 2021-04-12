/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBPearlMatchingStateProvider <NSObject>
@property (assign,nonatomic,__weak) id<SBPearlMatchingStateProviderDelegate> delegate; 
@property (nonatomic,readonly) BOOL pearlMatchEnabledAndPossible; 
@property (nonatomic,readonly) BOOL seenMatchResultSinceScreenOn; 
@required
-(id<SBPearlMatchingStateProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reset;
-(BOOL)seenMatchResultSinceScreenOn;
-(BOOL)pearlMatchEnabledAndPossible;

@end

