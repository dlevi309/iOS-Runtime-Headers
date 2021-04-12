/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(VEKSong *)song;
-(UIImageView *)artworkView;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
-(void)prepareForReuse;
-(void)setDetailText:(NSString *)arg1 ;
-(void)setSong:(VEKSong *)arg1 ;
-(void)_updateFonts;
-(void)awakeFromNib;
-(NSString *)detailText;
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

