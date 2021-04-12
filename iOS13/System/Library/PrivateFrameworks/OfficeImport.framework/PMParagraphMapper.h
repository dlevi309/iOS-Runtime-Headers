/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class OADParagraph;

@interface PMParagraphMapper : CMMapper {

	OADParagraph* mParagraph;

}
-(id)initWithOadParagraph:(id)arg1 parent:(id)arg2 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(BOOL)arg3 ;
-(id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(BOOL)arg2 ;
-(void)addEndCharacterStyleToStyle:(id)arg1 ;
-(int)firstTextRunFontSize;
-(id)fontScheme;
@end

