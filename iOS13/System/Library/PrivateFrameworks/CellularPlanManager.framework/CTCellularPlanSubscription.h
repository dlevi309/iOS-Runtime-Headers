/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CTCellularPlanSubscription : NSObject <NSCopying, NSSecureCoding> {

	BOOL _autoRenew;
	int _planType;
	int _planStatus;
	int _accountStatus;
	int _subscriptionResult;
	NSString* _iccid;
	double _billingStartDate;
	double _billingEndDate;
	NSString* _carrierName;
	NSString* _planDescription;
	NSString* _accountURL;
	double _timestamp;
	NSArray* _homeCountryList;
	NSArray* _dataUsage;

}

@property (assign,nonatomic) int subscriptionResult;                    //@synthesize subscriptionResult=_subscriptionResult - In the implementation block
@property (assign,nonatomic) int planStatus;                            //@synthesize planStatus=_planStatus - In the implementation block
@property (nonatomic,retain) NSString * carrierName;                    //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,readonly) NSString * iccid;                        //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,readonly) BOOL autoRenew;                          //@synthesize autoRenew=_autoRenew - In the implementation block
@property (nonatomic,readonly) double billingStartDate;                 //@synthesize billingStartDate=_billingStartDate - In the implementation block
@property (nonatomic,readonly) double billingEndDate;                   //@synthesize billingEndDate=_billingEndDate - In the implementation block
@property (nonatomic,readonly) int planType;                            //@synthesize planType=_planType - In the implementation block
@property (nonatomic,readonly) NSString * planDescription;              //@synthesize planDescription=_planDescription - In the implementation block
@property (nonatomic,readonly) int accountStatus;                       //@synthesize accountStatus=_accountStatus - In the implementation block
@property (nonatomic,readonly) NSString * accountURL;                   //@synthesize accountURL=_accountURL - In the implementation block
@property (nonatomic,readonly) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSArray * homeCountryList;               //@synthesize homeCountryList=_homeCountryList - In the implementation block
@property (nonatomic,readonly) NSArray * dataUsage;                     //@synthesize dataUsage=_dataUsage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(NSString *)iccid;
-(NSString *)planDescription;
-(NSString *)carrierName;
-(void)setCarrierName:(NSString *)arg1 ;
-(id)initWithIccid:(id)arg1 subscriptionResult:(int)arg2 autoRenew:(BOOL)arg3 billingStartDate:(double)arg4 billingEndDate:(double)arg5 carrierName:(id)arg6 planType:(int)arg7 planDescription:(id)arg8 planStatus:(int)arg9 accountStatus:(int)arg10 accountURL:(id)arg11 timestamp:(double)arg12 homeCountryList:(id)arg13 dataUsage:(id)arg14 ;
-(int)planStatus;
-(BOOL)autoRenew;
-(double)billingStartDate;
-(double)billingEndDate;
-(int)planType;
-(int)accountStatus;
-(NSString *)accountURL;
-(NSArray *)dataUsage;
-(int)subscriptionResult;
-(BOOL)isEqualOrNewerThanSubscription:(id)arg1 ;
-(void)setPlanStatus:(int)arg1 ;
-(NSArray *)homeCountryList;
-(void)setSubscriptionResult:(int)arg1 ;
@end

