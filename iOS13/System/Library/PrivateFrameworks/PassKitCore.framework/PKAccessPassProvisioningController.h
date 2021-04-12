/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKAccessPassProvisioningCoordinator;

@interface PKAccessPassProvisioningController : NSObject {

	PKAccessPassProvisioningCoordinator* _coordinator;

}

@property (assign,nonatomic,__weak) id<PKAccessPassProvisioningControllerDelegate> delegate; 
+(BOOL)canAddAccessPassWithConfiguration:(id)arg1 ;
-(id<PKAccessPassProvisioningControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAccessPassProvisioningControllerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
@end

