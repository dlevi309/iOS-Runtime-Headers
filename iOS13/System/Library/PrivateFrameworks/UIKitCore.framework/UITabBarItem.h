/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIBarItem.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver.h>

@class NSString, UIImage, UITabBarButton, _UITabBarItemAppearanceStorage, UITabBarAppearance, UIColor;

@interface UITabBarItem : UIBarItem <_UIBarAppearanceChangeObserver> {

	NSString* _title;
	SEL _action;
	id _target;
	UIImage* _templateImage;
	UIImage* _selectedTemplateImage;
	UIImage* _selectedImage;
	UIImage* _unselectedImage;
	UIEdgeInsets _imageInsets;
	UIImage* _landscapeTemplateImage;
	UIImage* _landscapeSelectedTemplateImage;
	UIImage* _landscapeSelectedImage;
	UIEdgeInsets _landscapeImageInsets;
	NSString* _badgeValue;
	UITabBarButton* _view;
	_UITabBarItemAppearanceStorage* _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	}  _tabBarItemFlags;
	BOOL _springLoaded;
	UIOffset _badgeOffset;
	UITabBarAppearance* _standardAppearance;
	long long __barMetrics;
	long long __imageStyle;
	UIColor* __tintColor;

}

@property (assign,setter=_setBarMetrics:,nonatomic) long long _barMetrics;                        //@synthesize _barMetrics=__barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) long long _imageStyle;                        //@synthesize _imageStyle=__imageStyle - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                          //@synthesize _tintColor=__tintColor - In the implementation block
@property (assign,setter=_setSelected:,getter=_isSelected,nonatomic) BOOL _selected; 
@property (nonatomic,readonly) UIImage * _internalLandscapeSelectedImagePhone; 
@property (nonatomic,retain) UIImage * landscapeSelectedImagePhone; 
@property (assign,nonatomic) UIOffset badgeOffset; 
@property (assign,nonatomic) UIOffset landscapePhoneBadgeOffset; 
@property (nonatomic,retain) UIImage * selectedImage; 
@property (nonatomic,copy) NSString * badgeValue;                                                 //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,copy) UIColor * badgeColor; 
@property (nonatomic,copy) UITabBarAppearance * standardAppearance;                               //@synthesize standardAppearance=_standardAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_appearanceBlindViewClasses;
-(id)init;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(BOOL)isEnabled;
-(SEL)action;
-(id)image;
-(void)setImage:(id)arg1 ;
-(BOOL)_isSelected;
-(id)view;
-(void)setView:(id)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(id)_internalTitle;
-(id)_internalLargeContentSizeImage;
-(UIEdgeInsets)largeContentSizeImageInsets;
-(id)_internalTemplateImage;
-(id)resolvedTitle;
-(BOOL)isSystemItem;
-(long long)systemItem;
-(id)largeContentSizeImage;
-(UIEdgeInsets)imageInsets;
-(UIColor *)_tintColor;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(BOOL)hasTitle;
-(void)setAction:(SEL)arg1 ;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(UIEdgeInsets)landscapeImagePhoneInsets;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTintColor:(id)arg1 ;
-(void)setLandscapeImagePhone:(id)arg1 ;
-(void)_updateView;
-(void)setLargeContentSizeImage:(id)arg1 ;
-(void)setLargeContentSizeImageInsets:(UIEdgeInsets)arg1 ;
-(id)landscapeImagePhone;
-(void)setLandscapeImagePhoneInsets:(UIEdgeInsets)arg1 ;
-(UITabBarAppearance *)standardAppearance;
-(void)setStandardAppearance:(UITabBarAppearance *)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(long long)_barMetrics;
-(id)_createViewForTabBar:(id)arg1 asProxyView:(BOOL)arg2 ;
-(void)_setSelected:(BOOL)arg1 ;
-(void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3 ;
-(void)_setBarMetrics:(long long)arg1 ;
-(void)_setImageStyle:(long long)arg1 ;
-(void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2 ;
-(long long)_imageStyle;
-(void)_updateToMatchCurrentState;
-(id)_internalTemplateImagesForTabBarDisplayStyle:(long long)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(UIColor *)badgeColor;
-(void)_setInternalTitle:(id)arg1 ;
-(void)_setInternalTemplateImage:(id)arg1 ;
-(void)_setInternalLandscapeTemplateImage:(id)arg1 ;
-(id)_internalTemplateImages;
-(id)_internalLandscapeTemplateImages;
-(id)badgeTextAttributesForState:(unsigned long long)arg1 ;
-(void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_internalTitleForTabBarDisplayStyle:(long long)arg1 ;
-(id)unselectedImage;
-(UIImage *)selectedImage;
-(UIImage *)landscapeSelectedImagePhone;
-(UIOffset)badgeOffset;
-(void)_updateViewBadge;
-(void)_updateViewAndPositionItems:(BOOL)arg1 ;
-(void)setBadgeOffset:(UIOffset)arg1 ;
-(void)setLandscapePhoneBadgeOffset:(UIOffset)arg1 ;
-(UIOffset)landscapePhoneBadgeOffset;
-(id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 ;
-(id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2 ;
-(void)setBadgeValue:(NSString *)arg1 ;
-(UIImage *)_internalLandscapeSelectedImagePhone;
-(void)setLandscapeSelectedImagePhone:(UIImage *)arg1 ;
-(void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2 ;
-(id)finishedSelectedImage;
-(id)finishedUnselectedImage;
-(void)setAnimatedBadge:(BOOL)arg1 ;
-(BOOL)animatedBadge;
-(void)setUnselectedImage:(id)arg1 ;
-(id)_internalLandscapeTemplateImage;
-(NSString *)badgeValue;
@end

