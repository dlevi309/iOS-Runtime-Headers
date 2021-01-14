/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSLayoutConstraint* _noCloudIconConstraint;
	NSLayoutConstraint* _cloudIconConstraint;
	UIImageView* _iconView;
	UIView* _titleInfoView;
	UILabel* _titleLabel;
	UILabel* _infoLabel;
	UILabel* _sizeLabel;
	UIImageView* _cloudIconView;
	long long _size;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * sizeString; 
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL infoHidden; 
@property (assign,nonatomic) BOOL cloudIconHidden; 
@property (assign,nonatomic) long long size; 
+(double)defaultCellHeight;
-(NSString *)info;
-(UIActivityIndicatorView *)spinner;
-(void)setInfoHidden:(BOOL)arg1 ;
-(long long)size;
-(void)setEnabled:(BOOL)arg1 ;
-(UIImage *)icon;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)updateConstraints;
-(void)setInfo:(NSString *)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(BOOL)infoHidden;
-(void)createLargeFontConstraints;
-(void)createNormalFontConstraints;
-(void)setSizeString:(NSString *)arg1 ;
-(NSString *)sizeString;
-(void)setupTitleAndInfoConstraints;
-(BOOL)cloudIconHidden;
-(void)setCloudIconHidden:(BOOL)arg1 ;
@end

