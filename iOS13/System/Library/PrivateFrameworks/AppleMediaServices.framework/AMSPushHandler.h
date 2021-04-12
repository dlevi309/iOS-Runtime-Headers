/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSBagProtocol, AMSPushHandlerContract;
@class AMSPushConfiguration;

@interface AMSPushHandler : NSObject {

	id<AMSBagProtocol> _bag;
	AMSPushConfiguration* _configuration;
	id<AMSPushHandlerContract> _bagContract;

}

@property (nonatomic,readonly) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) AMSPushConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) id<AMSPushHandlerContract> bagContract;              //@synthesize bagContract=_bagContract - In the implementation block
-(AMSPushConfiguration *)configuration;
-(id<AMSBagProtocol>)bag;
-(id<AMSPushHandlerContract>)bagContract;
-(id)_enabledParsables;
-(id)initWithConfiguration:(id)arg1 bag:(id)arg2 ;
-(void)handleNotification:(id)arg1 ;
-(BOOL)shouldHandleNotification:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 bagContract:(id)arg2 ;
@end

