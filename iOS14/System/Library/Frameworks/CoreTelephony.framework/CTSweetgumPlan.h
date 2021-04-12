/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTSweetgumPlan : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _planSubscriptionStatus;
	BOOL _planPurchasable;
	NSString* _planId;
	NSString* _planLabel;
	NSString* _planValue;
	NSString* _planDetailsURL;
	NSString* _planTermsURL;
	NSString* _planPurchaseURL;
	long long _planType;

}

@property (nonatomic,retain) NSString * planId;                                 //@synthesize planId=_planId - In the implementation block
@property (nonatomic,retain) NSString * planLabel;                              //@synthesize planLabel=_planLabel - In the implementation block
@property (nonatomic,retain) NSString * planValue;                              //@synthesize planValue=_planValue - In the implementation block
@property (assign,nonatomic) unsigned char planSubscriptionStatus;              //@synthesize planSubscriptionStatus=_planSubscriptionStatus - In the implementation block
@property (assign,nonatomic) BOOL planPurchasable;                              //@synthesize planPurchasable=_planPurchasable - In the implementation block
@property (nonatomic,retain) NSString * planDetailsURL;                         //@synthesize planDetailsURL=_planDetailsURL - In the implementation block
@property (nonatomic,retain) NSString * planTermsURL;                           //@synthesize planTermsURL=_planTermsURL - In the implementation block
@property (nonatomic,retain) NSString * planPurchaseURL;                        //@synthesize planPurchaseURL=_planPurchaseURL - In the implementation block
@property (assign,nonatomic) long long planType;                                //@synthesize planType=_planType - In the implementation block
@property (nonatomic,readonly) long long planStatus; 
+(BOOL)supportsSecureCoding;
-(NSString *)planId;
-(NSString *)planLabel;
-(long long)planType;
-(NSString *)planValue;
-(long long)planStatus;
-(void)setPlanId:(NSString *)arg1 ;
-(void)setPlanLabel:(NSString *)arg1 ;
-(void)setPlanValue:(NSString *)arg1 ;
-(NSString *)planTermsURL;
-(void)setPlanType:(long long)arg1 ;
-(BOOL)planPurchasable;
-(NSString *)planPurchaseURL;
-(void)setPlanSubscriptionStatus:(unsigned char)arg1 ;
-(NSString *)planDetailsURL;
-(void)setPlanTermsURL:(NSString *)arg1 ;
-(id)init;
-(unsigned char)planSubscriptionStatus;
-(void)setPlanDetailsURL:(NSString *)arg1 ;
-(void)setPlanPurchasable:(BOOL)arg1 ;
-(void)setPlanPurchaseURL:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

