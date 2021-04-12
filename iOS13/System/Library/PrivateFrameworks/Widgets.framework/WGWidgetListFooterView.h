/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@protocol WGWidgetListFooterViewDelegate;
@class WGShortLookStyleButton, WGNewWidgetsButton, NSMutableDictionary, UIFont, UIView, _UILegibilitySettings, NSString;

@interface WGWidgetListFooterView : UIView <UITextViewDelegate, MTMaterialGrouping> {

	WGShortLookStyleButton* _editButton;
	WGNewWidgetsButton* _newWidgetsButton;
	NSMutableDictionary* _widgetIDsToAttributionViews;
	UIFont* _referenceFont;
	BOOL _shouldSizeContent;
	UIView* _contentView;
	long long _layoutMode;
	_UILegibilitySettings* _legibilitySettings;
	id<WGWidgetListFooterViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long layoutMode;                                            //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                      //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) BOOL shouldBlurContent; 
@property (assign,nonatomic) BOOL shouldSizeContent;                                          //@synthesize shouldSizeContent=_shouldSizeContent - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * materialGroupNameBase; 
-(id<WGWidgetListFooterViewDelegate>)delegate;
-(void)setDelegate:(id<WGWidgetListFooterViewDelegate>)arg1 ;
-(UIView *)contentView;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(long long)layoutMode;
-(void)setLayoutMode:(long long)arg1 ;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
-(NSString *)materialGroupNameBase;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)setShouldSizeContent:(BOOL)arg1 ;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(BOOL)shouldBlurContent;
-(void)_availableWidgetsUpdated:(id)arg1 ;
-(void)_updateForContentCategorySizeDidChange;
-(void)_setAttributedString:(id)arg1 forWidgetIdentifier:(id)arg2 ;
-(id)_referenceFont;
-(void)invalidateSubviewGeometery;
-(BOOL)shouldSizeContent;
@end

