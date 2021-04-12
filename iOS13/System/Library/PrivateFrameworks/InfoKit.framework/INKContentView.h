/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InfoKit.framework/InfoKit
*/

#import <InfoKit/InfoKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol INKContentViewDelegate;
@class UITraitCollection, NSString, NSBundle, UIView, NSLayoutConstraint, NSArray, INKContent;

@interface INKContentView : UIView {

	BOOL _windowShownDelayInProgress;
	BOOL _isPartOfWindow;
	UITraitCollection* __preferredTraitCollection;
	long long __cacheHorizontalSizeClass;
	NSString* __cacheContentSizeCategory;
	NSBundle* __frameworkBundle;
	UIView* __contentView;
	UIView* __bottomSeparatorView;
	NSLayoutConstraint* __bottomSeparatorHeightConstraint;
	NSLayoutConstraint* __contentViewBottomConstraint;
	NSArray* _compactSizeClassHorizontalConstraints;
	NSArray* _regularSizeClassHorizontalConstraints;
	BOOL _displaysBottomSeparator;
	BOOL __accessbilitySizeCategory;
	INKContent* _content;
	id<INKContentViewDelegate> __delegate;
	UIEdgeInsets _contentInsets;

}

@property (assign,getter=_isAccessbilitySizeCategory,nonatomic) BOOL _accessbilitySizeCategory;              //@synthesize _accessbilitySizeCategory=__accessbilitySizeCategory - In the implementation block
@property (assign,nonatomic,__weak) id<INKContentViewDelegate> _delegate;                                    //@synthesize _delegate=__delegate - In the implementation block
@property (nonatomic,copy) UIView * _contentView;                                                            //@synthesize _contentView=__contentView - In the implementation block
@property (nonatomic,copy) NSBundle * _frameworkBundle;                                                      //@synthesize _frameworkBundle=__frameworkBundle - In the implementation block
@property (nonatomic,copy) INKContent * content;                                                             //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) BOOL displaysBottomSeparator;                                                   //@synthesize displaysBottomSeparator=_displaysBottomSeparator - In the implementation block
-(id)init;
-(void)dealloc;
-(id<INKContentViewDelegate>)_delegate;
-(INKContent *)content;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_preferredTraitCollection;
-(UIView *)_contentView;
-(void)updateConstraints;
-(UIEdgeInsets)contentInsets;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)set_delegate:(id<INKContentViewDelegate>)arg1 ;
-(void)setContent:(INKContent *)arg1 ;
-(void)setDisplaysBottomSeparator:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(id)_currentContentSizeCategory;
-(NSBundle *)_frameworkBundle;
-(void)cancelContentDisplayDelay;
-(void)updateHorizontalContraints;
-(BOOL)_isHorizontalSizeClassChanged:(id)arg1 ;
-(BOOL)_isAccessibilitySizeCategoryChanged;
-(void)_accessibilitySizeCategoryDidChange;
-(BOOL)_isContentSizeAccessibilityCategory;
-(void)contentDisplayDelay;
-(id)_initWithContent:(id)arg1 ;
-(void)_setPreferredTraitCollection:(id)arg1 ;
-(BOOL)_isContentSizeCategoryChanged;
-(BOOL)displaysBottomSeparator;
-(BOOL)_isAccessbilitySizeCategory;
-(void)set_accessbilitySizeCategory:(BOOL)arg1 ;
-(void)set_contentView:(UIView *)arg1 ;
-(void)set_frameworkBundle:(NSBundle *)arg1 ;
@end

