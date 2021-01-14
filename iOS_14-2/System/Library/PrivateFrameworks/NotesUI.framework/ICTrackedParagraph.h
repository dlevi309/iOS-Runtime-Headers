/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TTParagraphStyle *)paragraph;
-(void)setParagraph:(TTParagraphStyle *)arg1 ;
-(NSRange)characterRange;
-(void)setCharacterRange:(NSRange)arg1 ;
@end

