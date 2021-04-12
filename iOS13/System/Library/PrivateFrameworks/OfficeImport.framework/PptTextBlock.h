/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableString, NSMutableArray;

@interface PptTextBlock : NSObject {

	PptTextHeaderAtom* mTextHeader;
	NSMutableString* mText;
	PptTextBlockStylingAtom* mStyleText;
	PptTextBlockSpecialInfoAtom* mSpecialInfo;
	NSMutableArray* mMetaCharacterFields;
	NSMutableArray* mBookmarks;
	NSMutableArray* mHyperlinks;
	PptTextRulerAtom* mTextRuler;

}
-(id)init;
-(id)text;
-(id)bookmarks;
-(unsigned)textIndex;
-(id)hyperlinks;
-(int)textType;
-(void)readString:(id)arg1 ;
-(void)readStyles:(id)arg1 ;
-(void)readSpecialInfo:(id)arg1 ;
-(void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1 ;
-(void)readTextBlock:(id)arg1 ;
-(void)writeTextBlock:(id)arg1 ;
-(id)metaCharacterFields;
-(PptTextRulerAtom*)textRuler;
-(int)paragraphRunCount;
-(PptParaRun*)paragraphRunAtIndex:(int)arg1 ;
-(int)characterRunCount;
-(PptCharRun*)characterRunAtIndex:(int)arg1 ;
-(int)specialInfoRunCount;
-(PptSpecialInfoRun*)specialInfoRunAtIndex:(int)arg1 ;
@end

