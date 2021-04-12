/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) unsigned size; 
@property (assign,nonatomic) BOOL hasSize; 
@property (nonatomic,copy) NSString * treatmentId; 
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (assign,nonatomic) int cloudKitContainer; 
@property (assign,nonatomic) BOOL hasCloudKitContainer; 
+(id)descriptor;
@end

