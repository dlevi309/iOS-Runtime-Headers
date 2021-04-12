/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <UIKitCore/UITextRange.h>

@class PDFTextPosition;

@interface PDFTextRange : UITextRange {

	PDFTextPosition* _start;
	PDFTextPosition* _end;

}
-(id)description;
-(BOOL)isEmpty;
-(id)start;
-(id)end;
-(id)initFromPos:(id)arg1 toPos:(id)arg2 ;
@end

