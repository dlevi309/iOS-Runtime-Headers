/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)textIndex;
-(id)text;
-(id)bookmarks;
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

