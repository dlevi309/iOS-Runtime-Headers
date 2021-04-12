/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class PBCodable, NSNumber, NSString, IDSProtobuf;

@interface BLTRemoteRequest : NSObject {

	BOOL _allowCloudDelivery;
	BOOL _nonWaking;
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
@property (assign,nonatomic) BOOL nonWaking;                               //@synthesize nonWaking=_nonWaking - In the implementation block
+(id)remoteRequestWithProtobuf:(id)arg1 type:(unsigned short)arg2 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)setProtobuf:(PBCodable *)arg1 ;
-(void)setTimeout:(NSNumber *)arg1 ;
-(NSNumber *)timeout;
-(void)setType:(unsigned short)arg1 ;
-(NSString *)requestDescription;
-(id)description;
-(unsigned short)type;
-(PBCodable *)protobuf;
-(id)didSend;
-(BOOL)nonWaking;
-(void)setNonWaking:(BOOL)arg1 ;
-(BOOL)allowCloudDelivery;
-(void)setAllowCloudDelivery:(BOOL)arg1 ;
-(void)setRequestDescription:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 ;
-(id)didQueue;
-(id)responseCompletion;
-(IDSProtobuf *)responseToRequest;
-(void)setDidSend:(id)arg1 ;
-(void)setDidQueue:(id)arg1 ;
-(void)setResponseCompletion:(id)arg1 ;
-(void)setResponseToRequest:(IDSProtobuf *)arg1 ;
@end

