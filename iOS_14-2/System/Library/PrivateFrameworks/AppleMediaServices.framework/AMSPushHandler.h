/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSBagProtocol, AMSPushHandlerContract;
@class AMSPushConfiguration;

@interface AMSPushHandler : NSObject {

	id<AMSBagProtocol> _bag;
	AMSPushConfiguration* _configuration;
	id<AMSPushHandlerContract> _bagContract;

}

@property (nonatomic,readonly) id<AMSPushHandlerContract> bagContract;                //@synthesize bagContract=_bagContract - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                                //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic,__weak) id<AMSPushHandlerDelegate> delegate; 
@property (nonatomic,readonly) AMSPushConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
-(id<AMSPushHandlerDelegate>)delegate;
-(id)_enabledParsables;
-(id<AMSPushHandlerContract>)bagContract;
-(void)handleNotification:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(BOOL)shouldHandleNotification:(id)arg1 ;
-(void)setDelegate:(id<AMSPushHandlerDelegate>)arg1 ;
-(AMSPushConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 bag:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 bagContract:(id)arg2 ;
@end

