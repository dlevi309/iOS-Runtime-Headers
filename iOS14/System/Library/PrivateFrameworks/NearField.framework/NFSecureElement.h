/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) BOOL available; 
+(id)icefallSecureElement;
+(id)embeddedSecureElement;
+(unsigned)supportedTechnologies;
-(NSString *)serialNumber;
-(BOOL)available;
-(id)info;
-(void)_markDirty;
-(BOOL)isProductionSigned;
-(NSString *)rsaCertificate;
-(unsigned)hwType;
-(unsigned long long)fullOSVersion;
-(BOOL)isInRestrictedMode;
-(BOOL)isSeshatAvailabledInRestrictedMode;
-(NSString *)eckaCertificate;
-(NSNumber *)sequenceCounter;
-(unsigned long long)OSVersion;
-(void)_setIsInRestrictedPerformanceMode:(BOOL)arg1 ;
-(void)_updateSecureElementInfo:(id)arg1 ;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(id)_initWithInfo:(id)arg1 ;
-(id)identifier;
-(void)_updateIfDirty;
-(unsigned)supportedTechnologies;
-(id)manifestQueryBlob;
-(NSString *)eccCertificate;
@end

