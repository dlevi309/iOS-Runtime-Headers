/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WBSCompletionQuery *)currentQuery;
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(void)setUIScale:(double)arg1;
-(WBSParsecABGroupManager *)abGroupManager;
-(id<WBSParsecFeedbackDispatcher>)feedbackDispatcher;
-(void)setDelegate:(id)arg1;
-(void)setCurrentQuery:(id)arg1;
-(double)uiScale;
-(BOOL)isABTestingEnabled;

@end

