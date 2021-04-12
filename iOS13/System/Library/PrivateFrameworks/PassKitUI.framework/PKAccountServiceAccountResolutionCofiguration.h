/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PKInstallmentPlan *)earlyInstallmentPlan;
-(id<PKBusinessChatContext>)businessChatContext;
-(void)setEarlyInstallmentPlan:(PKInstallmentPlan *)arg1 ;
-(void)setBusinessChatContext:(id<PKBusinessChatContext>)arg1 ;
@end

