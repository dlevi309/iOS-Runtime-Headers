/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBTimestamp;

@interface TRIPersistedNamespaceStatus : TRIPBMessage

@property (nonatomic,copy) NSString * namespaceName; 
@property (assign,nonatomic) BOOL hasNamespaceName; 
@property (assign,nonatomic) unsigned namespaceCompatibilityVersion; 
@property (assign,nonatomic) BOOL hasNamespaceCompatibilityVersion; 
@property (nonatomic,retain) TRIPBTimestamp * latestNotificationQueryLocalTime; 
@property (assign,nonatomic) BOOL hasLatestNotificationQueryLocalTime; 
@property (assign,nonatomic) BOOL lastFetchWasSuccess; 
@property (assign,nonatomic) BOOL hasLastFetchWasSuccess; 
+(id)descriptor;
@end

