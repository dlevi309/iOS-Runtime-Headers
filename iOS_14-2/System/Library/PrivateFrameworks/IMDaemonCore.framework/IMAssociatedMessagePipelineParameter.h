/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDaemonCore-Structs.h>
#import <IMDaemonCore/IMTextMessagePipelineParameter.h>
#import <IMDaemonCore/IMAssociatedMessageProcessingParameter.h>

@class NSString;

@interface IMAssociatedMessagePipelineParameter : IMTextMessagePipelineParameter <IMAssociatedMessageProcessingParameter> {

	long long _associatedMessageType;
	NSString* _associatedMessageGUID;
	NSRange _associatedMessageRange;

}

@property (assign,nonatomic) long long associatedMessageType;              //@synthesize associatedMessageType=_associatedMessageType - In the implementation block
@property (nonatomic,copy) NSString * associatedMessageGUID;               //@synthesize associatedMessageGUID=_associatedMessageGUID - In the implementation block
@property (assign,nonatomic) NSRange associatedMessageRange;               //@synthesize associatedMessageRange=_associatedMessageRange - In the implementation block
-(long long)associatedMessageType;
-(id)description;
-(void)setAssociatedMessageGUID:(NSString *)arg1 ;
-(void)setAssociatedMessageType:(long long)arg1 ;
-(NSRange)associatedMessageRange;
-(NSString *)associatedMessageGUID;
-(void)setAssociatedMessageRange:(NSRange)arg1 ;
-(id)initWithBD:(id)arg1 idsTrustedData:(id)arg2 ;
@end

