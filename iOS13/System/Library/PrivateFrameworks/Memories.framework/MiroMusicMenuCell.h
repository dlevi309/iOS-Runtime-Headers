/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UITableViewCell.h>

@class VEKSong, UIImageView, NSString, NSLayoutConstraint, UILabel;

@interface MiroMusicMenuCell : UITableViewCell {

	VEKSong* _song;
	UIImageView* _artworkView;
	NSString* _detailText;
	NSString* _secondaryDetailText;
	UIImageView* _checkmark;
	NSLayoutConstraint* _artworkLeadingConstraint;
	UILabel* _upperDetailsLabel;
	UILabel* _lowerDetailsLabel;

}

@property (nonatomic,retain) UILabel * upperDetailsLabel;                                //@synthesize upperDetailsLabel=_upperDetailsLabel - In the implementation block
@property (nonatomic,retain) UILabel * lowerDetailsLabel;                                //@synthesize lowerDetailsLabel=_lowerDetailsLabel - In the implementation block
@property (nonatomic,retain) VEKSong * song;                                             //@synthesize song=_song - In the implementation block
@property (nonatomic,retain) UIImageView * artworkView;                                  //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,retain) NSString * detailText;                                      //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) NSString * secondaryDetailText;                             //@synthesize secondaryDetailText=_secondaryDetailText - In the implementation block
@property (nonatomic,retain) UIImageView * checkmark;                                    //@synthesize checkmark=_checkmark - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * artworkLeadingConstraint;              //@synthesize artworkLeadingConstraint=_artworkLeadingConstraint - In the implementation block
-(void)prepareForReuse;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(void)_updateFonts;
-(VEKSong *)song;
-(void)setSong:(VEKSong *)arg1 ;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
-(UIImageView *)artworkView;
-(void)setArtworkView:(UIImageView *)arg1 ;
-(void)setSecondaryDetailText:(NSString *)arg1 ;
-(NSLayoutConstraint *)artworkLeadingConstraint;
-(UILabel *)upperDetailsLabel;
-(UILabel *)lowerDetailsLabel;
-(NSString *)secondaryDetailText;
-(void)setArtworkLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpperDetailsLabel:(UILabel *)arg1 ;
-(void)setLowerDetailsLabel:(UILabel *)arg1 ;
@end

