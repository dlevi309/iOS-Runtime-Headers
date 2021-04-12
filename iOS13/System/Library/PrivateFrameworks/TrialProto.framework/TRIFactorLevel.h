/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIFactor, TRILevel;

@interface TRIFactorLevel : TRIPBMessage

@property (nonatomic,retain) TRIFactor * factor; 
@property (assign,nonatomic) BOOL hasFactor; 
@property (nonatomic,retain) TRILevel * level; 
@property (assign,nonatomic) BOOL hasLevel; 
+(id)descriptor;
@end

