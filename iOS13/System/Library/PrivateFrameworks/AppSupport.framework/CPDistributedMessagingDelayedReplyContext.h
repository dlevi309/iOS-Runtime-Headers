/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@interface CPDistributedMessagingDelayedReplyContext : NSObject {

	unsigned _replyPort;
	BOOL _portPassing;

}

@property (assign,nonatomic) unsigned replyPort;              //@synthesize replyPort=_replyPort - In the implementation block
@property (assign,nonatomic) BOOL portPassing;                //@synthesize portPassing=_portPassing - In the implementation block
-(void)dealloc;
-(id)initWithReplyPort:(unsigned)arg1 portPassing:(BOOL)arg2 ;
-(unsigned)replyPort;
-(void)setReplyPort:(unsigned)arg1 ;
-(BOOL)portPassing;
-(void)setPortPassing:(BOOL)arg1 ;
@end

