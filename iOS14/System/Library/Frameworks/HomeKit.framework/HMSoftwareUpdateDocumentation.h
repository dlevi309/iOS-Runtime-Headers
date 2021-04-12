/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMHTMLDocument, HMPlainTextDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding> {

	HMHTMLDocument* _releaseNotesSummary;
	HMHTMLDocument* _releaseNotes;
	HMPlainTextDocument* _textReleaseNotes;
	HMHTMLDocument* _licenseAgreement;
	NSNumber* _licenseAgreementVersion;

}

@property (copy,readonly) HMHTMLDocument * releaseNotesSummary;                //@synthesize releaseNotesSummary=_releaseNotesSummary - In the implementation block
@property (copy,readonly) HMHTMLDocument * releaseNotes;                       //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (copy,readonly) HMPlainTextDocument * textReleaseNotes;              //@synthesize textReleaseNotes=_textReleaseNotes - In the implementation block
@property (copy,readonly) HMHTMLDocument * licenseAgreement;                   //@synthesize licenseAgreement=_licenseAgreement - In the implementation block
@property (copy,readonly) NSNumber * licenseAgreementVersion;                  //@synthesize licenseAgreementVersion=_licenseAgreementVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(HMHTMLDocument *)releaseNotes;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 textReleaseNotes:(id)arg3 licenseAgreement:(id)arg4 licenseAgreementVersion:(id)arg5 ;
-(HMHTMLDocument *)releaseNotesSummary;
-(HMPlainTextDocument *)textReleaseNotes;
-(NSNumber *)licenseAgreementVersion;
-(HMHTMLDocument *)licenseAgreement;
@end

