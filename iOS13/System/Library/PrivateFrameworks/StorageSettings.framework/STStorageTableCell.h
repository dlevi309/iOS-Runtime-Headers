/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, NSLayoutConstraint, UIImageView, UIView, UILabel, UIActivityIndicatorView, UIImage, NSString;

@interface STStorageTableCell : PSTableCell {

	NSMutableArray* _normalFontConstraints;
	NSMutableArray* _largeFontConstraints;
	NSMutableArray* _infoConstraints;
	NSLayoutConstraint* _iconSizeConstraint;
	NSLayoutConstraint* _sizeRightConstraint;
	NSLayoutConstraint* _minHeightConstraint;
	UIImageView* _iconView;
	UIView* _titleInfoView;
	UILabel* _titleLabel;
	UILabel* _infoLabel;
	UILabel* _sizeLabel;
	long long _size;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * sizeString; 
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL infoHidden; 
@property (assign,nonatomic) long long size; 
+(double)defaultCellHeight;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)size;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(NSString *)info;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setupTitleAndInfoConstraints;
-(void)createLargeFontConstraints;
-(void)createNormalFontConstraints;
-(void)setSizeString:(NSString *)arg1 ;
-(BOOL)infoHidden;
-(void)setInfoHidden:(BOOL)arg1 ;
-(NSString *)sizeString;
@end

