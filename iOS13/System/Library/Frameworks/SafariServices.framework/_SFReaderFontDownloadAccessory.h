/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIView.h>

@class UIButton, UIProgressView;

@interface _SFReaderFontDownloadAccessory : UIView {

	BOOL _downloading;
	UIButton* _downloadButton;
	UIProgressView* _progressView;
	/*^block*/id _tappedDownloadBlock;

}

@property (nonatomic,readonly) UIButton * downloadButton;                        //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                    //@synthesize progressView=_progressView - In the implementation block
@property (assign,getter=isDownloading,nonatomic) BOOL downloading;              //@synthesize downloading=_downloading - In the implementation block
@property (nonatomic,copy) id tappedDownloadBlock;                               //@synthesize tappedDownloadBlock=_tappedDownloadBlock - In the implementation block
-(id)viewForLastBaselineLayout;
-(BOOL)isDownloading;
-(void)setDownloading:(BOOL)arg1 ;
-(UIProgressView *)progressView;
-(id)initWithTappedDownloadBlock:(/*^block*/id)arg1 ;
-(void)_tappedDownloadButton:(id)arg1 ;
-(UIButton *)downloadButton;
-(id)tappedDownloadBlock;
-(void)setTappedDownloadBlock:(id)arg1 ;
@end

