/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@class ICTrackedParagraph, NSAttributedString;

@interface ICParagraphInfoSortInfo : NSObject {

	ICTrackedParagraph* _trackedParagraph;
	NSAttributedString* _attributedString;
	NSRange _characterRange;

}

@property (nonatomic,retain) ICTrackedParagraph * trackedParagraph;              //@synthesize trackedParagraph=_trackedParagraph - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) NSRange characterRange;                             //@synthesize characterRange=_characterRange - In the implementation block
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(NSRange)characterRange;
-(void)setCharacterRange:(NSRange)arg1 ;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(ICTrackedParagraph *)trackedParagraph;
@end

