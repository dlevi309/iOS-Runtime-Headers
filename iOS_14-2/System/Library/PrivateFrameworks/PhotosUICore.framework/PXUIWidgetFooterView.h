/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXUIWidgetFooterViewDelegate;
@class NSString, UIFont, NSArray, UIButton, UIView, UIFocusGuide;

@interface PXUIWidgetFooterView : UIView {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	struct {
		BOOL hasContent;
		BOOL disclosure;
		BOOL separators;
		BOOL focusGuide;
	}  _needsUpdateFlags;
	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL __hasContent;
	id<PXUIWidgetFooterViewDelegate> _delegate;
	NSString* _disclosureTitle;
	UIFont* _font;
	long long _layoutStyle;
	NSArray* __constraints;
	UIButton* __disclosureButton;
	UIView* __leadingSeparator;
	UIView* __trailingSeparator;
	UIFocusGuide* __focusGuide;
	UIEdgeInsets _contentInsets;

}

@property (assign,setter=_setHasContent:,nonatomic) BOOL _hasContent;                       //@synthesize _hasContent=__hasContent - In the implementation block
@property (setter=_setConstraints:,nonatomic,copy) NSArray * _constraints;                  //@synthesize _constraints=__constraints - In the implementation block
@property (nonatomic,readonly) UIButton * _disclosureButton;                                //@synthesize _disclosureButton=__disclosureButton - In the implementation block
@property (nonatomic,readonly) UIView * _leadingSeparator;                                  //@synthesize _leadingSeparator=__leadingSeparator - In the implementation block
@property (nonatomic,readonly) UIView * _trailingSeparator;                                 //@synthesize _trailingSeparator=__trailingSeparator - In the implementation block
@property (nonatomic,readonly) UIFocusGuide * _focusGuide;                                  //@synthesize _focusGuide=__focusGuide - In the implementation block
@property (assign,nonatomic,__weak) id<PXUIWidgetFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * disclosureTitle;                                      //@synthesize disclosureTitle=_disclosureTitle - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                 //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                    //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)_setConstraints:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(BOOL)_hasContent;
-(void)tintColorDidChange;
-(id<PXUIWidgetFooterViewDelegate>)delegate;
-(id)_disclosureButtonCreateIfNeeded:(BOOL)arg1 ;
-(id)_leadingSeparatorCreateIfNeeded:(BOOL)arg1 ;
-(id)_trailingSeparatorCreateIfNeeded:(BOOL)arg1 ;
-(id)_focusGuideCreateIfNeeded:(BOOL)arg1 ;
-(void)_setHasContent:(BOOL)arg1 ;
-(void)_handleDisclosureButton:(id)arg1 ;
-(void)_invalidateHasContent;
-(void)_updateHasContentIfNeeded;
-(void)_invalidateDisclosure;
-(void)_updateDisclosureIfNeeded;
-(void)_invalidateSeparators;
-(void)_updateSeparatorsIfNeeded;
-(void)_invalidateFocusGuide;
-(void)_updateFocusGuideIfNeeded;
-(UIView *)_leadingSeparator;
-(void)setFont:(UIFont *)arg1 ;
-(UIView *)_trailingSeparator;
-(UIFocusGuide *)_focusGuide;
-(UIEdgeInsets)contentInsets;
-(long long)layoutStyle;
-(void)_updateIfNeeded;
-(void)setDelegate:(id<PXUIWidgetFooterViewDelegate>)arg1 ;
-(void)updateConstraints;
-(NSArray *)_constraints;
-(BOOL)_needsUpdate;
-(NSString *)disclosureTitle;
-(void)setDisclosureTitle:(NSString *)arg1 ;
-(void)_setNeedsUpdate;
-(UIButton *)_disclosureButton;
-(void)performChanges:(/*^block*/id)arg1 ;
-(UIFont *)font;
@end

