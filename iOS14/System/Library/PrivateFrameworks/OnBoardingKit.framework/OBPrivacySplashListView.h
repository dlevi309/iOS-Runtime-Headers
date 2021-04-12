/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateFonts;
-(UITextView *)footerTextView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSMutableArray *)textViews;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(BOOL)arg3 ;
-(void)setDisplayingPrivacyPane:(BOOL)arg1 ;
-(NSMutableArray *)stackedIconTextLists;
-(void)updateSpacing;
-(void)updateTextAlignment;
-(BOOL)displayingPrivacyPane;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 ;
-(void)setTextViews:(NSMutableArray *)arg1 ;
-(void)setStackedIconTextLists:(NSMutableArray *)arg1 ;
@end

