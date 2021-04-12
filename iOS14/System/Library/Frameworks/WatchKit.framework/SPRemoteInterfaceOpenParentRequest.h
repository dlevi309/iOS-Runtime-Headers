/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

