/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

