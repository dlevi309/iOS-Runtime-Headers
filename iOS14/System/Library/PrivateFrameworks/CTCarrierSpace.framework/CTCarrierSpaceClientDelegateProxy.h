/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <CTCarrierSpace/CTCarrierSpaceClientDelegateProxyInterface.h>

@protocol CTCarrierSpaceClientDelegate;
@class NSString;

@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface> {

	id<CTCarrierSpaceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CTCarrierSpaceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CTCarrierSpaceClientDelegate>)delegate;
-(void)purchasedPlan:(id)arg1 didChangeStatus:(long long)arg2 context:(id)arg3 ;
-(void)appsDidChange;
-(void)setDelegate:(id<CTCarrierSpaceClientDelegate>)arg1 ;
-(void)remoteObjectRespondsToSelector:(SEL)arg1 handler:(/*^block*/id)arg2 ;
-(void)dataPlanMetricsDidChange;
-(void)usageDidChange;
-(void)plansDidChange;
-(void)capabilitiesDidChange:(id)arg1 ;
-(void)userConsentFlowInfoDidChange;
@end

