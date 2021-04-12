/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString, _SFFluidProgressView, _SFNavigationBar;

@interface _SFNavigationBarItem : NSObject {

	BOOL _showsLockIcon;
	BOOL _showsSearchIndicator;
	BOOL _showsStopReloadButtons;
	BOOL _stopReloadButtonShowsStop;
	BOOL _showsPageFormatButton;
	BOOL _readerButtonSelected;
	BOOL _showsReaderButton;
	BOOL _showsReaderAvailabilityText;
	BOOL _overrideBarStyleForSecurityWarning;
	BOOL _showsNotSecureAnnotation;
	BOOL _hasFocusedSensitiveFieldOnCurrentPage;
	NSString* _text;
	NSString* _textWhenExpanded;
	unsigned long long _startIndexOfTextInExpandedText;
	NSString* _customPlaceholderText;
	_SFFluidProgressView* _progressView;
	unsigned long long _mediaCaptureDeviceIcon;
	_SFNavigationBar* _navigationBar;

}

@property (assign,setter=_setNavigationBar:,nonatomic,__weak) _SFNavigationBar * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) NSString * text;                                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * textWhenExpanded;                                                  //@synthesize textWhenExpanded=_textWhenExpanded - In the implementation block
@property (nonatomic,readonly) unsigned long long startIndexOfTextInExpandedText;                            //@synthesize startIndexOfTextInExpandedText=_startIndexOfTextInExpandedText - In the implementation block
@property (nonatomic,copy) NSString * customPlaceholderText;                                                 //@synthesize customPlaceholderText=_customPlaceholderText - In the implementation block
@property (assign,nonatomic) BOOL showsLockIcon;                                                             //@synthesize showsLockIcon=_showsLockIcon - In the implementation block
@property (assign,nonatomic) BOOL showsSearchIndicator;                                                      //@synthesize showsSearchIndicator=_showsSearchIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsStopReloadButtons;                                                    //@synthesize showsStopReloadButtons=_showsStopReloadButtons - In the implementation block
@property (assign,nonatomic) BOOL stopReloadButtonShowsStop;                                                 //@synthesize stopReloadButtonShowsStop=_stopReloadButtonShowsStop - In the implementation block
@property (assign,nonatomic) BOOL showsPageFormatButton;                                                     //@synthesize showsPageFormatButton=_showsPageFormatButton - In the implementation block
@property (assign,nonatomic) BOOL readerButtonSelected;                                                      //@synthesize readerButtonSelected=_readerButtonSelected - In the implementation block
@property (assign,nonatomic) BOOL showsReaderButton;                                                         //@synthesize showsReaderButton=_showsReaderButton - In the implementation block
@property (nonatomic,readonly) BOOL showsReaderAvailabilityText;                                             //@synthesize showsReaderAvailabilityText=_showsReaderAvailabilityText - In the implementation block
@property (assign,nonatomic) BOOL overrideBarStyleForSecurityWarning;                                        //@synthesize overrideBarStyleForSecurityWarning=_overrideBarStyleForSecurityWarning - In the implementation block
@property (nonatomic,retain) _SFFluidProgressView * progressView;                                            //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCaptureDeviceIcon;                                      //@synthesize mediaCaptureDeviceIcon=_mediaCaptureDeviceIcon - In the implementation block
@property (assign,nonatomic) BOOL showsNotSecureAnnotation;                                                  //@synthesize showsNotSecureAnnotation=_showsNotSecureAnnotation - In the implementation block
@property (assign,nonatomic) BOOL hasFocusedSensitiveFieldOnCurrentPage;                                     //@synthesize hasFocusedSensitiveFieldOnCurrentPage=_hasFocusedSensitiveFieldOnCurrentPage - In the implementation block
-(id)init;
-(NSString *)text;
-(_SFNavigationBar *)navigationBar;
-(void)_setNavigationBar:(id)arg1 ;
-(BOOL)overrideBarStyleForSecurityWarning;
-(BOOL)showsPageFormatButton;
-(unsigned long long)mediaCaptureDeviceIcon;
-(BOOL)stopReloadButtonShowsStop;
-(BOOL)showsStopReloadButtons;
-(_SFFluidProgressView *)progressView;
-(BOOL)showsNotSecureAnnotation;
-(NSString *)textWhenExpanded;
-(unsigned long long)startIndexOfTextInExpandedText;
-(BOOL)showsLockIcon;
-(BOOL)showsSearchIndicator;
-(BOOL)showsReaderButton;
-(BOOL)showsReaderAvailabilityText;
-(BOOL)readerButtonSelected;
-(BOOL)hasFocusedSensitiveFieldOnCurrentPage;
-(NSString *)customPlaceholderText;
-(void)setMediaCaptureDeviceIcon:(unsigned long long)arg1 ;
-(void)setProgressView:(_SFFluidProgressView *)arg1 ;
-(void)setShowsReaderButton:(BOOL)arg1 showsAvailabilityText:(BOOL)arg2 ;
-(void)setText:(id)arg1 textWhenExpanded:(id)arg2 startIndex:(unsigned long long)arg3 ;
-(void)setShowsLockIcon:(BOOL)arg1 ;
-(void)setShowsSearchIndicator:(BOOL)arg1 ;
-(void)setShowsStopReloadButtons:(BOOL)arg1 ;
-(void)setStopReloadButtonShowsStop:(BOOL)arg1 ;
-(void)setReaderButtonSelected:(BOOL)arg1 ;
-(void)setOverrideBarStyleForSecurityWarning:(BOOL)arg1 ;
-(void)setShowsPageFormatButton:(BOOL)arg1 ;
-(void)setShowsReaderButton:(BOOL)arg1 ;
-(void)setShowsNotSecureAnnotation:(BOOL)arg1 hasFocusedSensitiveField:(BOOL)arg2 ;
-(void)setCustomPlaceholderText:(NSString *)arg1 ;
-(void)setShowsNotSecureAnnotation:(BOOL)arg1 ;
-(void)setHasFocusedSensitiveFieldOnCurrentPage:(BOOL)arg1 ;
@end

