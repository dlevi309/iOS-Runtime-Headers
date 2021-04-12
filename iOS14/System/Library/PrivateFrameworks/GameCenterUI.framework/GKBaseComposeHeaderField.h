/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class GKLabel, GKHairlineView, NSString;

@interface GKBaseComposeHeaderField : UIImageView {

	GKLabel* _nameLabel;
	GKHairlineView* _separatorView;
	unsigned long long _maxLineCount;
	SEL _actionWhenTouched;

}

@property (nonatomic,retain) GKLabel * nameLabel;                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKHairlineView * separatorView;               //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) unsigned long long maxLineCount;              //@synthesize maxLineCount=_maxLineCount - In the implementation block
@property (nonatomic,readonly) CGRect valueFrame; 
@property (nonatomic,retain) NSString * nameText; 
@property (nonatomic,retain) NSString * valueText; 
@property (assign,nonatomic) SEL actionWhenTouched;                        //@synthesize actionWhenTouched=_actionWhenTouched - In the implementation block
-(GKHairlineView *)separatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)nameText;
-(void)setMaxLineCount:(unsigned long long)arg1 ;
-(void)setNameText:(NSString *)arg1 ;
-(unsigned long long)maxLineCount;
-(void)setValueText:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)addConstraintsForValueView:(id)arg1 ;
-(SEL)actionWhenTouched;
-(void)setActionWhenTouched:(SEL)arg1 ;
-(id)viewForBaselineLayout;
-(CGRect)valueFrame;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(GKLabel *)nameLabel;
-(void)setNameLabel:(GKLabel *)arg1 ;
-(void)dealloc;
-(NSString *)valueText;
-(void)setSeparatorView:(GKHairlineView *)arg1 ;
@end

