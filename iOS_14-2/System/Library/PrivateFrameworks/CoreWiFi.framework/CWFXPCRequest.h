/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <Foundation/NSBlockOperation.h>

@class NSUUID, CWFRequestParameters, NSDate, NSDictionary;

@interface CWFXPCRequest : NSBlockOperation {

	BOOL _didSendResponse;
	NSUUID* _UUID;
	long long _type;
	CWFRequestParameters* _requestParameters;
	NSDate* _receivedAt;
	NSDictionary* _info;
	/*^block*/id _response;

}

@property (assign) BOOL didSendResponse;                                          //@synthesize didSendResponse=_didSendResponse - In the implementation block
@property (nonatomic,copy) NSUUID * UUID;                                         //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) CWFRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,copy) NSDate * receivedAt;                                   //@synthesize receivedAt=_receivedAt - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id response;                                           //@synthesize response=_response - In the implementation block
-(NSUUID *)UUID;
-(NSDictionary *)info;
-(id)init;
-(void)setRequestParameters:(CWFRequestParameters *)arg1 ;
-(void)setType:(long long)arg1 ;
-(BOOL)isFinished;
-(id)description;
-(id)response;
-(void)setResponse:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(long long)type;
-(BOOL)didSendResponse;
-(BOOL)isExecuting;
-(CWFRequestParameters *)requestParameters;
-(NSDate *)receivedAt;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setDidSendResponse:(BOOL)arg1 ;
-(void)setReceivedAt:(NSDate *)arg1 ;
@end

