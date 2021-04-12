/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIBarItem.h>
#import <UIKit/UISpringLoadedInteractionSupporting.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIBarButtonItemViewOwner;
@class NSString, NSSet, UIImage, UIView, _UIBarButtonItemAppearanceStorage, NSArray, NSDictionary, UINavigationItem, UIBarButtonItemGroup, UILayoutGuide, UIToolbarButton, UIColor;

@interface UIBarButtonItem : UIBarItem <UISpringLoadedInteractionSupporting, NSCoding> {

	NSString* _title;
	NSSet* _possibleTitles;
	SEL _action;
	id _target;
	UIImage* _image;
	UIImage* _landscapeImagePhone;
	UIEdgeInsets _imageInsets;
	UIEdgeInsets _landscapeImagePhoneInsets;
	UIEdgeInsets _additionalSelectionInsets;
	double _width;
	UIView* _view;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned isMinibarView : 1;
		unsigned disableAutosizing : 1;
		unsigned selected : 1;
		unsigned imageHasEffects : 1;
		unsigned actsAsFakeBackButton : 1;
		unsigned springLoaded : 1;
		unsigned showsChevron : 1;
		unsigned wantsThreeUp : 1;
	}  _barButtonItemFlags;
	NSArray* _gestureRecognizers;
	NSArray* _interactions;
	BOOL _flexible;
	BOOL __showsBackButtonIndicator;
	BOOL __hidden;
	BOOL __viewWantsLetterpressImage;
	BOOL __needsViewUpdateForLetterpressImage;
	BOOL _groupRepresentative;
	double _toolbarCharge;
	double _minimumWidth;
	double _maximumWidth;
	NSSet* _possibleSystemItems;
	NSDictionary* _stylesForSizingTitles;
	UIBarButtonItem* __itemVariation;
	UINavigationItem* __owningNavigationItem;
	UIBarButtonItemGroup* __owningButtonGroup;
	id<_UIBarButtonItemViewOwner> __viewOwner;
	/*^block*/id __autoValidationHandler;
	UILayoutGuide* __popoverLayoutGuide;
	NSArray* __backButtonAlternateTitles;
	UIBarButtonItemGroup* _buttonGroup;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) UIToolbarButton * _toolbarButton; 
