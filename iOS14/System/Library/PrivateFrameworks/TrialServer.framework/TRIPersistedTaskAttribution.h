/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPersistedNetworkBehavior;

@interface TRIPersistedTaskAttribution : TRIPBMessage

@property (nonatomic,copy) NSString * applicationBundleId; 
@property (assign,nonatomic) BOOL hasApplicationBundleId; 
@property (assign,nonatomic) int cloudKitContainer; 
@property (assign,nonatomic) BOOL hasCloudKitContainer; 
@property (nonatomic,copy) NSString * teamId; 
@property (assign,nonatomic) BOOL hasTeamId; 
@property (nonatomic,retain) TRIPersistedNetworkBehavior * networkBehavior; 
@property (assign,nonatomic) BOOL hasNetworkBehavior; 
+(id)descriptor;
@end

