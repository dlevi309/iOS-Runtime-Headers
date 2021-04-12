/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@class CKContainer, NSString;

@interface MSPCloudKitAccountAccess : NSObject {

	CKContainer* _container;
	CKContainer* _containerWithZoneWidePCS;
	CKContainer* _secureContainer;
	CKContainer* _secureContainerWithZoneWidePCS;
	BOOL _useSecureContainer;
	BOOL _disableDeviceToDeviceEncryption;
	NSString* _accountIdentifier;

}

@property (assign,nonatomic) BOOL useSecureContainer;                           //@synthesize useSecureContainer=_useSecureContainer - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL disableDeviceToDeviceEncryption;              //@synthesize disableDeviceToDeviceEncryption=_disableDeviceToDeviceEncryption - In the implementation block
+(BOOL)hasCloudKitEntitlement;
+(long long)defaultEnvironment;
+(long long)containerEnvironmentForAccessEnvironment:(long long)arg1 ;
+(BOOL)useLongLivedOperations;
+(void)fetchDeviceToDeviceEncryptionStatus:(/*^block*/id)arg1 ;
+(id)sharedAccess;
-(void)setUseSecureContainer:(BOOL)arg1 ;
-(BOOL)useSecureContainer;
-(NSString *)accountIdentifier;
-(id)containerForAccount;
-(id)description;
-(id)initWithEnvironment:(long long)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)disableDeviceToDeviceEncryption;
-(id)initWithEnvironment:(long long)arg1 createContainers:(BOOL)arg2 ;
-(void)setDisableDeviceToDeviceEncryption:(BOOL)arg1 ;
-(void)fetchAccountIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(id)containerWithZoneWidePCS:(BOOL)arg1 ;
-(void)fetchAccountStatus:(/*^block*/id)arg1 ;
-(void)fetchDeviceToDeviceEncryptionStatus:(/*^block*/id)arg1 ;
@end

