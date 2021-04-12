/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)status;
-(double)timestamp;
-(NSString *)phoneNumber;
-(NSString *)iccid;
-(NSString *)planDescription;
-(NSString *)carrierName;
-(BOOL)isSelectable;
-(BOOL)isSelected;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithProfile:(id)arg1 subscription:(id)arg2 ;
-(NSData *)profileId;
-(NSNumber *)subscriptionStatusOverride;
-(int)planStatus;
-(BOOL)autoRenew;
-(double)billingStartDate;
-(double)billingEndDate;
-(int)planType;
-(int)accountStatus;
-(NSString *)accountURL;
-(BOOL)isDisableNotAllowed;
-(BOOL)isDeleteNotAllowed;
-(BOOL)requiresUserConsent;
-(NSArray *)dataUsage;
-(void)setSubscriptionStatusOverride:(NSNumber *)arg1 ;
-(id)statusAsString:(id)arg1 ;
-(long long)planDescriptionCompare:(id)arg1 ;
-(BOOL)isHomePlan;
-(void)setIsHomePlan:(BOOL)arg1 ;
-(CTCellularPlanProfile *)profile;
-(void)setProfile:(CTCellularPlanProfile *)arg1 ;
-(CTCellularPlanSubscription *)subscription;
-(void)setSubscription:(CTCellularPlanSubscription *)arg1 ;
-(void)setRequiresUserConsent:(BOOL)arg1 ;
@end

