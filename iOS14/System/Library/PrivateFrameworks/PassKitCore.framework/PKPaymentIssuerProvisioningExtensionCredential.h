/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSExtension, PKIssuerProvisioningExtensionPaymentPassEntry, NSArray;

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential {

	NSExtension* _extension;
	PKIssuerProvisioningExtensionPaymentPassEntry* _entry;

}

@property (nonatomic,readonly) NSExtension * extension;                                            //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) PKIssuerProvisioningExtensionPaymentPassEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata; 
-(id)initWithExtension:(id)arg1 entry:(id)arg2 ;
-(PKIssuerProvisioningExtensionPaymentPassEntry *)entry;
-(NSExtension *)extension;
-(NSArray *)metadata;
@end

