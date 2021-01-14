/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoStreamAlbumTableViewCell.h>

@class UIImageView, UILabel, NSArray;

@interface PUPhotoStreamAlbumLargeTextTableViewCell : PUPhotoStreamAlbumTableViewCell {

	UIImageView* _albumImageView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSArray* _currentConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                     //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIImageView * albumImageView;              //@synthesize albumImageView=_albumImageView - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;              //@synthesize currentConstraints=_currentConstraints - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setText:(id)arg1 ;
-(NSArray *)currentConstraints;
-(void)setDetailText:(id)arg1 ;
-(void)_commonPhotoStreamAlbumLargeTextTableViewCellInit;
-(UIImageView *)albumImageView;
-(void)setAlbumImageView:(UIImageView *)arg1 ;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(id)text;
-(id)initWithCoder:(id)arg1 ;
-(id)detailText;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)detailLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

