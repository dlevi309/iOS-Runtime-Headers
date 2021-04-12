/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@class TTParagraphStyle;

@interface ICTrackedParagraph : NSObject {

	TTParagraphStyle* _paragraph;
	NSRange _characterRange;

}

@property (nonatomic,retain) TTParagraphStyle * paragraph;              //@synthesize paragraph=_paragraph - In the implementation block
@property (assign,nonatomic) NSRange characterRange;                    //@synthesize characterRange=_characterRange - In the implementation block
-(id)description;
-(void)setCharacterRange:(NSRange)arg1 ;
-(NSRange)characterRange;
-(TTParagraphStyle *)paragraph;
-(void)setParagraph:(TTParagraphStyle *)arg1 ;
@end

