/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class WDCharacterRun, WMStyle, NSString;

@interface WMCharacterRunMapper : CMMapper {

	WDCharacterRun* wdCharacterRun;
	WMStyle* mStyle;
	float mFontSizeBumpFactor;
	NSString* mText;
	BOOL mIsDeleted;

}
+(void)addNonCollapsableSpanAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithText:(id)arg1 ;
-(BOOL)isDeleted;
-(id)baseStyle;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(int)defaultTabWidth;
-(id)copyCharacterStyle;
-(unsigned)countAndStripLeadingTabs;
-(void)mapSubstring:(id)arg1 at:(id)arg2 ;
-(void)mapTabs:(unsigned)arg1 at:(id)arg2 afterText:(id)arg3 ;
-(id)initWithWDCharacterRun:(id)arg1 parent:(id)arg2 ;
-(void)map1At:(id)arg1 withState:(id)arg2 ;
-(id)boldStyle;
@end

