/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
*/


#import <AppStoreFoundation/AppStoreFoundation-Structs.h>
@class NSMutableArray, NSString, NSDate, NSNumber, NSArray, NSData;

@interface ASFReceipt : NSObject {

	BOOL _verbose;
	NSMutableArray* _mutableIAPs;
	NSString* _path;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _cancellationReason;
	NSDate* _creationDate;
	NSString* _developerID;
	NSString* _downloadID;
	NSString* _frAppVersion;
	NSNumber* _frToolVersion;
	NSDate* _expirationDate;
	NSString* _hwtype;
	NSString* _installerVersionID;
	NSNumber* _itemID;
	NSArray* _iaps;
	NSString* _opaqueDSIDString;
	NSString* _organizationDisplayName;
	NSString* _parentalControls;
	NSDate* _purchaseDate;
	NSString* _receiptType;
	NSDate* _renewalDate;

}

@property (readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) NSString * bundleVersion;                        //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (readonly) NSString * cancellationReason;                   //@synthesize cancellationReason=_cancellationReason - In the implementation block
@property (readonly) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) NSString * developerID;                          //@synthesize developerID=_developerID - In the implementation block
@property (readonly) NSString * downloadID;                           //@synthesize downloadID=_downloadID - In the implementation block
@property (readonly) NSString * frAppVersion;                         //@synthesize frAppVersion=_frAppVersion - In the implementation block
@property (readonly) NSNumber * frToolVersion;                        //@synthesize frToolVersion=_frToolVersion - In the implementation block
@property (readonly) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) NSString * hwtype;                               //@synthesize hwtype=_hwtype - In the implementation block
@property (readonly) NSString * installerVersionID;                   //@synthesize installerVersionID=_installerVersionID - In the implementation block
@property (readonly) BOOL isDSIDless; 
@property (readonly) BOOL isVPPLicensed; 
@property (readonly) BOOL isRevoked; 
@property (readonly) NSNumber * itemID;                               //@synthesize itemID=_itemID - In the implementation block
@property (readonly) NSArray * iaps;                                  //@synthesize iaps=_iaps - In the implementation block
@property (readonly) NSString * opaqueDSIDString;                     //@synthesize opaqueDSIDString=_opaqueDSIDString - In the implementation block
@property (readonly) NSString * organizationDisplayName;              //@synthesize organizationDisplayName=_organizationDisplayName - In the implementation block
@property (readonly) NSString * parentalControls;                     //@synthesize parentalControls=_parentalControls - In the implementation block
@property (readonly) NSDate * purchaseDate;                           //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (readonly) NSString * receiptType;                          //@synthesize receiptType=_receiptType - In the implementation block
@property (readonly) NSDate * renewalDate;                            //@synthesize renewalDate=_renewalDate - In the implementation block
@property (readonly) NSString * path;                                 //@synthesize path=_path - In the implementation block
@property (readonly) NSData * receiptData; 
@property (readonly) NSString * receiptDataString; 
+(id)receiptWithContentsOfFile:(id)arg1 ;
+(id)receiptFromBundleAtURL:(id)arg1 ;
+(id)_receiptURLForBundleURL:(id)arg1 ;
+(id)receiptFromBundleAtPath:(id)arg1 ;
+(id)receiptWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(NSString *)path;
-(NSDate *)expirationDate;
-(BOOL)isRevoked;
-(NSString *)bundleID;
-(NSString *)bundleVersion;
-(NSNumber *)itemID;
-(NSDate *)creationDate;
-(NSString *)cancellationReason;
-(NSDate *)renewalDate;
-(NSString *)downloadID;
-(NSDate *)purchaseDate;
-(BOOL)isVPPLicensed;
-(BOOL)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout SecCmsMessageStr*)arg2 ;
-(BOOL)_parseReceiptFromMessage:(SecCmsMessageStrRef)arg1 ;
-(SecCmsSignedDataStrRef)_extractSignedDataFromMessage:(SecCmsMessageStrRef)arg1 ;
-(long long)_verifySignatureForSignedData:(SecCmsSignedDataStrRef)arg1 onDate:(id)arg2 ;
-(BOOL)_checkIfCertificate:(SecCertificateRef)arg1 containsOID:(CFStringRef)arg2 ;
-(void)_parseTokens:(id)arg1 ;
-(CFArrayRef)_copyCertificatesFromSignedData:(SecCmsSignedDataStrRef)arg1 ;
-(BOOL)_checkArray:(CFArrayRef)arg1 containsCertificateWithOID:(CFStringRef)arg2 ;
-(BOOL)_setPoliciesForTrust:(SecTrustRef)arg1 ;
-(BOOL)_anchorTrust:(SecTrustRef)arg1 toRootCertificateIn:(CFArrayRef)arg2 ;
-(NSString *)organizationDisplayName;
-(void)_logError:(id)arg1 ;
-(NSArray *)iaps;
-(NSString *)parentalControls;
-(id)_parseIAPsFromDataRef:(CFDataRef)arg1 ;
-(void)_log:(id)arg1 ;
-(id)_parseIAPTokens:(id)arg1 ;
-(void)_log:(id)arg1 arg:(id)arg2 ;
-(BOOL)_decodeIAPReceiptData:(id)arg1 ;
-(BOOL)isDSIDless;
-(NSData *)receiptData;
-(NSString *)receiptDataString;
-(NSString *)developerID;
-(NSString *)frAppVersion;
-(NSNumber *)frToolVersion;
-(NSString *)hwtype;
-(NSString *)installerVersionID;
-(NSString *)opaqueDSIDString;
-(NSString *)receiptType;
@end

