/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationServiceProtocol.h>

@protocol PKPaymentAuthorizationHostProtocol;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationDataModel, NSString;

@interface PKPaymentAuthorizationCoreViewController : UIViewController <PKPaymentAuthorizationServiceProtocol> {

	long long _paymentAuthorizationStyle;
	PKPaymentAuthorizationLayout* _paymentAuthorizationLayout;
	PKPaymentAuthorizationStateMachine* _stateMachine;
	PKPaymentAuthorizationDataModel* _dataModel;
	id<PKPaymentAuthorizationHostProtocol> _delegate;

}

@property (nonatomic,readonly) long long paymentAuthorizationStyle;                                    //@synthesize paymentAuthorizationStyle=_paymentAuthorizationStyle - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationLayout * paymentAuthorizationLayout;              //@synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationStateMachine * stateMachine;                      //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationDataModel * dataModel;                            //@synthesize dataModel=_dataModel - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationHostProtocol> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaymentAuthorizationHostProtocol>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationHostProtocol>)arg1 ;
-(PKPaymentAuthorizationStateMachine *)stateMachine;
-(long long)paymentAuthorizationStyle;
-(PKPaymentAuthorizationLayout *)paymentAuthorizationLayout;
-(PKPaymentAuthorizationDataModel *)dataModel;
@end

