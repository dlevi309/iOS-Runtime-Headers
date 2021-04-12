/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

@class WBSCompletionQuery, WBSParsecABGroupManager;


@protocol WBSParsecSearchSession <NSObject>
@property (assign,nonatomic,__weak) id<WBSParsecSearchSessionDelegate> delegate; 
@property (nonatomic,retain) WBSCompletionQuery * currentQuery; 
@property (assign,setter=setUIScale:,nonatomic) double uiScale; 
@property (nonatomic,readonly) id<WBSParsecFeedbackDispatcher> feedbackDispatcher; 
@property (nonatomic,readonly) WBSParsecABGroupManager * abGroupManager; 
@property (getter=isABTestingEnabled,nonatomic,readonly) BOOL abTestingEnabled; 
@required
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(WBSCompletionQuery *)currentQuery;
-(void)setCurrentQuery:(id)arg1;
-(double)uiScale;
-(WBSParsecABGroupManager *)abGroupManager;
-(void)setUIScale:(double)arg1;
-(id<WBSParsecFeedbackDispatcher>)feedbackDispatcher;
-(BOOL)isABTestingEnabled;

@end

