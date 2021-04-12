/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UILabel, UIImageView, UIImage, NSString;

@interface STStorageAppHeaderCell : PSTableCell {

	NSMutableArray* _constraints;
	UILabel* _titleLabel;
	UILabel* _infoLabel;
	UILabel* _vendorLabel;
	UIImageView* _appIconView;
	UIImageView* _cloudIconView;
	BOOL _isDemoted;
	BOOL _infoHidden;

}

@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * vendor; 
@property (assign,nonatomic) BOOL infoHidden; 
+(id)specifierForStorageApp:(id)arg1 ;
+(id)specifierForAppIdentifier:(id)arg1 ;
+(id)specifierForAppBundleURL:(id)arg1 ;
+(id)specifierForAppProxy:(id)arg1 ;
-(NSString *)info;
-(void)setInfoHidden:(BOOL)arg1 ;
-(UIImage *)icon;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)vendor;
-(void)updateConstraints;
-(void)setInfo:(NSString *)arg1 ;
-(void)setVendor:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)infoHidden;
@end

