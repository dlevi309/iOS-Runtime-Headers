/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@class NSMutableData, CBCentral, CBCharacteristic, NSNumber, NSData;

@interface CBATTRequest : NSObject {

	NSMutableData* _value;
	BOOL _ignoreResponse;
	CBCentral* _central;
	CBCharacteristic* _characteristic;
	unsigned long long _offset;
	NSNumber* _transactionID;

}

@property (nonatomic,retain) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionID;                     //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,nonatomic) BOOL ignoreResponse;                            //@synthesize ignoreResponse=_ignoreResponse - In the implementation block
@property (nonatomic,readonly) CBCentral * central;                          //@synthesize central=_central - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                    //@synthesize offset=_offset - In the implementation block
@property (copy) NSData * value;                                             //@synthesize value=_value - In the implementation block
-(unsigned long long)endOffset;
-(void)setValue:(NSData *)arg1 ;
-(unsigned long long)offset;
-(id)description;
-(CBCentral *)central;
-(BOOL)ignoreResponse;
-(id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned long long)arg3 transactionID:(id)arg4 ;
-(void)appendValueData:(id)arg1 ;
-(void)setIgnoreResponse:(BOOL)arg1 ;
-(CBCharacteristic *)characteristic;
-(void)setCharacteristic:(CBCharacteristic *)arg1 ;
-(NSNumber *)transactionID;
-(NSData *)value;
@end

