/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@interface MRMessageReplyIdentifier : NSObject {

	unsigned long long _messageNumber;
	/*^block*/id _reply;

}

@property (assign,nonatomic) unsigned long long messageNumber;              //@synthesize messageNumber=_messageNumber - In the implementation block
@property (nonatomic,copy) id reply;                                        //@synthesize reply=_reply - In the implementation block
-(id)reply;
-(unsigned long long)messageNumber;
-(void)setMessageNumber:(unsigned long long)arg1 ;
-(void)setReply:(id)arg1 ;
@end

