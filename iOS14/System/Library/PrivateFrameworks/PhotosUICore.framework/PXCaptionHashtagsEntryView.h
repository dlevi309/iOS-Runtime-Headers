/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PXCaptionHashtagsEntryViewDelegate;
@class NSString, _PXUITextView, UIButton, UIFont;

@interface PXCaptionHashtagsEntryView : UIView <UITextViewDelegate> {

	BOOL _showAllText;
	id<PXCaptionHashtagsEntryViewDelegate> _delegate;
	NSString* _originalText;
	double _maxHeightInEditMode;
	unsigned long long _numberOfHashtagsInText;
	_PXUITextView* _textView;
	UIButton* _moreButton;
	UIFont* _font;
	double _cachedEllipsisWidth;

}

@property (nonatomic,retain) _PXUITextView * textView;                                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                               //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,nonatomic) BOOL showAllText;                                                    //@synthesize showAllText=_showAllText - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                       //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double cachedEllipsisWidth;                                          //@synthesize cachedEllipsisWidth=_cachedEllipsisWidth - In the implementation block
@property (assign,nonatomic,__weak) id<PXCaptionHashtagsEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * originalText;                                               //@synthesize originalText=_originalText - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) BOOL isEditing; 
@property (assign,nonatomic) double maxHeightInEditMode;                                          //@synthesize maxHeightInEditMode=_maxHeightInEditMode - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfHashtagsInText;                         //@synthesize numberOfHashtagsInText=_numberOfHashtagsInText - In the implementation block
@property (nonatomic,readonly) double minimumHeightInEdit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_PXUITextView *)textView;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(double)minimumHeightInEdit;
-(void)resetToOriginalText;
-(void)moreButtonTapped:(id)arg1 ;
-(double)_ellipsisWidth;
-(void)_addLinkAttributeToHashtagsInTextView;
-(void)_removeLinkAttributeInTextView;
-(long long)_currentMaxLines;
-(double)_preferredHeight:(BOOL*)arg1 ;
-(BOOL)_needsUpdateSize:(BOOL*)arg1 ;
-(double)_preferredHeight:(BOOL*)arg1 forWidth:(double)arg2 ;
-(BOOL)_shouldShowMoreButton;
-(void)_hideShowButton;
-(double)maxHeightInEditMode;
-(void)setMaxHeightInEditMode:(double)arg1 ;
-(unsigned long long)numberOfHashtagsInText;
-(void)setMoreButton:(UIButton *)arg1 ;
-(BOOL)showAllText;
-(void)setShowAllText:(BOOL)arg1 ;
-(double)cachedEllipsisWidth;
-(void)setCachedEllipsisWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXCaptionHashtagsEntryViewDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextView:(_PXUITextView *)arg1 ;
-(BOOL)isEditing;
-(void)setDelegate:(id<PXCaptionHashtagsEntryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSString *)originalText;
-(NSString *)text;
-(void)_updateFonts;
-(void)setOriginalText:(NSString *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(double)_maxHeight;
-(id)uiTextView;
-(UIButton *)moreButton;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(UIFont *)font;
-(void)exitEditing;
@end

