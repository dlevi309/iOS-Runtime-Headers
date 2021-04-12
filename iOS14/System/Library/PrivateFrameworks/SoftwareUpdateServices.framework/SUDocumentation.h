/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSNumber, NSMutableDictionary;

@interface SUDocumentation : NSObject <NSSecureCoding, NSCopying> {

	NSURL* _baseDocumentationURL;
	NSString* _releaseNotesSummaryFileName;
	NSString* _releaseNotesFileName;
	NSString* _licenseAgreementFileName;
	NSString* _primaryLanguage;
	NSNumber* _slaVersion;
	NSString* _humanReadableUpdateName;
	NSURL* _releaseNotesSummaryURL;
	NSURL* _releaseNotesURL;
	NSURL* _licenseAgreementURL;
	NSMutableDictionary* _cachedData;

}

@property (nonatomic,retain) NSURL * baseDocumentationURL;                        //@synthesize baseDocumentationURL=_baseDocumentationURL - In the implementation block
@property (nonatomic,retain) NSString * releaseNotesSummaryFileName;              //@synthesize releaseNotesSummaryFileName=_releaseNotesSummaryFileName - In the implementation block
@property (nonatomic,retain) NSString * licenseAgreementFileName;                 //@synthesize licenseAgreementFileName=_licenseAgreementFileName - In the implementation block
@property (nonatomic,retain) NSString * releaseNotesFileName;                     //@synthesize releaseNotesFileName=_releaseNotesFileName - In the implementation block
@property (nonatomic,retain) NSString * primaryLanguage;                          //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (nonatomic,retain) NSNumber * slaVersion;                               //@synthesize slaVersion=_slaVersion - In the implementation block
@property (nonatomic,retain) NSString * humanReadableUpdateName;                  //@synthesize humanReadableUpdateName=_humanReadableUpdateName - In the implementation block
@property (nonatomic,retain) NSURL * releaseNotesSummaryURL;                      //@synthesize releaseNotesSummaryURL=_releaseNotesSummaryURL - In the implementation block
@property (nonatomic,retain) NSURL * releaseNotesURL;                             //@synthesize releaseNotesURL=_releaseNotesURL - In the implementation block
@property (nonatomic,retain) NSURL * licenseAgreementURL;                         //@synthesize licenseAgreementURL=_licenseAgreementURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)primaryLanguage;
-(id)description;
-(id)releaseNotes;
-(id)initWithCoder:(id)arg1 ;
-(id)releaseNotesSummary;
-(NSNumber *)slaVersion;
-(id)licenseAgreement;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setHumanReadableUpdateName:(NSString *)arg1 ;
-(NSString *)humanReadableUpdateName;
-(NSString *)releaseNotesSummaryFileName;
-(NSString *)releaseNotesFileName;
-(NSString *)licenseAgreementFileName;
-(void)setSlaVersion:(NSNumber *)arg1 ;
-(void)setReleaseNotesSummaryFileName:(NSString *)arg1 ;
-(void)setReleaseNotesFileName:(NSString *)arg1 ;
-(void)setLicenseAgreementFileName:(NSString *)arg1 ;
-(void)setBaseDocumentationURL:(NSURL *)arg1 ;
-(void)_resetIfNecessary;
-(id)_cachedDocumentationDataForURL:(id)arg1 ;
-(NSURL *)releaseNotesSummaryURL;
-(NSURL *)releaseNotesURL;
-(NSURL *)licenseAgreementURL;
-(id)_getSUImage:(id)arg1 ;
-(id)pngImageDataFromBundle:(CFBundleRef)arg1 fileName:(id)arg2 ;
-(void)setLicenseAgreementURL:(NSURL *)arg1 ;
-(void)setReleaseNotesSummaryURL:(NSURL *)arg1 ;
-(void)setReleaseNotesURL:(NSURL *)arg1 ;
-(id)_localizedResourceURLForDocumentationAsset:(id)arg1 resource:(id)arg2 ;
-(id)localizedDocumentationStringFromBundle:(CFBundleRef)arg1 key:(id)arg2 ;
-(void)_clearTransientDocumentationData;
-(id)localizedStringFromBundle:(CFBundleRef)arg1 key:(id)arg2 ;
-(id)localizedURLFromBundle:(CFBundleRef)arg1 resource:(id)arg2 ;
-(id)initWithDocumentationURL:(id)arg1 ;
-(BOOL)hasAnyDocumentation;
-(id)getIconImage;
-(id)getFullWidthImage;
-(NSURL *)baseDocumentationURL;
@end

