/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSNumber, NSURL;

@interface SUCoreDocumentation : NSObject <NSSecureCoding> {

	NSData* _releaseNotesSummary;
	NSData* _releaseNotes;
	NSData* _licenseAgreement;
	NSString* _humanReadableUpdateName;
	NSString* _productVersion;
	NSNumber* _slaVersion;
	NSURL* _localBundleURL;
	NSURL* _serverAssetURL;
	NSData* _serverAssetMeasurement;
	NSString* _serverAssetAlgorithm;
	long long _serverAssetChunkSize;
	NSString* _language;
	NSString* _releaseNotesSummaryFileName;
	NSString* _releaseNotesFileName;
	NSString* _licenseAgreementFileName;

}

@property (nonatomic,retain) NSData * releaseNotesSummary;                        //@synthesize releaseNotesSummary=_releaseNotesSummary - In the implementation block
@property (nonatomic,retain) NSData * releaseNotes;                               //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,retain) NSData * licenseAgreement;                           //@synthesize licenseAgreement=_licenseAgreement - In the implementation block
@property (nonatomic,retain) NSString * humanReadableUpdateName;                  //@synthesize humanReadableUpdateName=_humanReadableUpdateName - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                           //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSNumber * slaVersion;                               //@synthesize slaVersion=_slaVersion - In the implementation block
@property (nonatomic,retain) NSURL * localBundleURL;                              //@synthesize localBundleURL=_localBundleURL - In the implementation block
@property (nonatomic,retain) NSURL * serverAssetURL;                              //@synthesize serverAssetURL=_serverAssetURL - In the implementation block
@property (nonatomic,retain) NSData * serverAssetMeasurement;                     //@synthesize serverAssetMeasurement=_serverAssetMeasurement - In the implementation block
@property (nonatomic,retain) NSString * serverAssetAlgorithm;                     //@synthesize serverAssetAlgorithm=_serverAssetAlgorithm - In the implementation block
@property (assign,nonatomic) long long serverAssetChunkSize;                      //@synthesize serverAssetChunkSize=_serverAssetChunkSize - In the implementation block
@property (nonatomic,retain) NSString * language;                                 //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * releaseNotesSummaryFileName;              //@synthesize releaseNotesSummaryFileName=_releaseNotesSummaryFileName - In the implementation block
@property (nonatomic,retain) NSString * releaseNotesFileName;                     //@synthesize releaseNotesFileName=_releaseNotesFileName - In the implementation block
@property (nonatomic,retain) NSString * licenseAgreementFileName;                 //@synthesize licenseAgreementFileName=_licenseAgreementFileName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)productVersion;
-(void)setLanguage:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(id)description;
-(id)summary;
-(void)setReleaseNotes:(NSData *)arg1 ;
-(NSData *)releaseNotes;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)releaseNotesSummary;
-(void)setReleaseNotesSummary:(NSData *)arg1 ;
-(NSNumber *)slaVersion;
-(NSData *)licenseAgreement;
-(NSString *)language;
-(void)setHumanReadableUpdateName:(NSString *)arg1 ;
-(void)setLicenseAgreement:(NSData *)arg1 ;
-(id)_resourceFromBundle:(CFBundleRef)arg1 forKey:(id)arg2 ;
-(NSString *)humanReadableUpdateName;
-(id)extendDocumentationProperties;
-(id)_extendDocumentationPropertiesWithSimulateEvent:(id)arg1 ;
-(id)_extendDocumentationProperties;
-(void)setLocalBundleURL:(NSURL *)arg1 ;
-(NSURL *)localBundleURL;
-(NSString *)releaseNotesSummaryFileName;
-(NSString *)releaseNotesFileName;
-(NSString *)licenseAgreementFileName;
-(NSURL *)serverAssetURL;
-(NSData *)serverAssetMeasurement;
-(NSString *)serverAssetAlgorithm;
-(long long)serverAssetChunkSize;
-(id)initWithDocumentationAsset:(id)arg1 ;
-(void)setSlaVersion:(NSNumber *)arg1 ;
-(void)setServerAssetURL:(NSURL *)arg1 ;
-(void)setServerAssetMeasurement:(NSData *)arg1 ;
-(void)setServerAssetAlgorithm:(NSString *)arg1 ;
-(void)setServerAssetChunkSize:(long long)arg1 ;
-(void)setReleaseNotesSummaryFileName:(NSString *)arg1 ;
-(void)setReleaseNotesFileName:(NSString *)arg1 ;
-(void)setLicenseAgreementFileName:(NSString *)arg1 ;
@end

