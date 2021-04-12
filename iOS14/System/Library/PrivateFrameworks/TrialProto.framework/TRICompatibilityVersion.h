/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIFactorLevels;

@interface TRICompatibilityVersion : TRIPBMessage

@property (assign,nonatomic) unsigned id_p; 
@property (assign,nonatomic) BOOL hasId_p; 
@property (nonatomic,retain) TRIFactorLevels * defaultFactorLevels; 
@property (assign,nonatomic) BOOL hasDefaultFactorLevels; 
@property (nonatomic,retain) TRIFactorLevels * control; 
@property (assign,nonatomic) BOOL hasControl; 
+(id)descriptor;
@end

