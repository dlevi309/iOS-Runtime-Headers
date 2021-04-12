/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTappedDownloadBlock:(/*^block*/id)arg1 ;
-(void)_tappedDownloadButton:(id)arg1 ;
-(UIButton *)downloadButton;
-(id)tappedDownloadBlock;
-(void)setTappedDownloadBlock:(id)arg1 ;
-(BOOL)isDownloading;
-(UIProgressView *)progressView;
-(void)setDownloading:(BOOL)arg1 ;
@end

