/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSNumber, NSDate;

@interface MCCertificatePayload : MCPayload {

	NSData* _certificatePersistentID;
	NSString* _installedOnDeviceID;
	NSNumber* _isIdentity;
	NSNumber* _isRoot;
	NSNumber* _expiryInterval;
	NSString* _certSubject;
	NSString* _certIssuer;

}

@property (nonatomic,copy) NSString * installedOnDeviceID;                  //@synthesize installedOnDeviceID=_installedOnDeviceID - In the implementation block
@property (nonatomic,retain) NSData * certificatePersistentID;              //@synthesize certificatePersistentID=_certificatePersistentID - In the implementation block
@property (nonatomic,readonly) BOOL isRoot; 
@property (nonatomic,readonly) BOOL isFullyTrustedRootCert; 
@property (nonatomic,readonly) BOOL isIdentity; 
@property (nonatomic,retain,readonly) NSDate * expiry; 
@property (nonatomic,readonly) BOOL isSigned; 
-(id)description;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(SecCertificateRef)copyCertificate;
-(NSData *)certificatePersistentID;
-(NSDate *)expiry;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(BOOL)isIdentity;
-(BOOL)isRoot;
-(SecIdentityRef)copyIdentityFromKeychain;
-(id)certificateSubject;
-(id)issuer;
-(NSString *)installedOnDeviceID;
-(BOOL)isSigned;
-(BOOL)isFullyTrustedRootCert;
-(void)setCertificatePersistentID:(NSData *)arg1 ;
-(void)setInstalledOnDeviceID:(NSString *)arg1 ;
@end

