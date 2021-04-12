/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/ATXSearchFeedbackListenerTarget.h>

@class NSString;

@interface ATXSearchFeedbackListenerTargetXPC : NSObject <ATXSearchFeedbackListenerTarget>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendActionResponse:(id)arg1 ;
-(void)logAppFeedback:(id)arg1 consumerSubType:(unsigned char)arg2 engagementType:(unsigned long long)arg3 bundleIdentifier:(id)arg4 bundleIdsShown:(id)arg5 ;
@end

