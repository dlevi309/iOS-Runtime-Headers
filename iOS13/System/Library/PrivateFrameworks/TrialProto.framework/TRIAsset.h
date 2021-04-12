/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIAsset : TRIPBMessage

@property (nonatomic,copy) NSString * assetId; 
@property (assign,nonatomic) BOOL hasAssetId; 
@property (assign,nonatomic) unsigned cloudKitIndex; 
@property (assign,nonatomic) BOOL hasCloudKitIndex; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) BOOL signed_p; 
@property (assign,nonatomic) BOOL hasSigned_p; 
+(id)descriptor;
@end

