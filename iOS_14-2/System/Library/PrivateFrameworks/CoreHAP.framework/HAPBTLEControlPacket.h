/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class HAPBTLETransactionIdentifier, NSData;

@interface HAPBTLEControlPacket : HMFObject {

	unsigned char _type;
	BOOL _continuationPacket;
	HAPBTLETransactionIdentifier* _transactionIdentifier;
	NSData* _payload;

}

@property (nonatomic,readonly) unsigned char type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPBTLETransactionIdentifier * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * payload;                                             //@synthesize payload=_payload - In the implementation block
@property (getter=isContinuationPacket,nonatomic,readonly) BOOL continuationPacket;               //@synthesize continuationPacket=_continuationPacket - In the implementation block
+(id)shortDescription;
+(id)packetWithSerializedData:(id)arg1 error:(id*)arg2 ;
-(id)serialize;
-(id)init;
-(id)shortDescription;
-(id)debugDescription;
-(NSData *)payload;
-(id)description;
-(unsigned char)type;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HAPBTLETransactionIdentifier *)transactionIdentifier;
-(id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 continuationPacket:(BOOL)arg3 packetPayload:(id)arg4 maximumLength:(unsigned long long)arg5 ;
-(BOOL)isContinuationPacket;
@end

