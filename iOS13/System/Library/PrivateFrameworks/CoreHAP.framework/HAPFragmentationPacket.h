/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSData *)data;
-(id)serialize;
-(unsigned)offset;
-(id)shortDescription;
-(unsigned short)transactionIdentifier;
-(id)initWithFragmentedPacketData:(id)arg1 ;
-(id)initWithData:(id)arg1 transactionIdentifier:(unsigned short)arg2 length:(unsigned)arg3 offset:(unsigned)arg4 ;
@end

