/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, HMFMessageDestination, HMFMessageTransport, HMFActivity, NSDictionary, HMFLogEventSession;

@interface HMFMessageInternal : HMFObject <NSCopying> {

	NSUUID* _identifier;
	NSString* _name;
	double _timeout;
	long long _qualityOfService;
	HMFMessageDestination* _destination;
	HMFMessageTransport* _transport;
	HMFActivity* _activity;
	NSDictionary* _userInfo;
	NSDictionary* _headers;
	NSDictionary* _messagePayload;
	HMFLogEventSession* _logEventSession;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double timeout;                                      //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                          //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,retain) HMFMessageDestination * destination;                 //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic,__weak) HMFMessageTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) HMFActivity * activity;                              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                                //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSDictionary * messagePayload;                         //@synthesize messagePayload=_messagePayload - In the implementation block
@property (nonatomic,retain) HMFLogEventSession * logEventSession;                //@synthesize logEventSession=_logEventSession - In the implementation block
@property (nonatomic,copy) id responseHandler;                                    //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setQualityOfService:(long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setDestination:(HMFMessageDestination *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setMessagePayload:(NSDictionary *)arg1 ;
-(HMFMessageTransport *)transport;
-(id)init;
-(HMFActivity *)activity;
-(void)setTransport:(HMFMessageTransport *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(id)responseHandler;
-(void)setLogEventSession:(HMFLogEventSession *)arg1 ;
-(NSDictionary *)messagePayload;
-(NSString *)name;
-(void)setActivity:(HMFActivity *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(HMFLogEventSession *)logEventSession;
-(long long)qualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMFMessageDestination *)destination;
@end

