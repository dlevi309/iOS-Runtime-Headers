/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_source;
@class NSDictionary, NSString, NSObject;

@interface RPRequestEntry : NSObject {

	unsigned _xpcID;
	NSDictionary* _options;
	NSString* _requestID;
	/*^block*/id _responseHandler;
	unsigned long long _sendTicks;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,copy) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * requestID;                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) id responseHandler;                                 //@synthesize responseHandler=_responseHandler - In the implementation block
@property (assign,nonatomic) unsigned long long sendTicks;                     //@synthesize sendTicks=_sendTicks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned xpcID;                                   //@synthesize xpcID=_xpcID - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(unsigned long long)sendTicks;
-(void)setSendTicks:(unsigned long long)arg1 ;
-(unsigned)xpcID;
-(void)setXpcID:(unsigned)arg1 ;
@end

