/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMHTMLDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding> {

	HMHTMLDocument* _releaseNotesSummary;
	HMHTMLDocument* _releaseNotes;
	HMHTMLDocument* _licenseAgreement;
	NSNumber* _licenseAgreementVersion;

}

@property (copy,readonly) HMHTMLDocument * releaseNotesSummary;              //@synthesize releaseNotesSummary=_releaseNotesSummary - In the implementation block
@property (copy,readonly) HMHTMLDocument * releaseNotes;                     //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (copy,readonly) HMHTMLDocument * licenseAgreement;                 //@synthesize licenseAgreement=_licenseAgreement - In the implementation block
@property (copy,readonly) NSNumber * licenseAgreementVersion;                //@synthesize licenseAgreementVersion=_licenseAgreementVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMHTMLDocument *)releaseNotes;
-(HMHTMLDocument *)licenseAgreement;
-(id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 licenseAgreement:(id)arg3 licenseAgreementVersion:(id)arg4 ;
-(HMHTMLDocument *)releaseNotesSummary;
-(NSNumber *)licenseAgreementVersion;
@end

