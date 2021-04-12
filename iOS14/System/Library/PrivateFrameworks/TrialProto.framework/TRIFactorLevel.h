/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)hashForFactorLevels:(id)arg1 ;
-(id)uniqueDataRepresentation;
@end

