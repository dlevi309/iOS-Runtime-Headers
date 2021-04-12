/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIStackView.h>

@class UITextView, NSMutableArray;

@interface OBPrivacySplashListView : UIStackView {

	BOOL _displayingPrivacyPane;
	UITextView* _footerTextView;
	NSMutableArray* _textViews;
	NSMutableArray* _stackedIconTextLists;

}

@property (assign) BOOL displayingPrivacyPane;                                   //@synthesize displayingPrivacyPane=_displayingPrivacyPane - In the implementation block
@property (nonatomic,retain) NSMutableArray * textViews;                         //@synthesize textViews=_textViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * stackedIconTextLists;              //@synthesize stackedIconTextLists=_stackedIconTextLists - In the implementation block
@property (nonatomic,readonly) UITextView * footerTextView;                      //@synthesize footerTextView=_footerTextView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(BOOL)arg3 ;
-(void)setDisplayingPrivacyPane:(BOOL)arg1 ;
-(NSMutableArray *)textViews;
-(NSMutableArray *)stackedIconTextLists;
-(void)updateSpacing;
-(void)updateFonts;
-(void)updateTextAlignment;
-(BOOL)displayingPrivacyPane;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 ;
-(UITextView *)footerTextView;
-(void)setTextViews:(NSMutableArray *)arg1 ;
-(void)setStackedIconTextLists:(NSMutableArray *)arg1 ;
@end

