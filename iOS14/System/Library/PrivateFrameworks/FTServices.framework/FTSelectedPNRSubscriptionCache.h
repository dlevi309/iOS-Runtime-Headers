/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@class CTXPCServiceSubscriptionInfo, CTXPCContexts, CTXPCServiceSubscriptionContext, NSString;

@interface FTSelectedPNRSubscriptionCache : NSObject {

	CTXPCServiceSubscriptionInfo* _subscriptionInfo;
	CTXPCContexts* _activeSubscriptionInfo;
	CTXPCServiceSubscriptionContext* _selectedContext;
	NSString* _phoneNumber;
	long long _dualSIMCapability;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionInfo * subscriptionInfo;                //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (nonatomic,retain) CTXPCContexts * activeSubscriptionInfo;                         //@synthesize activeSubscriptionInfo=_activeSubscriptionInfo - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * selectedContext;              //@synthesize selectedContext=_selectedContext - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                         //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) long long dualSIMCapability;                                    //@synthesize dualSIMCapability=_dualSIMCapability - In the implementation block
-(void)setSelectedContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(NSString *)phoneNumber;
-(id)debugDescription;
-(CTXPCContexts *)activeSubscriptionInfo;
-(long long)dualSIMCapability;
-(void)setDualSIMCapability:(long long)arg1 ;
-(void)setSubscriptionInfo:(CTXPCServiceSubscriptionInfo *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(CTXPCServiceSubscriptionInfo *)subscriptionInfo;
-(void)setActiveSubscriptionInfo:(CTXPCContexts *)arg1 ;
-(CTXPCServiceSubscriptionContext *)selectedContext;
@end

