/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NFApplet, NSDecimalNumber, NSData, NSDictionary;

@interface NFContactlessPaymentEndEvent : NSObject <NSSecureCoding> {

	NSString* _appletIdentifier;
	BOOL _didError;
	BOOL _background;
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

@property (nonatomic,retain,readonly) NFApplet * applet;                             //@synthesize applet=_applet - In the implementation block
@property (nonatomic,retain,readonly) NSString * keyIdentifier;                      //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * readerIdentifier;                   //@synthesize readerIdentifier=_readerIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL didError;                                        //@synthesize didError=_didError - In the implementation block
@property (nonatomic,readonly) unsigned command;                                     //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) unsigned short status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned short type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short result;                                //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) unsigned short informative;                           //@synthesize informative=_informative - In the implementation block
@property (nonatomic,retain,readonly) NSDecimalNumber * amount;                      //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain,readonly) NSString * currency;                           //@synthesize currency=_currency - In the implementation block
@property (nonatomic,retain,readonly) NSData * tlv;                                  //@synthesize tlv=_tlv - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * felicaInfo;                     //@synthesize felicaInfo=_felicaInfo - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * parsedInfo;                     //@synthesize parsedInfo=_parsedInfo - In the implementation block
@property (nonatomic,readonly) BOOL background;                                      //@synthesize background=_background - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)logsTransactionDetails;
-(BOOL)background;
-(NSData *)tlv;
-(id)asDictionary;
-(NFApplet *)applet;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)currency;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)didError;
-(id)description;
-(unsigned short)type;
-(unsigned short)result;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(NSString *)keyIdentifier;
-(unsigned short)informative;
-(NSString *)transactionIdentifier;
-(NSDictionary *)felicaInfo;
-(unsigned)command;
-(unsigned short)status;
-(id)appletIdentifier;
-(void)_setApplet:(id)arg1 ;
-(NSString *)readerIdentifier;
-(NSDictionary *)parsedInfo;
@end

