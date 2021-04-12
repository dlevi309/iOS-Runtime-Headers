/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)commonInit;
-(UIView *)slotContentView;
-(void)setSlotContentView:(UIView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardCandidate *)candidate;
@end