@property (assign,setter=_setWidth:,getter=_width,nonatomic) double _width; 
@property (nonatomic,readonly) BOOL isSystemItem; 
@property (nonatomic,readonly) long long systemItem; 
@property (setter=_setPossibleSystemItems:,getter=_possibleSystemItems,nonatomic,copy) NSSet * possibleSystemItems; 
@property (setter=_setPossibleItemVariations:,nonatomic,copy) NSSet * _possibleItemVariations; 
@property (setter=_setItemVariation:,nonatomic,retain) UIBarButtonItem * _itemVariation; 
@property (assign,nonatomic) BOOL selected; 
@property (assign,setter=_setAdditionalSelectionInsets:,nonatomic) UIEdgeInsets _additionalSelectionInsets; 
@property (assign,setter=_setImageHasEffects:,nonatomic) BOOL _imageHasEffects; 
@property (setter=_setGestureRecognizers:,nonatomic,retain) NSArray * _gestureRecognizers; 
@property (setter=_setInteractions:,nonatomic,retain) NSArray * _interactions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded; 
@property (nonatomic,readonly) BOOL _needsViewUpdateForLetterpressImage; 
@property (setter=_setPossibleSystemItems:,getter=_possibleSystemItems,nonatomic,copy) NSSet * possibleSystemItems;              //@synthesize possibleSystemItems=_possibleSystemItems - In the implementation block
@property (setter=_setItemVariation:,nonatomic,retain) UIBarButtonItem * _itemVariation;                                         //@synthesize _itemVariation=__itemVariation - In the implementation block
@property (setter=_setStylesForSizingTitles:,nonatomic,copy) NSDictionary * _stylesForSizingTitles;                              //@synthesize stylesForSizingTitles=_stylesForSizingTitles - In the implementation block
@property (assign,setter=_setShowsBackButtonIndicator:,nonatomic) BOOL _showsBackButtonIndicator;                                //@synthesize _showsBackButtonIndicator=__showsBackButtonIndicator - In the implementation block
@property (assign,setter=_setHidden:,nonatomic) BOOL _hidden;                                                                    //@synthesize _hidden=__hidden - In the implementation block
@property (assign,setter=_setOwningNavigationItem:,nonatomic,__weak) UINavigationItem * _owningNavigationItem;                   //@synthesize _owningNavigationItem=__owningNavigationItem - In the implementation block
@property (assign,setter=_setOwningButtonGroup:,nonatomic,__weak) UIBarButtonItemGroup * _owningButtonGroup;                     //@synthesize _owningButtonGroup=__owningButtonGroup - In the implementation block
@property (assign,setter=_setViewOwner:,nonatomic,__weak) id<_UIBarButtonItemViewOwner> _viewOwner;                              //@synthesize _viewOwner=__viewOwner - In the implementation block
@property (setter=_setAutoValidationHandler:,nonatomic,copy) id _autoValidationHandler;                                          //@synthesize _autoValidationHandler=__autoValidationHandler - In the implementation block
@property (setter=_setPopoverLayoutGuide:,nonatomic,retain) UILayoutGuide * _popoverLayoutGuide;                                 //@synthesize _popoverLayoutGuide=__popoverLayoutGuide - In the implementation block
@property (setter=_setBackButtonAlternateTitles:,nonatomic,copy) NSArray * _backButtonAlternateTitles;                           //@synthesize _backButtonAlternateTitles=__backButtonAlternateTitles - In the implementation block
@property (assign,setter=_setToolbarCharge:,nonatomic) double _toolbarCharge;                                                    //@synthesize toolbarCharge=_toolbarCharge - In the implementation block
@property (assign,setter=_setMinimumWidth:,nonatomic) double _minimumWidth;                                                      //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,setter=_setMaximumWidth:,nonatomic) double _maximumWidth;                                                      //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,setter=_setFlexible:,nonatomic) BOOL _flexible;                                                                //@synthesize flexible=_flexible - In the implementation block
@property (nonatomic,readonly) BOOL _viewWantsLetterpressImage;                                                                  //@synthesize _viewWantsLetterpressImage=__viewWantsLetterpressImage - In the implementation block
@property (nonatomic,readonly) BOOL _needsViewUpdateForLetterpressImage;                                                         //@synthesize _needsViewUpdateForLetterpressImage=__needsViewUpdateForLetterpressImage - In the implementation block
@property (nonatomic,__weak,readonly) UIBarButtonItemGroup * buttonGroup;                                                        //@synthesize buttonGroup=_buttonGroup - In the implementation block
@property (nonatomic,readonly) BOOL groupRepresentative;                                                                         //@synthesize groupRepresentative=_groupRepresentative - In the implementation block
@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double width; 
@property (nonatomic,copy) NSSet * possibleTitles; 
@property (nonatomic,retain) UIView * customView; 
@property (assign,nonatomic) SEL action;                                                                                         //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id target;                                                                                   //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
+(void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10 ;
+(id)_appearanceBlindViewClasses;
+(Class)classForNavigationButton;
+(Class)classForToolbarButton;
-(BOOL)_doc_isMatchingUUID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isEnabled;
-(SEL)action;
-(double)width;
-(double)_width;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(NSArray *)_interactions;
-(id)view;
-(double)_minimumWidth;
-(void)setView:(id)arg1 ;
-(id)window;
-(id)nextResponder;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(UIEdgeInsets)largeContentSizeImageInsets;
-(id)resolvedTitle;
-(BOOL)isSystemItem;
-(long long)systemItem;
-(id)largeContentSizeImage;
-(UIView *)customView;
-(UIEdgeInsets)imageInsets;
-(id)initWithCustomView:(id)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(BOOL)_hidden;
-(void)_setHidden:(BOOL)arg1 ;
-(BOOL)hasTitle;
-(void)setAction:(SEL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isCustomViewItem;
-(UIBarButtonItemGroup *)buttonGroup;
-(BOOL)selected;
-(id<_UIBarButtonItemViewOwner>)_viewOwner;
-(void)_setViewOwner:(id)arg1 ;
-(void)_executeValidationHandler;
-(void)_setPopoverLayoutGuide:(id)arg1 ;
-(UIEdgeInsets)_additionalSelectionInsets;
-(void)_setAdditionalSelectionInsets:(UIEdgeInsets)arg1 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(id)_imageForState:(unsigned long long)arg1 compact:(BOOL)arg2 type:(long long)arg3 ;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3 ;
-(id)_backgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2 type:(long long)arg3 ;
-(double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(BOOL)_resizesBackgroundImage;
-(UIEdgeInsets)landscapeImagePhoneInsets;
-(double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(NSArray *)_backButtonAlternateTitles;
-(BOOL)_showsChevron;
-(UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(NSArray *)_gestureRecognizers;
-(BOOL)isSpaceItem;
-(BOOL)_wantsThreeUp;
-(BOOL)_flexible;
-(UILayoutGuide *)_popoverLayoutGuide;
-(UIBarButtonItemGroup *)_owningButtonGroup;
-(BOOL)hasImage;
-(void)_setButtonGroup:(id)arg1 isRepresentative:(BOOL)arg2 ;
-(id)_viewForPresenting;
-(BOOL)groupRepresentative;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_appearanceStorage;
-(NSDictionary *)_stylesForSizingTitles;
-(void)_setStylesForSizingTitles:(id)arg1 ;
-(id)_possibleSystemItems;
-(double)_maximumWidth;
-(void)_setToolbarCharge:(double)arg1 ;
-(void)setLandscapeImagePhone:(id)arg1 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateView;
-(void)setLargeContentSizeImage:(id)arg1 ;
-(void)setLargeContentSizeImageInsets:(UIEdgeInsets)arg1 ;
-(void)_setWidth:(double)arg1 ;
-(id)_itemForPresenting;
-(void)setPossibleTitles:(NSSet *)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8 ;
-(void)_getNavBarEdgeSizeAdjust:(CGSize*)arg1 imageInsets:(UIEdgeInsets*)arg2 landscape:(BOOL)arg3 ;
-(void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(UIEdgeInsets*)arg1 forBarStyle:(long long)arg2 landscape:(BOOL)arg3 alwaysBordered:(BOOL)arg4 ;
-(UINavigationItem *)_owningNavigationItem;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_applyPositionAdjustmentToSegmentedControl:(id)arg1 ;
-(id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)landscapeImagePhone;
-(void)setLandscapeImagePhoneInsets:(UIEdgeInsets)arg1 ;
-(CGRect)_rectForPresenting;
-(void)_setPossibleItemVariations:(id)arg1 ;
-(NSSet *)_possibleItemVariations;
-(void)_setItemVariation:(id)arg1 ;
-(id)itemVariation;
-(NSSet *)possibleTitles;
-(void)_setSystemItem:(long long)arg1 ;
-(void)_setShowsBackButtonIndicator:(BOOL)arg1 ;
-(void)_setPossibleSystemItems:(id)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(double)_toolbarCharge;
-(void)_setMinimumWidth:(double)arg1 ;
-(void)_setMaximumWidth:(double)arg1 ;
-(void)_setFlexible:(BOOL)arg1 ;
-(UIBarButtonItem *)_itemVariation;
-(BOOL)_showsBackButtonIndicator;
-(void)_setOwningNavigationItem:(id)arg1 ;
-(void)_setOwningButtonGroup:(id)arg1 ;
-(id)_autoValidationHandler;
-(void)_setAutoValidationHandler:(/*^block*/id)arg1 ;
-(void)_setBackButtonAlternateTitles:(id)arg1 ;
-(BOOL)_viewWantsLetterpressImage;
-(BOOL)_needsViewUpdateForLetterpressImage;
-(BOOL)_shouldBezelSystemButtonImage;
-(void)_setEnclosingBar:(id)arg1 onItem:(id)arg2 ;
-(BOOL)_imageHasEffects;
-(void)_setWantsThreeUp:(BOOL)arg1 ;
-(id)_miniImage;
-(void)_setMiniImage:(id)arg1 ;
-(UIEdgeInsets)_miniImageInsets;
-(void)_setMiniImageInsets:(UIEdgeInsets)arg1 ;
-(UIToolbarButton *)_toolbarButton;
-(void)_setImageHasEffects:(BOOL)arg1 ;
-(id)_foregroundColorForLetterpressWithView:(id)arg1 ;
-(id)createViewForNavigationItem:(id)arg1 ;
-(id)createViewForToolbar:(id)arg1 ;
-(void)_setGestureRecognizers:(id)arg1 ;
-(void)_setInteractions:(id)arg1 ;
-(BOOL)isMinibarView;
-(void)setIsMinibarView:(BOOL)arg1 ;
-(BOOL)_actsAsFakeBackButton;
-(void)_setActsAsFakeBackButton:(BOOL)arg1 ;
-(void)_setShowsChevron:(BOOL)arg1 ;
-(BOOL)_isImageBarButtonItem;
-(double)_leftImagePaddingForEdgeMarginInNavBar;
-(double)_rightImagePaddingForEdgeMarginInNavBar;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
@end

