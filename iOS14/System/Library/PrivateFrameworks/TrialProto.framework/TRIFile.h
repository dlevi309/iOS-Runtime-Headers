/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIAsset, NSString;

@interface TRIFile : TRIPBMessage

@property (nonatomic,retain) TRIAsset * asset; 
@property (assign,nonatomic) BOOL hasAsset; 
@property (nonatomic,copy) NSString * path; 
@property (assign,nonatomic) BOOL hasPath; 
@property (assign,nonatomic) BOOL isOnDemand; 
@property (assign,nonatomic) BOOL hasIsOnDemand; 
+(id)descriptor;
@end

