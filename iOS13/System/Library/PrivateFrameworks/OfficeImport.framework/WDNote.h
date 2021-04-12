/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRun.h>

@class WDText, WDCharacterRun;

@interface WDNote : WDRun {

	WDText* mText;
	WDCharacterRun* mReference;
	BOOL mAutomaticNumbering;

}
-(id)description;
-(id)text;
-(id)reference;
-(int)runType;
-(void)setAutomaticNumbering:(BOOL)arg1 ;
-(BOOL)automaticNumbering;
-(id)initWithParagraph:(id)arg1 footnote:(BOOL)arg2 ;
@end

