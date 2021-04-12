/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@interface ConsistencyProofRequest_LogConsistencyRequest : GPBMessage

@property (assign,nonatomic) int logType; 
@property (assign,nonatomic) int application; 
@property (assign,nonatomic) unsigned long long startRevision; 
@property (assign,nonatomic) unsigned long long endRevision; 
+(id)descriptor;
@end

