/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/


@class NFHardwareSecureElementInfo, NSString, NSNumber;

@interface NFSecureElement : NSObject {

	NFHardwareSecureElementInfo* _info;
	BOOL _isDirty;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * rsaCertificate; 
@property (readonly) NSString * eccCertificate; 
@property (readonly) NSString * eckaCertificate; 
@property (readonly) BOOL isProductionSigned; 
@property (readonly) BOOL isInRestrictedMode; 
@property (readonly) unsigned long long OSVersion; 
@property (readonly) unsigned long long fullOSVersion; 
@property (readonly) NSNumber * sequenceCounter; 
@property (readonly) unsigned supportedTechnologies; 
+(id)embeddedSecureElement;
+(id)icefallSecureElement;
+(unsigned)supportedTechnologies;
-(void)dealloc;
-(id)identifier;
-(id)info;
-(unsigned)hwType;
-(NSNumber *)sequenceCounter;
-(BOOL)isSeshatAvailabledInRestrictedMode;
-(NSString *)serialNumber;
-(unsigned long long)OSVersion;
-(id)_initWithInfo:(id)arg1 ;
-(void)_markDirty;
-(BOOL)isProductionSigned;
-(unsigned)supportedTechnologies;
-(BOOL)isInRestrictedMode;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(void)_updateSecureElementInfo:(id)arg1 ;
-(void)_setIsInRestrictedPerformanceMode:(BOOL)arg1 ;
-(unsigned long long)fullOSVersion;
-(NSString *)rsaCertificate;
-(NSString *)eckaCertificate;
-(void)_updateIfDirty;
-(NSString *)eccCertificate;
-(id)manifestQueryBlob;
@end

