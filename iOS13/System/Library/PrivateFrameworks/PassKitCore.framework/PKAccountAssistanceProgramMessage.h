/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSDecimalNumber *)currentBalance;
-(void)setCurrentBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)chargeOffPreventionAmount;
-(void)setChargeOffPreventionAmount:(NSDecimalNumber *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSDecimalNumber *)pastDue;
-(void)setPastDue:(NSDecimalNumber *)arg1 ;
@end

