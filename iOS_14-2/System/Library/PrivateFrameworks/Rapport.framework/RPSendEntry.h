/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_source;
@class NSData, NSString, NSDictionary, NSObject, NSNumber;

@interface RPSendEntry : NSObject {

	unsigned _xid;
	unsigned _xpcID;
	/*^block*/id _completion;
	NSData* _eventData;
	NSString* _eventID;
	NSDictionary* _options;
	unsigned long long _queueTicks;
	NSString* _requestID;
	NSDictionary* _request;
	/*^block*/id _responseHandler;
	NSObject*<OS_dispatch_source> _timer;
	NSNumber* _xidObj;

}

@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSData * eventData;                                 //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,copy) NSString * eventID;                                 //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long queueTicks;                    //@synthesize queueTicks=_queueTicks - In the implementation block
@property (nonatomic,copy) NSString * requestID;                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSDictionary * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                 //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned xid;                                     //@synthesize xid=_xid - In the implementation block
@property (nonatomic,retain) NSNumber * xidObj;                                //@synthesize xidObj=_xidObj - In the implementation block
@property (assign,nonatomic) unsigned xpcID;                                   //@synthesize xpcID=_xpcID - In the implementation block
-(unsigned)xid;
-(NSString *)eventID;
-(void)setCompletion:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setRequest:(NSDictionary *)arg1 ;
-(unsigned)xpcID;
-(NSDictionary *)options;
-(NSNumber *)xidObj;
-(id)completion;
-(id)responseHandler;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)request;
-(NSString *)requestID;
-(NSData *)eventData;
-(void)setResponseHandler:(id)arg1 ;
-(void)setXid:(unsigned)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setEventData:(NSData *)arg1 ;
-(void)setEventID:(NSString *)arg1 ;
-(void)setXpcID:(unsigned)arg1 ;
-(unsigned long long)queueTicks;
-(void)setQueueTicks:(unsigned long long)arg1 ;
-(void)setXidObj:(NSNumber *)arg1 ;
@end
