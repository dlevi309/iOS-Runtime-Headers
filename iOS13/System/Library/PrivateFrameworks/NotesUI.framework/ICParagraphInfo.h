/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@class TTParagraphStyle, NSMutableArray;

@interface ICParagraphInfo : NSObject {

	TTParagraphStyle* _paragraphStyle;
	NSMutableArray* _children;
	NSRange _characterRange;
	NSRange _rangeIncludingChildren;

}

@property (nonatomic,retain) TTParagraphStyle * paragraphStyle;              //@synthesize paragraphStyle=_paragraphStyle - In the implementation block
@property (assign,nonatomic) NSRange characterRange;                         //@synthesize characterRange=_characterRange - In the implementation block
@property (assign,nonatomic) NSRange rangeIncludingChildren;                 //@synthesize rangeIncludingChildren=_rangeIncludingChildren - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;                      //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) unsigned style; 
@property (nonatomic,readonly) unsigned long long indent; 
-(unsigned)style;
-(NSMutableArray *)children;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)setCharacterRange:(NSRange)arg1 ;
-(NSRange)characterRange;
-(void)setParagraphStyle:(TTParagraphStyle *)arg1 ;
-(unsigned long long)indent;
-(TTParagraphStyle *)paragraphStyle;
-(NSRange)rangeIncludingChildren;
-(void)setRangeIncludingChildren:(NSRange)arg1 ;
@end

