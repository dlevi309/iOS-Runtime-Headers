/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(id)currentPolicyKey;
-(BOOL)updatingPolicy;
-(void)requestPolicyUpdate;
-(void)setUpdatingPolicy:(BOOL)arg1 ;
@end

