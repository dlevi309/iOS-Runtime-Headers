/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString, _SFFluidProgressView, _SFNavigationBar;

@interface _SFNavigationBarItem : NSObject {

	BOOL _temporarilySuppressText;
	BOOL _showsLockIcon;
	BOOL _showsSearchIndicator;
	BOOL _showsStopReloadButtons;
	BOOL _stopReloadButtonShowsStop;
	BOOL _showsPageFormatButton;
	BOOL _readerButtonSelected;
	BOOL _showsReaderButton;
	BOOL _showsTranslationButton;
	BOOL _showsTranslationIcon;
	BOOL _showsTranslationAvailabilityText;
	BOOL _showsReaderAvailabilityText;
	BOOL _overrideBarStyleForSecurityWarning;
	BOOL _showsNotSecureAnnotation;
	BOOL _hasFocusedSensitiveFieldOnCurrentPage;
	NSString* _text;
	NSString* _textWhenExpanded;
	unsigned long long _startIndexOfTextInExpandedText;
	NSString* _customPlaceholderText;
	_SFFluidProgressView* _progressView;
	unsigned long long _mediaStateIcon;
	_SFNavigationBar* _navigationBar;

}

@property (nonatomic,readonly) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * textWhenExpanded;                                    //@synthesize textWhenExpanded=_textWhenExpanded - In the implementation block
@property (nonatomic,readonly) unsigned long long startIndexOfTextInExpandedText;              //@synthesize startIndexOfTextInExpandedText=_startIndexOfTextInExpandedText - In the implementation block
@property (nonatomic,copy) NSString * customPlaceholderText;                                   //@synthesize customPlaceholderText=_customPlaceholderText - In the implementation block
@property (assign,nonatomic) BOOL showsLockIcon;                                               //@synthesize showsLockIcon=_showsLockIcon - In the implementation block
@property (assign,nonatomic) BOOL showsSearchIndicator;                                        //@synthesize showsSearchIndicator=_showsSearchIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsStopReloadButtons;                                      //@synthesize showsStopReloadButtons=_showsStopReloadButtons - In the implementation block
@property (assign,nonatomic) BOOL stopReloadButtonShowsStop;                                   //@synthesize stopReloadButtonShowsStop=_stopReloadButtonShowsStop - In the implementation block
@property (assign,nonatomic) BOOL showsPageFormatButton;                                       //@synthesize showsPageFormatButton=_showsPageFormatButton - In the implementation block
@property (assign,nonatomic) BOOL readerButtonSelected;                                        //@synthesize readerButtonSelected=_readerButtonSelected - In the implementation block
@property (assign,nonatomic) BOOL showsReaderButton;                                           //@synthesize showsReaderButton=_showsReaderButton - In the implementation block
@property (assign,nonatomic) BOOL showsTranslationButton;                                      //@synthesize showsTranslationButton=_showsTranslationButton - In the implementation block
@property (assign,nonatomic) BOOL showsTranslationIcon;                                        //@synthesize showsTranslationIcon=_showsTranslationIcon - In the implementation block
@property (nonatomic,readonly) BOOL showsTranslationAvailabilityText;                          //@synthesize showsTranslationAvailabilityText=_showsTranslationAvailabilityText - In the implementation block
@property (nonatomic,readonly) BOOL showsReaderAvailabilityText;                               //@synthesize showsReaderAvailabilityText=_showsReaderAvailabilityText - In the implementation block
@property (assign,nonatomic) BOOL overrideBarStyleForSecurityWarning;                          //@synthesize overrideBarStyleForSecurityWarning=_overrideBarStyleForSecurityWarning - In the implementation block
@property (nonatomic,retain) _SFFluidProgressView * progressView;                              //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) unsigned long long mediaStateIcon;                                //@synthesize mediaStateIcon=_mediaStateIcon - In the implementation block
@property (assign,nonatomic) BOOL showsNotSecureAnnotation;                                    //@synthesize showsNotSecureAnnotation=_showsNotSecureAnnotation - In the implementation block
@property (assign,nonatomic) BOOL hasFocusedSensitiveFieldOnCurrentPage;                       //@synthesize hasFocusedSensitiveFieldOnCurrentPage=_hasFocusedSensitiveFieldOnCurrentPage - In the implementation block
-(void)setText:(id)arg1 textWhenExpanded:(id)arg2 startIndex:(unsigned long long)arg3 ;
-(id)init;
-(void)setOverrideBarStyleForSecurityWarning:(BOOL)arg1 ;
-(BOOL)showsStopReloadButtons;
-(void)setShowsSearchIndicator:(BOOL)arg1 ;
-(void)setShowsPageFormatButton:(BOOL)arg1 ;
-(BOOL)showsTranslationIcon;
-(BOOL)showsTranslationAvailabilityText;
-(BOOL)hasFocusedSensitiveFieldOnCurrentPage;
-(void)setShowsReaderButton:(BOOL)arg1 ;
-(void)setShowsTranslationButton:(BOOL)arg1 showsAvailabilityText:(BOOL)arg2 ;
-(unsigned long long)mediaStateIcon;
-(void)setStopReloadButtonShowsStop:(BOOL)arg1 ;
-(BOOL)showsReaderButton;
-(BOOL)showsPageFormatButton;
-(NSString *)textWhenExpanded;
-(void)setShowsStopReloadButtons:(BOOL)arg1 ;
-(void)setShowsLockIcon:(BOOL)arg1 ;
-(BOOL)stopReloadButtonShowsStop;
-(NSString *)text;
-(void)setShowsNotSecureAnnotation:(BOOL)arg1 ;
-(void)setShowsTranslationButton:(BOOL)arg1 ;
-(BOOL)showsTranslationButton;
-(void)setReaderButtonSelected:(BOOL)arg1 ;
-(BOOL)overrideBarStyleForSecurityWarning;
-(BOOL)showsReaderAvailabilityText;
-(void)setProgressView:(_SFFluidProgressView *)arg1 ;
-(BOOL)showsLockIcon;
-(_SFFluidProgressView *)progressView;
-(BOOL)showsSearchIndicator;
-(void)setShowsNotSecureAnnotation:(BOOL)arg1 hasFocusedSensitiveField:(BOOL)arg2 ;
-(void)setTemporarilySuppressText:(BOOL)arg1 ;
-(void)setCustomPlaceholderText:(NSString *)arg1 ;
-(NSString *)customPlaceholderText;
-(BOOL)readerButtonSelected;
-(void)setShowsReaderButton:(BOOL)arg1 showsAvailabilityText:(BOOL)arg2 ;
-(BOOL)showsNotSecureAnnotation;
-(void)setShowsTranslationIcon:(BOOL)arg1 ;
-(void)setHasFocusedSensitiveFieldOnCurrentPage:(BOOL)arg1 ;
-(void)setMediaStateIcon:(unsigned long long)arg1 ;
-(unsigned long long)startIndexOfTextInExpandedText;
@end

