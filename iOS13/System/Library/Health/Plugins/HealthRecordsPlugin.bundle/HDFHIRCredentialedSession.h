/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDFHIRSession.h>
#import <libobjc.A.dylib/HDFHIRCredentialVendorDelegate.h>

@class HDFHIRCredentialVendor, NSString;

@interface HDFHIRCredentialedSession : HDFHIRSession <HDFHIRCredentialVendorDelegate> {

	HDFHIRCredentialVendor* _credentialVendor;

}

@property (nonatomic,readonly) HDFHIRCredentialVendor * credentialVendor;              //@synthesize credentialVendor=_credentialVendor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDFHIRCredentialVendor *)credentialVendor;
-(void)credentialVendor:(id)arg1 refreshCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSpecification:(id)arg1 credentialVendor:(id)arg2 ;
@end

