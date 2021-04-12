/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)baseStyle;
-(BOOL)isDeleted;
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

