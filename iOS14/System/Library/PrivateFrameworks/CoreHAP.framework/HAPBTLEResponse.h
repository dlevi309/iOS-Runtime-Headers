/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class HAPBTLERequest, HAPBTLETransactionIdentifier, NSData, NSMutableData;

@interface HAPBTLEResponse : HMFObject {

	BOOL _headerComplete;
	unsigned char _statusCode;
	HAPBTLERequest* _request;
	HAPBTLETransactionIdentifier* _identifier;
	NSData* _body;
	unsigned long long _bodyLength;
	NSMutableData* __internalBody;

}

@property (assign,getter=isHeaderComplete,nonatomic) BOOL headerComplete;                         //@synthesize headerComplete=_headerComplete - In the implementation block
@property (nonatomic,copy) NSData * body;                                                         //@synthesize body=_body - In the implementation block
@property (setter=_setInternalBody:,nonatomic,retain) NSMutableData * _internalBody;              //@synthesize _internalBody=__internalBody - In the implementation block
@property (nonatomic,readonly) HAPBTLERequest * request;                                          //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) HAPBTLETransactionIdentifier * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (getter=isBodyComplete,nonatomic,readonly) BOOL bodyComplete; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) unsigned long long bodyLength;                                     //@synthesize bodyLength=_bodyLength - In the implementation block
@property (nonatomic,readonly) unsigned char statusCode;                                          //@synthesize statusCode=_statusCode - In the implementation block
-(void)setBody:(NSData *)arg1 ;
-(BOOL)isComplete;
-(NSData *)body;
-(id)init;
-(id)shortDescription;
-(id)debugDescription;
-(unsigned long long)appendData:(id)arg1 error:(id*)arg2 ;
-(HAPBTLERequest *)request;
-(unsigned char)statusCode;
-(id)description;
-(BOOL)isValid;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isEncrypted;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HAPBTLETransactionIdentifier *)identifier;
-(unsigned long long)bodyLength;
-(BOOL)isHeaderComplete;
-(BOOL)isBodyComplete;
-(NSMutableData *)_internalBody;
-(unsigned long long)_deserializeHeaderWithData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_remainingBodyLength;
-(void)_setInternalBody:(id)arg1 ;
-(unsigned long long)_deserializeHeaderBodyLengthWithData:(id)arg1 error:(id*)arg2 ;
-(void)setHeaderComplete:(BOOL)arg1 ;
@end

