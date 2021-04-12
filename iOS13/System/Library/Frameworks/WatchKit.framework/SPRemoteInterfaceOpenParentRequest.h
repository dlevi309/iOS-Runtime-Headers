/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@class NSData;

@interface SPRemoteInterfaceOpenParentRequest : NSObject {

	BOOL _waitingForReply;
	NSData* _userInfoData;
	/*^block*/id _reply;

}

@property (assign,nonatomic) BOOL waitingForReply;              //@synthesize waitingForReply=_waitingForReply - In the implementation block
@property (nonatomic,copy) NSData * userInfoData;               //@synthesize userInfoData=_userInfoData - In the implementation block
@property (nonatomic,copy) id reply;                            //@synthesize reply=_reply - In the implementation block
-(id)reply;
-(NSData *)userInfoData;
-(void)setUserInfoData:(NSData *)arg1 ;
-(void)setReply:(id)arg1 ;
-(BOOL)waitingForReply;
-(void)setWaitingForReply:(BOOL)arg1 ;
@end

