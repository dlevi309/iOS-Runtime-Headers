/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NFApplet, NSDecimalNumber, NSData, NSDictionary;

@interface NFContactlessPaymentEndEvent : NSObject <NSSecureCoding> {

	NSString* _appletIdentifier;
	BOOL _didError;
	unsigned short _status;
	unsigned short _type;
	unsigned short _result;
	unsigned short _informative;
	unsigned _command;
	NFApplet* _applet;
	NSString* _keyIdentifier;
	NSString* _readerIdentifier;
	NSString* _transactionIdentifier;
	NSDecimalNumber* _amount;
	NSString* _currency;
	NSData* _tlv;
	NSDictionary* _felicaInfo;
	NSDictionary* _parsedInfo;

}

@property (nonatomic,readonly) NFApplet * applet;                             //@synthesize applet=_applet - In the implementation block
@property (nonatomic,readonly) NSString * keyIdentifier;                      //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * readerIdentifier;                   //@synthesize readerIdentifier=_readerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL didError;                                 //@synthesize didError=_didError - In the implementation block
@property (nonatomic,readonly) unsigned command;                              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) unsigned short status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned short type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) unsigned short informative;                    //@synthesize informative=_informative - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * amount;                      //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) NSString * currency;                           //@synthesize currency=_currency - In the implementation block
@property (nonatomic,readonly) NSData * tlv;                                  //@synthesize tlv=_tlv - In the implementation block
@property (nonatomic,readonly) NSDictionary * felicaInfo;                     //@synthesize felicaInfo=_felicaInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * parsedInfo;                     //@synthesize parsedInfo=_parsedInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)logsTransactionDetails;
-(void)dealloc;
-(id)description;
-(unsigned short)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned short)result;
-(unsigned short)status;
-(NSDecimalNumber *)amount;
-(unsigned)command;
-(NSString *)transactionIdentifier;
-(NSString *)keyIdentifier;
-(NSString *)currency;
-(id)asDictionary;
-(NFApplet *)applet;
-(BOOL)didError;
-(unsigned short)informative;
-(NSDictionary *)felicaInfo;
-(id)appletIdentifier;
-(void)_setApplet:(id)arg1 ;
-(NSString *)readerIdentifier;
-(NSData *)tlv;
-(NSDictionary *)parsedInfo;
@end

