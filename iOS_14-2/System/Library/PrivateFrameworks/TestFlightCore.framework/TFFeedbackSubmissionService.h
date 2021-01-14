/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

