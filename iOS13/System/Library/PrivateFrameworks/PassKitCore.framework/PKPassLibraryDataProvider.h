/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPassLibraryDataProvider <NSObject>
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
@required
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
-(BOOL)canAddPaymentPass;
-(id)passWithUniqueID:(id)arg1;
-(id)peerPaymentPassUniqueID;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1;
-(void)removePass:(id)arg1;
-(BOOL)canProvisionAccessPassWithConfiguration:(id)arg1;
-(id)paymentPasses;

@end

