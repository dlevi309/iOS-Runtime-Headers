/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(id)hashString;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(NSString *)paymentTermsIdentifier;
-(void)setPreset:(long long)arg1 ;
-(void)setScheduleTimeZone:(id)arg1 ;
-(void)setScheduledDate:(NSDate *)arg1 ;
-(void)setPaymentTermsIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2 ;
-(long long)scheduledDay;
-(void)setScheduledDay:(long long)arg1 ;
-(long long)preset;
-(NSDate *)scheduledDate;
@end

