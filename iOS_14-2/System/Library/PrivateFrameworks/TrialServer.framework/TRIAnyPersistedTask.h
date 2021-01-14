/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class NSData;

@interface TRIAnyPersistedTask : TRIPBMessage

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@property (nonatomic,copy) NSData * serialized; 
@property (assign,nonatomic) BOOL hasSerialized; 
+(id)descriptor;
@end

