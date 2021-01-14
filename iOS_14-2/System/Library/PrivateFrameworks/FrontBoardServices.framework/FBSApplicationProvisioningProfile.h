/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class NSString, NSDate;

@interface FBSApplicationProvisioningProfile : NSObject {

	NSString* _allowedApplicationIdentifierEntitlement;
	BOOL _appleInternalProfile;
	BOOL _beta;
	BOOL _freeDeveloperProfile;
	BOOL _provisionsAllDevices;
	BOOL _provisionsThisDevice;
	NSString* _signerIdentity;
	NSDate* _expirationDate;
	NSString* _UUID;

}

@property (nonatomic,copy,readonly) NSString * signerIdentity;                                       //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isAppleInternalProfile,nonatomic,readonly) BOOL appleInternalProfile;              //@synthesize appleInternalProfile=_appleInternalProfile - In the implementation block
@property (getter=isBeta,nonatomic,readonly) BOOL beta;                                              //@synthesize beta=_beta - In the implementation block
@property (getter=isFreeDeveloperProfile,nonatomic,readonly) BOOL freeDeveloperProfile;              //@synthesize freeDeveloperProfile=_freeDeveloperProfile - In the implementation block
@property (nonatomic,readonly) BOOL provisionsAllDevices;                                            //@synthesize provisionsAllDevices=_provisionsAllDevices - In the implementation block
@property (nonatomic,readonly) BOOL provisionsThisDevice;                                            //@synthesize provisionsThisDevice=_provisionsThisDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUID;                                                 //@synthesize UUID=_UUID - In the implementation block
-(BOOL)isBeta;
-(id)succinctDescription;
-(NSString *)signerIdentity;
-(NSString *)UUID;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isAppleInternalProfile;
-(id)initWithSignerIdentity:(id)arg1 profile:(id)arg2 ;
-(BOOL)allowsApplicationIdentifierEntitlement:(id)arg1 ;
-(BOOL)isFreeDeveloperProfile;
-(BOOL)provisionsAllDevices;
-(BOOL)provisionsThisDevice;
-(id)description;
-(NSDate *)expirationDate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

