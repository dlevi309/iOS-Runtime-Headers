/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned long long _length;

}

@property (nonatomic,copy) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * requestID;                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) id responseHandler;                                 //@synthesize responseHandler=_responseHandler - In the implementation block
@property (assign,nonatomic) unsigned long long sendTicks;                     //@synthesize sendTicks=_sendTicks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned xpcID;                                   //@synthesize xpcID=_xpcID - In the implementation block
@property (assign,nonatomic) unsigned long long length;                        //@synthesize length=_length - In the implementation block
-(void)setLength:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned)xpcID;
-(NSDictionary *)options;
-(unsigned long long)length;
-(id)responseHandler;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)requestID;
-(void)setResponseHandler:(id)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(unsigned long long)sendTicks;
-(void)setSendTicks:(unsigned long long)arg1 ;
-(void)setXpcID:(unsigned)arg1 ;
@end

