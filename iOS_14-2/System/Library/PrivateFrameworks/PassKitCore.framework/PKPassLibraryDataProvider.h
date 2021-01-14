/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPassLibraryDataProvider <NSObject>
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
@required
-(id)paymentPasses;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1;
-(id)peerPaymentPassUniqueID;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
-(BOOL)canAddPaymentPass;
-(void)removePass:(id)arg1;
-(id)passWithUniqueID:(id)arg1;

@end

