/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTCellularPlanProfile, CTCellularPlanSubscription, NSNumber, NSData, NSArray;

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isHomePlan;
	BOOL _requiresUserConsent;
	NSString* _phoneNumber;
	CTCellularPlanProfile* _profile;
	CTCellularPlanSubscription* _subscription;
	NSNumber* _subscriptionStatusOverride;

}

@property (nonatomic,retain) CTCellularPlanProfile * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) CTCellularPlanSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionStatusOverride;                  //@synthesize subscriptionStatusOverride=_subscriptionStatusOverride - In the implementation block
@property (assign,nonatomic) BOOL isHomePlan;                                        //@synthesize isHomePlan=_isHomePlan - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL requiresUserConsent;                               //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
@property (nonatomic,readonly) NSData * profileId; 
@property (nonatomic,readonly) BOOL isSelected; 
@property (nonatomic,readonly) NSString * iccid; 
@property (nonatomic,readonly) BOOL autoRenew; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double billingStartDate; 
@property (nonatomic,readonly) double billingEndDate; 
@property (nonatomic,readonly) NSString * carrierName; 
@property (nonatomic,readonly) int planType; 
@property (nonatomic,readonly) NSString * planDescription; 
@property (nonatomic,readonly) int planStatus; 
@property (nonatomic,readonly) int accountStatus; 
@property (nonatomic,readonly) NSString * accountURL; 
@property (nonatomic,readonly) BOOL isDisableNotAllowed; 
@property (nonatomic,readonly) BOOL isDeleteNotAllowed; 
@property (nonatomic,readonly) NSArray * dataUsage; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) BOOL isSelectable; 
+(BOOL)supportsSecureCoding;
-(NSString *)iccid;
-(void)setProfile:(CTCellularPlanProfile *)arg1 ;
-(int)planType;
-(int)planStatus;
-(id)init;
-(NSArray *)dataUsage;
-(int)accountStatus;
-(double)timestamp;
-(NSString *)carrierName;
-(BOOL)isSelected;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSubscription:(CTCellularPlanSubscription *)arg1 ;
-(BOOL)isSelectable;
-(id)statusAsString:(id)arg1 ;
-(id)description;
-(CTCellularPlanSubscription *)subscription;
-(CTCellularPlanProfile *)profile;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(NSData *)profileId;
-(NSString *)accountURL;
-(BOOL)isDeleteNotAllowed;
-(NSString *)planDescription;
-(double)billingStartDate;
-(double)billingEndDate;
-(NSNumber *)subscriptionStatusOverride;
-(BOOL)requiresUserConsent;
-(void)setRequiresUserConsent:(BOOL)arg1 ;
-(BOOL)isDisableNotAllowed;
-(id)initWithProfile:(id)arg1 subscription:(id)arg2 ;
-(BOOL)autoRenew;
-(void)setSubscriptionStatusOverride:(NSNumber *)arg1 ;
-(long long)planDescriptionCompare:(id)arg1 ;
-(BOOL)isHomePlan;
-(void)setIsHomePlan:(BOOL)arg1 ;
@end

