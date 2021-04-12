/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBParagraph : NSObject
+(int)blockType;
+(void)readRunsFor:(id)arg1 from:(id)arg2 textRun:(WrdParagraphTextRun*)arg3 ;
+(void)readFrom:(id)arg1 textRun:(WrdParagraphTextRun*)arg2 paragraph:(id)arg3 ;
+(void)readCharacterRunsFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readNoteFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readAnnotationFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readFieldMarkerFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readBookmarkFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readAnnotationBookmarkFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)checkForBookmarkFrom:(id)arg1 runEnd:(int*)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)checkForAnnotationBookmarkFrom:(id)arg1 runEnd:(int*)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)checkForAnnotationFrom:(id)arg1 runEnd:(int*)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)checkForNoteFrom:(id)arg1 footnote:(BOOL)arg2 runEnd:(int*)arg3 readState:(WBParagraphReadState*)arg4 ;
+(void)check:(id)arg1 forFieldMarkerFrom:(id)arg2 runEnd:(int*)arg3 readState:(WBParagraphReadState*)arg4 ;
+(void)readSpecialCharactersFor:(id)arg1 from:(id)arg2 textRun:(WrdCharacterTextRun*)arg3 ;
+(void)readSymbolsFor:(id)arg1 from:(id)arg2 textRun:(WrdCharacterTextRun*)arg3 ;
+(BOOL)isCPAnnotationRangeEnd:(int)arg1 bookmarkTable:(WrdBookmarkTable*)arg2 ;
+(void)readOfficeArtFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(WrdCharacterTextRun*)arg4 ;
+(void)readPictureFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(WrdCharacterTextRun*)arg4 ;
+(void)readSpecialCharacterFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(WrdCharacterTextRun*)arg4 ;
@end

