/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MFMailDropBannerDelegate>)delegate;
-(void)setMetaData:(EMMailDropMetadata *)arg1 ;
-(double)downloadProgress;
-(void)setDelegate:(id<MFMailDropBannerDelegate>)arg1 ;
-(void)updateConstraints;
-(void)startDownload:(id)arg1 ;
-(EMMailDropMetadata *)metaData;
-(void)setDownloadProgress:(double)arg1 ;
-(BOOL)shouldPresent;
-(void)_setupDownloadLabel;
-(void)_setupExpirationLabel;
-(void)_setupDownloadIcon;
-(unsigned long long)bannerState;
-(BOOL)_hasDataLocally;
-(void)setBannerState:(unsigned long long)arg1 ;
-(BOOL)_shouldDisplayProgress;
-(void)setSeparatorIsHidden:(BOOL)arg1 ;
@end

