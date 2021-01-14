/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <InAppMessages/IAMMessageGroup.h>

@protocol AMSBagProtocol;
@class NSDictionary;

@interface AMSUIMessageGroup : IAMMessageGroup {

	NSDictionary* _clientData;
	NSDictionary* _clientMetricsOverlay;
	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                           //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSDictionary * clientData;                        //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,retain) NSDictionary * clientMetricsOverlay;              //@synthesize clientMetricsOverlay=_clientMetricsOverlay - In the implementation block
-(id)init;
-(NSDictionary *)clientMetricsOverlay;
-(void)viewControllerForModalMessagePresentation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(void)setClientMetricsOverlay:(NSDictionary *)arg1 ;
-(id)_viewControllerForType:(long long)arg1 account:(id)arg2 URL:(id)arg3 sidepack:(id)arg4 metrics:(id)arg5 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)setClientData:(NSDictionary *)arg1 ;
-(NSDictionary *)clientData;
@end

