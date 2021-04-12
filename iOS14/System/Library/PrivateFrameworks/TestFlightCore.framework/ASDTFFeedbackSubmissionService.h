/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <libobjc.A.dylib/TFFeedbackSubmissionService.h>

@class NSString;

@interface ASDTFFeedbackSubmissionService : NSObject <TFFeedbackSubmissionService>

@property (nonatomic,readonly) unsigned long long maxNumberOfScreenshotsAllowed; 
@property (nonatomic,readonly) unsigned long long maxNumberOfCommentSymbolsAllowed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_verifyDataSourceIsReadyForSubmission:(id)arg1 error:(id*)arg2 ;
-(id)_serializeFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 error:(id*)arg3 ;
-(BOOL)_verifyEmailIsValid:(id)arg1 ;
-(unsigned long long)maxNumberOfScreenshotsAllowed;
-(unsigned long long)maxNumberOfCommentSymbolsAllowed;
-(void)submitFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

