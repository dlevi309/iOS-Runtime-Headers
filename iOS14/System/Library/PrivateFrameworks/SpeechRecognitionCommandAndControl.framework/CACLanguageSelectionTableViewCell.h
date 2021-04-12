/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>

@protocol CACLanguageDownloadTableViewCellDownloadDelegate;
@class NSMutableArray, NSLayoutConstraint, UIImageView, UIView, UILabel, NSString, UIActivityIndicatorView, SKUIItemOfferButton, UIImage;

@interface CACLanguageSelectionTableViewCell : UITableViewCell <SKUIItemOfferButtonDelegate> {

	NSMutableArray* _normalFontConstraints;
	NSMutableArray* _largeFontConstraints;
	NSMutableArray* _infoConstraints;
	NSLayoutConstraint* _downloadButtonSizeConstraint;
	NSLayoutConstraint* _sizeRightConstraint;
	NSLayoutConstraint* _minHeightConstraint;
	UIImageView* _iconView;
	UIView* _titleInfoView;
	UILabel* _titleLabel;
	UILabel* _infoLabel;
	UILabel* _sizeLabel;
	long long _size;
	BOOL _needsDownload;
	BOOL _disableInteraction;
	NSString* _languageIdentifier;
	id<CACLanguageDownloadTableViewCellDownloadDelegate> _cacLanguageDownloadDelegate;
	UIActivityIndicatorView* _spinner;
	SKUIItemOfferButton* _downloadButton;

}

@property (nonatomic,retain) NSString * languageIdentifier;                                                                        //@synthesize languageIdentifier=_languageIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CACLanguageDownloadTableViewCellDownloadDelegate> cacLanguageDownloadDelegate;              //@synthesize cacLanguageDownloadDelegate=_cacLanguageDownloadDelegate - In the implementation block
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * sizeString; 
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                                    //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) SKUIItemOfferButton * downloadButton;                                                                 //@synthesize downloadButton=_downloadButton - In the implementation block
@property (assign,nonatomic) BOOL needsDownload;                                                                                   //@synthesize needsDownload=_needsDownload - In the implementation block
@property (assign,nonatomic) BOOL infoHidden; 
@property (assign,nonatomic) BOOL disableInteraction;                                                                              //@synthesize disableInteraction=_disableInteraction - In the implementation block
@property (assign,nonatomic) long long size; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultCellHeight;
-(id)accessibilityLabel;
-(NSString *)info;
-(BOOL)disableInteraction;
-(BOOL)isAccessibilityElement;
-(UIActivityIndicatorView *)spinner;
-(void)setInfoHidden:(BOOL)arg1 ;
-(long long)size;
-(void)setEnabled:(BOOL)arg1 ;
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)updateConstraints;
-(SKUIItemOfferButton *)downloadButton;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(void)setLanguageIdentifier:(NSString *)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(NSString *)languageIdentifier;
-(BOOL)needsDownload;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)infoHidden;
-(void)setDownloadButton:(SKUIItemOfferButton *)arg1 ;
-(void)didPressDownloadButton;
-(void)_setupTitleAndInfoConstraints;
-(void)createLargeFontConstraints;
-(void)createNormalFontConstraints;
-(void)setSizeString:(NSString *)arg1 ;
-(id<CACLanguageDownloadTableViewCellDownloadDelegate>)cacLanguageDownloadDelegate;
-(NSString *)sizeString;
-(void)setNeedsDownload:(BOOL)arg1 ;
-(void)setCacLanguageDownloadDelegate:(id<CACLanguageDownloadTableViewCellDownloadDelegate>)arg1 ;
@end

