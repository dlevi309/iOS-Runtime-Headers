/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class HAPBTLETransactionIdentifier, HAPService, HAPCharacteristic, NSData, HMFBlockOperation, HAPBTLEControlOutputStream, HMFTimer;

@interface HAPBTLERequest : HMFObject {

	unsigned char _type;
	BOOL _encrypted;
	BOOL _finished;
	HAPBTLETransactionIdentifier* _identifier;
	HAPService* _service;
	HAPCharacteristic* _characteristic;
	NSData* _body;
	double _timeoutInterval;
	HMFBlockOperation* _operation;
	HAPBTLEControlOutputStream* _controlOutputStream;
	HMFTimer* _responseTimer;

}

@property (nonatomic,readonly) HAPBTLETransactionIdentifier * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPService * service;                                        //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) HAPCharacteristic * characteristic;                          //@synthesize characteristic=_characteristic - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted;                           //@synthesize encrypted=_encrypted - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                             //@synthesize finished=_finished - In the implementation block
@property (nonatomic,copy,readonly) NSData * body;                                          //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                      //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic,__weak) HMFBlockOperation * operation;                          //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) HAPBTLEControlOutputStream * controlOutputStream;              //@synthesize controlOutputStream=_controlOutputStream - In the implementation block
@property (nonatomic,retain) HMFTimer * responseTimer;                                      //@synthesize responseTimer=_responseTimer - In the implementation block
-(id)serialize;
-(NSData *)body;
-(void)setOperation:(HMFBlockOperation *)arg1 ;
-(id)init;
-(HMFBlockOperation *)operation;
-(void)cancelWithError:(id)arg1 ;
-(id)shortDescription;
-(id)debugDescription;
-(BOOL)isFinished;
-(double)timeoutInterval;
-(id)description;
-(BOOL)isEncrypted;
-(unsigned char)type;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HAPCharacteristic *)characteristic;
-(HAPBTLETransactionIdentifier *)identifier;
-(HAPService *)service;
-(void)setResponseTimer:(HMFTimer *)arg1 ;
-(void)setControlOutputStream:(HAPBTLEControlOutputStream *)arg1 ;
-(HMFTimer *)responseTimer;
-(HAPBTLEControlOutputStream *)controlOutputStream;
-(id)initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(BOOL)arg4 timeoutInterval:(double)arg5 ;
-(id)initWithRequestType:(unsigned char)arg1 bodyData:(id)arg2 shouldEncrypt:(BOOL)arg3 timeoutInterval:(double)arg4 ;
-(id)_initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(BOOL)arg4 timeoutInterval:(double)arg5 ;
-(id)_serializeHeader;
@end

