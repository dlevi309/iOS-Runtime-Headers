/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSBlock, NSXPCInterface, NSDictionary;

@interface _NSXPCConnectionExpectedReplyInfo : NSObject {

	NSBlock* _replyBlock;
	/*^block*/id _errorBlock;
	/*^block*/id _cleanupBlock;
	SEL _selector;
	NSXPCInterface* _interface;
	NSDictionary* _userInfo;
	unsigned long long _proxyNumber;

}

@property (assign) SEL selector;                                //@synthesize selector=_selector - In the implementation block
@property (copy) NSBlock * replyBlock;                          //@synthesize replyBlock=_replyBlock - In the implementation block
@property (copy) id errorBlock;                                 //@synthesize errorBlock=_errorBlock - In the implementation block
@property (copy) id cleanupBlock;                               //@synthesize cleanupBlock=_cleanupBlock - In the implementation block
@property (retain) NSXPCInterface * interface;                  //@synthesize interface=_interface - In the implementation block
@property (retain) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (assign) unsigned long long proxyNumber;              //@synthesize proxyNumber=_proxyNumber - In the implementation block
-(void)dealloc;
-(SEL)selector;
-(NSDictionary *)userInfo;
-(void)setSelector:(SEL)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSXPCInterface *)interface;
-(id)errorBlock;
-(id)cleanupBlock;
-(NSBlock *)replyBlock;
-(unsigned long long)proxyNumber;
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(void)setProxyNumber:(unsigned long long)arg1 ;
-(void)setReplyBlock:(NSBlock *)arg1 ;
-(void)setErrorBlock:(id)arg1 ;
-(void)setCleanupBlock:(id)arg1 ;
@end

