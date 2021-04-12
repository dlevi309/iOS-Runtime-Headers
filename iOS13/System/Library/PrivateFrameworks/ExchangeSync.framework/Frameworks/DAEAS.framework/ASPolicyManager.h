/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@protocol ASPolicyManagerDelegate;
@interface ASPolicyManager : NSObject {

	BOOL _updatingPolicy;
	id<ASPolicyManagerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL updatingPolicy;                                      //@synthesize updatingPolicy=_updatingPolicy - In the implementation block
@property (assign,nonatomic,__weak) id<ASPolicyManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ASPolicyManagerDelegate>)delegate;
-(void)setDelegate:(id<ASPolicyManagerDelegate>)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)currentPolicyKey;
-(void)requestPolicyUpdate;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(BOOL)updatingPolicy;
-(void)setUpdatingPolicy:(BOOL)arg1 ;
@end

