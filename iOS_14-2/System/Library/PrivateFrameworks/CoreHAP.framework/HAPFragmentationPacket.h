/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HAPFragmentationPacket : HMFObject {

	unsigned short _transactionIdentifier;
	unsigned _length;
	unsigned _offset;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned short transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned length;                                   //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned offset;                                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                //@synthesize data=_data - In the implementation block
-(id)serialize;
-(id)init;
-(id)shortDescription;
-(id)debugDescription;
-(unsigned)length;
-(unsigned)offset;
-(id)description;
-(NSData *)data;
-(unsigned long long)hash;
-(unsigned short)transactionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFragmentedPacketData:(id)arg1 ;
-(id)initWithData:(id)arg1 transactionIdentifier:(unsigned short)arg2 length:(unsigned)arg3 offset:(unsigned)arg4 ;
@end

