/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@interface _RMSMessageRecord : NSObject {

	unsigned short _messageType;
	id _responseBlock;

}

@property (assign,nonatomic) unsigned short messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) id responseBlock;                        //@synthesize responseBlock=_responseBlock - In the implementation block
-(unsigned short)messageType;
-(void)setMessageType:(unsigned short)arg1 ;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
@end

