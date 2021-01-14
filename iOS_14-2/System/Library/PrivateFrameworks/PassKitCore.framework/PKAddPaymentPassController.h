/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKAddPaymentPassControllerDelegate;
@class PKAddPaymentPassRequestConfiguration;

@interface PKAddPaymentPassController : NSObject {

	id<PKAddPaymentPassControllerDelegate> _delegate;
	PKAddPaymentPassRequestConfiguration* _configuration;

}

@property (nonatomic,retain) PKAddPaymentPassRequestConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<PKAddPaymentPassControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)canAddPaymentPass;
+(Class)_desiredClass;
-(id)init;
-(id<PKAddPaymentPassControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPaymentPassControllerDelegate>)arg1 ;
-(PKAddPaymentPassRequestConfiguration *)configuration;
-(id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)setConfiguration:(PKAddPaymentPassRequestConfiguration *)arg1 ;
@end

