/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPassLibraryDataProvider.h>

@class PKPassLibrary, NSString;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {

	PKPassLibrary* _library;

}

@property (nonatomic,readonly) BOOL canAddPaymentPass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)paymentPasses;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1 ;
-(id)peerPaymentPassUniqueID;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(BOOL)canAddPaymentPass;
-(void)removePass:(id)arg1 ;
-(id)initWithPassLibrary:(id)arg1 ;
-(id)passWithUniqueID:(id)arg1 ;
@end

