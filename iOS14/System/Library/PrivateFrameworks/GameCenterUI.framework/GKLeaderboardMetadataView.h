/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIStackView, NSLayoutConstraint, UIView;

@interface GKLeaderboardMetadataView : UIView {

	UILabel* _rank;
	UILabel* _title;
	UILabel* _footnote;
	UIStackView* _container;
	NSLayoutConstraint* _containerRightMargin;
	UIStackView* _header;
	NSLayoutConstraint* _headerHeight;
	UIView* _avatarContainer1;
	UIView* _avatarContainer2;
	UIView* _avatarContainer3;
	UIStackView* _body;

}

@property (nonatomic,retain) UIStackView * container;                                //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerRightMargin;              //@synthesize containerRightMargin=_containerRightMargin - In the implementation block
@property (nonatomic,retain) UIStackView * header;                                   //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerHeight;                      //@synthesize headerHeight=_headerHeight - In the implementation block
@property (nonatomic,retain) UIView * avatarContainer1;                              //@synthesize avatarContainer1=_avatarContainer1 - In the implementation block
@property (nonatomic,retain) UIView * avatarContainer2;                              //@synthesize avatarContainer2=_avatarContainer2 - In the implementation block
@property (nonatomic,retain) UIView * avatarContainer3;                              //@synthesize avatarContainer3=_avatarContainer3 - In the implementation block
@property (nonatomic,retain) UIStackView * body;                                     //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) UILabel * rank;                                         //@synthesize rank=_rank - In the implementation block
@property (nonatomic,retain) UILabel * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * footnote;                                     //@synthesize footnote=_footnote - In the implementation block
-(void)setBody:(UIStackView *)arg1 ;
-(void)setRank:(UILabel *)arg1 ;
-(UIStackView *)body;
-(void)setHeader:(UIStackView *)arg1 ;
-(UIStackView *)header;
-(void)setTitle:(UILabel *)arg1 ;
-(void)setContainer:(UIStackView *)arg1 ;
-(void)setFootnote:(UILabel *)arg1 ;
-(void)configureWithRank:(id)arg1 title:(id)arg2 footnote:(id)arg3 ;
-(void)setHeaderHeight:(NSLayoutConstraint *)arg1 ;
-(void)configureWithRank:(id)arg1 title:(id)arg2 footnote:(id)arg3 altFootnote:(id)arg4 ;
-(void)configureWithPlayers:(id)arg1 title:(id)arg2 footnote:(id)arg3 ;
-(UILabel *)rank;
-(UILabel *)footnote;
-(void)awakeFromNib;
-(UIView *)avatarContainer1;
-(UIView *)avatarContainer2;
-(UIView *)avatarContainer3;
-(void)configureFootnote:(id)arg1 altFootnote:(id)arg2 ;
-(void)configureWithPlayers:(id)arg1 title:(id)arg2 footnote:(id)arg3 altFootnote:(id)arg4 ;
-(void)updateAvatarContainer:(id)arg1 withPlayer:(id)arg2 ;
-(void)stackVertically:(BOOL)arg1 ;
-(NSLayoutConstraint *)containerRightMargin;
-(void)setContainerRightMargin:(NSLayoutConstraint *)arg1 ;
-(void)setAvatarContainer1:(UIView *)arg1 ;
-(void)setAvatarContainer2:(UIView *)arg1 ;
-(void)setAvatarContainer3:(UIView *)arg1 ;
-(NSLayoutConstraint *)headerHeight;
-(UIStackView *)container;
-(UILabel *)title;
@end

