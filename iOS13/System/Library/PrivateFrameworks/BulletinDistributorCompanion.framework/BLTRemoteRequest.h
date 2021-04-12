/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class PBCodable, NSNumber, NSString, IDSProtobuf;

@interface BLTRemoteRequest : NSObject {

	BOOL _allowCloudDelivery;
	unsigned short _type;
	PBCodable* _protobuf;
	/*^block*/id _didSend;
	NSNumber* _timeout;
	/*^block*/id _didQueue;
	NSString* _requestDescription;
	NSString* _uniqueID;
	/*^block*/id _responseCompletion;
	IDSProtobuf* _responseToRequest;

}

@property (nonatomic,retain) IDSProtobuf * responseToRequest;              //@synthesize responseToRequest=_responseToRequest - In the implementation block
@property (nonatomic,retain) PBCodable * protobuf;                         //@synthesize protobuf=_protobuf - In the implementation block
@property (assign,nonatomic) unsigned short type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id didSend;                                     //@synthesize didSend=_didSend - In the implementation block
@property (nonatomic,retain) NSNumber * timeout;                           //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id didQueue;                                    //@synthesize didQueue=_didQueue - In the implementation block
@property (nonatomic,copy) NSString * requestDescription;                  //@synthesize requestDescription=_requestDescription - In the implementation block
@property (assign,nonatomic) BOOL allowCloudDelivery;                      //@synthesize allowCloudDelivery=_allowCloudDelivery - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) id responseCompletion;                          //@synthesize responseCompletion=_responseCompletion - In the implementation block
+(id)remoteRequestWithProtobuf:(id)arg1 type:(unsigned short)arg2 ;
-(id)description;
-(unsigned short)type;
-(void)setType:(unsigned short)arg1 ;
-(NSString *)uniqueID;
-(NSNumber *)timeout;
-(void)setTimeout:(NSNumber *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)setAllowCloudDelivery:(BOOL)arg1 ;
-(void)setProtobuf:(PBCodable *)arg1 ;
-(PBCodable *)protobuf;
-(BOOL)allowCloudDelivery;
-(id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 ;
-(id)didSend;
-(id)didQueue;
-(NSString *)requestDescription;
-(id)responseCompletion;
-(IDSProtobuf *)responseToRequest;
-(void)setDidSend:(id)arg1 ;
-(void)setDidQueue:(id)arg1 ;
-(void)setRequestDescription:(NSString *)arg1 ;
-(void)setResponseCompletion:(id)arg1 ;
-(void)setResponseToRequest:(IDSProtobuf *)arg1 ;
@end

