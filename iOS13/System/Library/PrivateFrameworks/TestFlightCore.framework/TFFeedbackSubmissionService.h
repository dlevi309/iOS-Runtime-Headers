/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@protocol TFFeedbackSubmissionService <NSObject>
@property (nonatomic,readonly) unsigned long long maxNumberOfScreenshotsAllowed; 
@property (nonatomic,readonly) unsigned long long maxNumberOfCommentSymbolsAllowed; 
@required
-(unsigned long long)maxNumberOfScreenshotsAllowed;
-(unsigned long long)maxNumberOfCommentSymbolsAllowed;
-(void)submitFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

