/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)_desiredClass;
+(BOOL)canAddPaymentPass;
-(id)init;
-(id<PKAddPaymentPassControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPaymentPassControllerDelegate>)arg1 ;
-(void)setConfiguration:(PKAddPaymentPassRequestConfiguration *)arg1 ;
-(PKAddPaymentPassRequestConfiguration *)configuration;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2 ;
@end

