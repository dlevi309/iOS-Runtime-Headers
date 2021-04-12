/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBPearlMatchingStateProvider <NSObject>
@property (assign,nonatomic,__weak) id<SBPearlMatchingStateProviderDelegate> delegate; 
@property (nonatomic,readonly) BOOL pearlMatchEnabledAndPossible; 
@property (nonatomic,readonly) BOOL seenMatchResultSinceScreenOn; 
@required
-(BOOL)pearlMatchEnabledAndPossible;
-(BOOL)seenMatchResultSinceScreenOn;
-(id<SBPearlMatchingStateProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reset;

@end

