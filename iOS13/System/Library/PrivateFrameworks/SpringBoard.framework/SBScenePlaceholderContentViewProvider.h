/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBScenePlaceholderContentViewProvider <NSObject>
@property (assign,nonatomic,__weak) id<SBScenePlaceholderContentViewProviderDelegate> delegate; 
@required
-(id<SBScenePlaceholderContentViewProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)sceneView:(id)arg1 requestsPlaceholderContentViewWithContext:(id)arg2;

@end

