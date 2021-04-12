/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData, NSString, NSArray;

@interface SUBDocumentation : NSObject <NSSecureCoding> {

	NSURL* _documentationBundleURL;
	NSData* _releaseNotesSummary;
	NSData* _releaseNotes;
	NSData* _licenseAgreement;
	NSString* _humanReadableUpdateName;
	NSString* _phoneLanguage;

}

@property (nonatomic,retain) NSURL * documentationBundleURL;                          //@synthesize documentationBundleURL=_documentationBundleURL - In the implementation block
@property (nonatomic,retain) NSData * releaseNotesSummary;                            //@synthesize releaseNotesSummary=_releaseNotesSummary - In the implementation block
@property (nonatomic,retain) NSData * releaseNotes;                                   //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,retain) NSData * licenseAgreement;                               //@synthesize licenseAgreement=_licenseAgreement - In the implementation block
@property (nonatomic,retain) NSString * humanReadableUpdateName;                      //@synthesize humanReadableUpdateName=_humanReadableUpdateName - In the implementation block
@property (nonatomic,retain,readonly) NSString * currentPhoneLanguage; 
@property (nonatomic,retain) NSString * phoneLanguage;                                //@synthesize phoneLanguage=_phoneLanguage - In the implementation block
@property (nonatomic,retain,readonly) NSArray * preferredPhoneLanguages; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setReleaseNotes:(NSData *)arg1 ;
-(NSData *)releaseNotes;
-(void)setReleaseNotesSummary:(NSData *)arg1 ;
-(NSData *)licenseAgreement;
-(NSData *)releaseNotesSummary;
-(NSString *)humanReadableUpdateName;
-(void)setHumanReadableUpdateName:(NSString *)arg1 ;
-(NSArray *)preferredPhoneLanguages;
-(void)_loadBundleResources;
-(NSString *)currentPhoneLanguage;
-(void)setPhoneLanguage:(NSString *)arg1 ;
-(NSURL *)documentationBundleURL;
-(void)setLicenseAgreement:(NSData *)arg1 ;
-(id)_resourceFromBundle:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDocumentationBundleURL:(id)arg1 ;
-(void)setDocumentationBundleURL:(NSURL *)arg1 ;
-(NSString *)phoneLanguage;
@end

