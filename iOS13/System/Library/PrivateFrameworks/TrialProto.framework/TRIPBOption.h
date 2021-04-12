/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBAny;

@interface TRIPBOption : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) TRIPBAny * value; 
@property (assign,nonatomic) BOOL hasValue; 
+(id)descriptor;
@end

