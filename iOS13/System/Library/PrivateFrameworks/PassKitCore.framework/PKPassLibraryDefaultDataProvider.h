/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPassLibraryDataProvider.h>

@class PKPassLibrary, NSString;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {

	PKPassLibrary* _library;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
-(id)init;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(BOOL)canAddPaymentPass;
-(id)passWithUniqueID:(id)arg1 ;
-(id)initWithPassLibrary:(id)arg1 ;
-(id)peerPaymentPassUniqueID;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1 ;
-(void)removePass:(id)arg1 ;
-(BOOL)canProvisionAccessPassWithConfiguration:(id)arg1 ;
-(id)paymentPasses;
@end

