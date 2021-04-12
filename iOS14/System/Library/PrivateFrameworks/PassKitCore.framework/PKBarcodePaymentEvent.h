/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSData;

@interface PKBarcodePaymentEvent : NSObject <NSSecureCoding> {

	BOOL _biometricsChanged;
	long long _version;
	NSDate* _timestamp;
	unsigned long long _eventType;
	NSString* _barcodeIdentifier;
	long long _authenticationType;
	NSString* _deviceAccountIdentifier;
	NSData* _eventMetadata;

}

@property (nonatomic,readonly) long long version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                  //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * barcodeIdentifier;                    //@synthesize barcodeIdentifier=_barcodeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL biometricsChanged;                        //@synthesize biometricsChanged=_biometricsChanged - In the implementation block
@property (assign,nonatomic) long long authenticationType;                  //@synthesize authenticationType=_authenticationType - In the implementation block
@property (nonatomic,copy) NSString * deviceAccountIdentifier;              //@synthesize deviceAccountIdentifier=_deviceAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSData * eventMetadata;                          //@synthesize eventMetadata=_eventMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEventType:(unsigned long long)arg1 ;
-(unsigned long long)eventType;
-(id)init;
-(BOOL)isEqualToBarcodePaymentEvent:(id)arg1 ;
-(BOOL)biometricsChanged;
-(long long)authenticationType;
-(NSDate *)timestamp;
-(void)setBiometricsChanged:(BOOL)arg1 ;
-(NSData *)eventMetadata;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAuthenticationType:(long long)arg1 ;
-(id)data;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
-(NSString *)deviceAccountIdentifier;
-(NSString *)barcodeIdentifier;
-(void)setBarcodeIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setEventMetadata:(NSData *)arg1 ;
-(long long)version;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

