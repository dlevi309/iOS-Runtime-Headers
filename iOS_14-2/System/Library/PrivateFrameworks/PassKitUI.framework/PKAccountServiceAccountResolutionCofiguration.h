/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKBusinessChatContext;
@class PKInstallmentPlan;

@interface PKAccountServiceAccountResolutionCofiguration : NSObject {

	PKInstallmentPlan* _earlyInstallmentPlan;
	id<PKBusinessChatContext> _businessChatContext;

}

@property (nonatomic,retain) PKInstallmentPlan * earlyInstallmentPlan;                   //@synthesize earlyInstallmentPlan=_earlyInstallmentPlan - In the implementation block
@property (nonatomic,retain) id<PKBusinessChatContext> businessChatContext;              //@synthesize businessChatContext=_businessChatContext - In the implementation block
-(id)description;
-(id<PKBusinessChatContext>)businessChatContext;
-(void)setEarlyInstallmentPlan:(PKInstallmentPlan *)arg1 ;
-(void)setBusinessChatContext:(id<PKBusinessChatContext>)arg1 ;
-(PKInstallmentPlan *)earlyInstallmentPlan;
@end

