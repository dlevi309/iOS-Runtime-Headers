/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBTextBlock : NSObject
+(void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3 ;
+(void)applyTextRuler:(PptTextRulerAtom*)arg1 toTextBlock:(id)arg2 ;
+(void)readFromTextBlock:(id)arg1 toStyledText:(CFAttributedStringRef)arg2 ;
+(void)readFromStyledText:(CFAttributedStringRef)arg1 toStyledPargraphs:(CFArrayRef)arg2 ;
+(void)readParagraph:(id)arg1 paragraph:(CFAttributedStringRef)arg2 textType:(int)arg3 state:(id)arg4 ;
@end

