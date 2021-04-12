/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSTelephonyController.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>

@class NSArray, CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSString;

@interface TPSRegistrationTelephonyController : TPSTelephonyController <CoreTelephonyClientRegistrationDelegate> {

	NSArray* _networks;
	CTNetworkSelectionInfo* _networkSelectionInfo;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,copy) NSArray * networks;                                                     //@synthesize networks=_networks - In the implementation block
@property (nonatomic,retain) CTNetworkSelectionInfo * networkSelectionInfo;                        //@synthesize networkSelectionInfo=_networkSelectionInfo - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)networkListAvailable:(id)arg1 list:(id)arg2 ;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3 ;
-(NSArray *)networks;
-(void)setNetworks:(NSArray *)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(void)fetchNetworkList;
-(void)selectNetwork:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)performDelegateSelector:(SEL)arg1 ;
-(id)copyNetworkSelectionInfo;
-(void)automaticallySelectNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)selectNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNetworkListWithCompletion:(/*^block*/id)arg1 ;
-(void)setNetworkSelectionInfo:(CTNetworkSelectionInfo *)arg1 ;
-(CTNetworkSelectionInfo *)networkSelectionInfo;
-(void)networksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)automaticallySelectNetwork;
@end

