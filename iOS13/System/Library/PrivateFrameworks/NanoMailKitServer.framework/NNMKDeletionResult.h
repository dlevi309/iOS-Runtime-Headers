/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NNMKProtoMessageDeletions, NSArray;

@interface NNMKDeletionResult : NSObject {

	NNMKProtoMessageDeletions* _protectedProtobuf;
	NNMKProtoMessageDeletions* _unprotectedNotificationProtobuf;
	NNMKProtoMessageDeletions* _unprotectedDefaultProtobuf;
	NSArray* _protectedMessageIds;
	NSArray* _unprotectedNotificationMessageIds;
	NSArray* _unprotectedDefaultMessageIds;

}

@property (nonatomic,retain) NNMKProtoMessageDeletions * protectedProtobuf;                            //@synthesize protectedProtobuf=_protectedProtobuf - In the implementation block
@property (nonatomic,retain) NNMKProtoMessageDeletions * unprotectedNotificationProtobuf;              //@synthesize unprotectedNotificationProtobuf=_unprotectedNotificationProtobuf - In the implementation block
@property (nonatomic,retain) NNMKProtoMessageDeletions * unprotectedDefaultProtobuf;                   //@synthesize unprotectedDefaultProtobuf=_unprotectedDefaultProtobuf - In the implementation block
@property (nonatomic,retain) NSArray * protectedMessageIds;                                            //@synthesize protectedMessageIds=_protectedMessageIds - In the implementation block
@property (nonatomic,retain) NSArray * unprotectedNotificationMessageIds;                              //@synthesize unprotectedNotificationMessageIds=_unprotectedNotificationMessageIds - In the implementation block
@property (nonatomic,retain) NSArray * unprotectedDefaultMessageIds;                                   //@synthesize unprotectedDefaultMessageIds=_unprotectedDefaultMessageIds - In the implementation block
-(void)setProtectedProtobuf:(NNMKProtoMessageDeletions *)arg1 ;
-(void)setProtectedMessageIds:(NSArray *)arg1 ;
-(void)setUnprotectedNotificationProtobuf:(NNMKProtoMessageDeletions *)arg1 ;
-(void)setUnprotectedNotificationMessageIds:(NSArray *)arg1 ;
-(void)setUnprotectedDefaultProtobuf:(NNMKProtoMessageDeletions *)arg1 ;
-(void)setUnprotectedDefaultMessageIds:(NSArray *)arg1 ;
-(NNMKProtoMessageDeletions *)protectedProtobuf;
-(NNMKProtoMessageDeletions *)unprotectedNotificationProtobuf;
-(NNMKProtoMessageDeletions *)unprotectedDefaultProtobuf;
-(NSArray *)protectedMessageIds;
-(NSArray *)unprotectedNotificationMessageIds;
-(NSArray *)unprotectedDefaultMessageIds;
@end

