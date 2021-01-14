/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPersistedTaskAttribution, NSMutableArray;

@interface TRIFetchOnDemandFactorsPersistedTask : TRIPBMessage

@property (nonatomic,copy) NSString * namespaceName; 
@property (assign,nonatomic) BOOL hasNamespaceName; 
@property (assign,nonatomic) int retryCount; 
@property (assign,nonatomic) BOOL hasRetryCount; 
@property (nonatomic,copy) NSString * notificationKey; 
@property (assign,nonatomic) BOOL hasNotificationKey; 
@property (nonatomic,retain) TRIPersistedTaskAttribution * taskAttribution; 
@property (assign,nonatomic) BOOL hasTaskAttribution; 
@property (nonatomic,retain) NSMutableArray * treatmentAssetIndexesArray; 
@property (nonatomic,readonly) unsigned long long treatmentAssetIndexesArray_Count; 
+(id)descriptor;
@end

