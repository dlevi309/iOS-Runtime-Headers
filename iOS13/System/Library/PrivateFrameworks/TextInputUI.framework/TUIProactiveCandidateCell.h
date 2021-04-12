/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUICandidateBaseCell.h>

@class TIKeyboardCandidate, UIView;

@interface TUIProactiveCandidateCell : TUICandidateBaseCell {

	TIKeyboardCandidate* _candidate;
	UIView* _slotContentView;

}

@property (nonatomic,retain) UIView * slotContentView;                     //@synthesize slotContentView=_slotContentView - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(TIKeyboardCandidate *)candidate;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(UIView *)slotContentView;
-(void)setSlotContentView:(UIView *)arg1 ;
@end

