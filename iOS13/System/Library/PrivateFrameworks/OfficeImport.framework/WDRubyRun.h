/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDCharacterRun.h>

@class WDCharacterRun, WDRubyProperties;

@interface WDRubyRun : WDCharacterRun {

	WDCharacterRun* mPhoneticRun;
	WDRubyProperties* mRubyProperties;

}
-(id)description;
-(id)initWithParagraph:(id)arg1 ;
-(int)runType;
-(id)rubyProperties;
-(id)phoneticRun;
-(id)phoneticRunString;
-(void)setPhoneticRunString:(id)arg1 ;
-(void)appendPhoneticRunString:(id)arg1 ;
-(id)rubyBase;
@end

