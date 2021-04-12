/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@interface CPDistributedMessagingDelayedReplyContext : NSObject {

	unsigned _replyPort;
	BOOL _portPassing;

}

@property (assign,nonatomic) unsigned replyPort;              //@synthesize replyPort=_replyPort - In the implementation block
@property (assign,nonatomic) BOOL portPassing;                //@synthesize portPassing=_portPassing - In the implementation block
-(unsigned)replyPort;
-(BOOL)portPassing;
-(void)setReplyPort:(unsigned)arg1 ;
-(void)setPortPassing:(BOOL)arg1 ;
-(id)initWithReplyPort:(unsigned)arg1 portPassing:(BOOL)arg2 ;
-(void)dealloc;
@end

