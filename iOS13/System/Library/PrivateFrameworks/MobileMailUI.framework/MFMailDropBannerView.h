/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFMessageHeaderViewBlock.h>

@protocol MFMailDropBannerDelegate;
@class UILabel, UIButton, MFProgressView, NSLayoutConstraint, EMMailDropMetadata;

@interface MFMailDropBannerView : MFMessageHeaderViewBlock {

	BOOL _hasLoaded;
	UILabel* _expirationLabel;
	UILabel* _downloadLabel;
	UIButton* _downloadIcon;
	MFProgressView* _progressView;
	NSLayoutConstraint* _iconWrapperWidth;
	NSLayoutConstraint* _labelFirstBaseline;
	NSLayoutConstraint* _expirationFirstBaseline;
	NSLayoutConstraint* _expirationBottom;
	EMMailDropMetadata* _metaData;
	unsigned long long _bannerState;
	double _downloadProgress;
	id<MFMailDropBannerDelegate> _delegate;

}

@property (nonatomic,retain) EMMailDropMetadata * metaData;                             //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) unsigned long long bannerState;                            //@synthesize bannerState=_bannerState - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                   //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailDropBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MFMailDropBannerDelegate>)delegate;
-(void)setDelegate:(id<MFMailDropBannerDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(EMMailDropMetadata *)metaData;
-(void)setMetaData:(EMMailDropMetadata *)arg1 ;
-(void)startDownload:(id)arg1 ;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_setupDownloadLabel;
-(void)_setupExpirationLabel;
-(void)_setupDownloadIcon;
-(unsigned long long)bannerState;
-(BOOL)_hasDataLocally;
-(void)setBannerState:(unsigned long long)arg1 ;
-(BOOL)_shouldDisplayProgress;
-(void)setSeparatorIsHidden:(BOOL)arg1 ;
-(BOOL)shouldPresent;
@end

