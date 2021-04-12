/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

