/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray;

@interface CTCarrierSpaceUsageAccountMetrics : NSObject <NSSecureCoding> {

	BOOL _localDevice;
	NSString* _networkUsageLabel;
	long long _deviceType;
	NSString* _subscriptionStatus;
	NSString* _planType;
	NSDate* _billingCycleEndDate;
	NSArray* _applicablePlans;

}

@property (nonatomic,retain) NSString * networkUsageLabel;               //@synthesize networkUsageLabel=_networkUsageLabel - In the implementation block
@property (assign,nonatomic) long long deviceType;                       //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL localDevice;                           //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,retain) NSString * subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,retain) NSString * planType;                        //@synthesize planType=_planType - In the implementation block
@property (nonatomic,retain) NSDate * billingCycleEndDate;               //@synthesize billingCycleEndDate=_billingCycleEndDate - In the implementation block
@property (nonatomic,retain) NSArray * applicablePlans;                  //@synthesize applicablePlans=_applicablePlans - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)localDevice;
-(NSString *)planType;
-(long long)deviceType;
-(void)setPlanType:(NSString *)arg1 ;
-(void)setNetworkUsageLabel:(NSString *)arg1 ;
-(NSArray *)applicablePlans;
-(id)init;
-(NSString *)networkUsageLabel;
-(NSDate *)billingCycleEndDate;
-(void)setApplicablePlans:(NSArray *)arg1 ;
-(void)setBillingCycleEndDate:(NSDate *)arg1 ;
-(void)setDeviceType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalDevice:(BOOL)arg1 ;
-(void)setSubscriptionStatus:(NSString *)arg1 ;
-(NSString *)subscriptionStatus;
-(BOOL)isEqual:(id)arg1 ;
@end

