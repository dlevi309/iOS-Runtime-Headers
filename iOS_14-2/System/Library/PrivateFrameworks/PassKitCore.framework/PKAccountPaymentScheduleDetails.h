/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTimeZone, NSDate, NSString;

@interface PKAccountPaymentScheduleDetails : NSObject <NSSecureCoding> {

	NSTimeZone* _productTimeZone;
	long long _frequency;
	long long _scheduledDay;
	long long _preset;
	NSDate* _scheduledDate;
	NSString* _paymentTermsIdentifier;

}

@property (assign,nonatomic) long long frequency;                          //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) long long scheduledDay;                       //@synthesize scheduledDay=_scheduledDay - In the implementation block
@property (assign,nonatomic) long long preset;                             //@synthesize preset=_preset - In the implementation block
@property (nonatomic,copy) NSDate * scheduledDate;                         //@synthesize scheduledDate=_scheduledDate - In the implementation block
@property (nonatomic,copy) NSString * paymentTermsIdentifier;              //@synthesize paymentTermsIdentifier=_paymentTermsIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFrequency:(long long)arg1 ;
-(long long)frequency;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)paymentTermsIdentifier;
-(void)setScheduleTimeZone:(id)arg1 ;
-(void)setScheduledDate:(NSDate *)arg1 ;
-(void)setPaymentTermsIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonString;
-(id)description;
-(id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2 ;
-(void)setPreset:(long long)arg1 ;
-(unsigned long long)hash;
-(id)hashString;
-(id)initWithCoder:(id)arg1 ;
-(long long)preset;
-(id)jsonDictionaryRepresentation;
-(long long)scheduledDay;
-(void)setScheduledDay:(long long)arg1 ;
-(NSDate *)scheduledDate;
-(BOOL)isEqual:(id)arg1 ;
@end

