/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@protocol WGWidgetListFooterViewDelegate;
@class NSMutableDictionary, UIFont, MTMaterialView, UIView, _UILegibilitySettings, WGShortLookStyleButton, UIButton, WGNewWidgetsButton, NSString;

@interface WGWidgetListFooterView : UIView <UITextViewDelegate, MTMaterialGrouping> {

	NSMutableDictionary* _widgetIDsToAttributionViews;
	UIFont* _referenceFont;
	MTMaterialView* _customizeButtonBackground;
	BOOL _shouldSizeContent;
	UIView* _contentView;
	long long _layoutMode;
	_UILegibilitySettings* _legibilitySettings;
	WGShortLookStyleButton* _editButton;
	UIButton* _customizeButton;
	id<WGWidgetListFooterViewDelegate> _delegate;
	WGNewWidgetsButton* _widgetAvailableButton;

}

@property (nonatomic,readonly) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long layoutMode;                                            //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                      //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) BOOL shouldBlurContent; 
@property (assign,nonatomic) BOOL shouldSizeContent;                                          //@synthesize shouldSizeContent=_shouldSizeContent - In the implementation block
@property (nonatomic,retain) WGShortLookStyleButton * editButton;                             //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIButton * customizeButton;                                      //@synthesize customizeButton=_customizeButton - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WGNewWidgetsButton * widgetAvailableButton;                      //@synthesize widgetAvailableButton=_widgetAvailableButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * materialGroupNameBase; 
-(WGShortLookStyleButton *)editButton;
-(void)setCustomizeButton:(UIButton *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_availableWidgetsUpdated:(id)arg1 ;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)shouldBlurContent;
-(id<WGWidgetListFooterViewDelegate>)delegate;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_updateForContentCategorySizeDidChange;
-(NSString *)materialGroupNameBase;
-(void)setEditButton:(WGShortLookStyleButton *)arg1 ;
-(void)setDelegate:(id<WGWidgetListFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)shouldSizeContent;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_referenceFont;
-(void)setShouldSizeContent:(BOOL)arg1 ;
-(void)setLayoutMode:(long long)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(WGNewWidgetsButton *)widgetAvailableButton;
-(void)setWidgetAvailableButton:(WGNewWidgetsButton *)arg1 ;
-(long long)layoutMode;
-(void)_setAttributedString:(id)arg1 forWidgetIdentifier:(id)arg2 ;
-(void)invalidateSubviewGeometery;
-(UIButton *)customizeButton;
-(UIView *)contentView;
-(void)_addCustomizeButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
@end

