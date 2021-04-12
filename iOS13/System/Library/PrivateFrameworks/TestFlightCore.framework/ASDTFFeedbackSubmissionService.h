/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <libobjc.A.dylib/TFFeedbackSubmissionService.h>

@class NSString;

@interface ASDTFFeedbackSubmissionService : NSObject <TFFeedbackSubmissionService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long maxNumberOfScreenshotsAllowed; 
@property (nonatomic,readonly) unsigned long long maxNumberOfCommentSymbolsAllowed; 
-(BOOL)_verifyDataSourceIsReadyForSubmission:(id)arg1 error:(id*)arg2 ;
-(id)_serializeFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 error:(id*)arg3 ;
-(BOOL)_verifyEmailIsValid:(id)arg1 ;
-(unsigned long long)maxNumberOfScreenshotsAllowed;
-(unsigned long long)maxNumberOfCommentSymbolsAllowed;
-(void)submitFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

