/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSDecimalNumber, NSString;

@interface PKAccountAssistanceProgramMessage : NSObject <NSSecureCoding, PKRecordObject> {

	NSDecimalNumber* _pastDue;
	NSDecimalNumber* _chargeOffPreventionAmount;
	NSDecimalNumber* _currentBalance;

}

@property (nonatomic,retain) NSDecimalNumber * pastDue;                                //@synthesize pastDue=_pastDue - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * chargeOffPreventionAmount;              //@synthesize chargeOffPreventionAmount=_chargeOffPreventionAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * currentBalance;                         //@synthesize currentBalance=_currentBalance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(NSDecimalNumber *)currentBalance;
-(void)setCurrentBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)chargeOffPreventionAmount;
-(void)setChargeOffPreventionAmount:(NSDecimalNumber *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSDecimalNumber *)pastDue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(void)setPastDue:(NSDecimalNumber *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

