/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDCharacterRun.h>

@class WDCharacterRun, WDRubyProperties;

@interface WDRubyRun : WDCharacterRun {

	WDCharacterRun* mPhoneticRun;
	WDRubyProperties* mRubyProperties;

}
-(id)description;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(id)rubyProperties;
-(id)phoneticRun;
-(id)phoneticRunString;
-(void)setPhoneticRunString:(id)arg1 ;
-(void)appendPhoneticRunString:(id)arg1 ;
-(id)rubyBase;
@end

