/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(BOOL)_isSelected;
-(void)_setTintColor:(id)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setImage:(id)arg1 ;
-(id)init;
-(BOOL)hasTitle;
-(UIColor *)_tintColor;
-(void)_updateView;
-(void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3 ;
-(void)setTitle:(id)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(id)image;
-(void)setView:(id)arg1 ;
-(id)_internalTemplateImagesForTabBarDisplayStyle:(long long)arg1 ;
-(UIEdgeInsets)imageInsets;
-(BOOL)isSystemItem;
-(void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2 ;
-(NSString *)description;
-(long long)systemItem;
-(void)_updateToMatchCurrentState;
-(void)_setInternalTitle:(id)arg1 ;
-(void)setAnimatedBadge:(BOOL)arg1 ;
-(id)view;
-(void)_setInternalTemplateImage:(id)arg1 ;
-(void)_setInternalLandscapeTemplateImage:(id)arg1 ;
-(id)_internalLargeContentSizeImage;
-(id)_internalTemplateImages;
-(id)_internalLandscapeTemplateImages;
-(id)_internalTitleForTabBarDisplayStyle:(long long)arg1 ;
-(UIImage *)landscapeSelectedImagePhone;
-(void)_updateViewAndPositionItems:(BOOL)arg1 ;
-(void)setLandscapePhoneBadgeOffset:(UIOffset)arg1 ;
-(UIOffset)landscapePhoneBadgeOffset;
-(UIColor *)badgeColor;
-(id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 ;
-(id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2 ;
-(UIImage *)_internalLandscapeSelectedImagePhone;
-(void)setLandscapeSelectedImagePhone:(UIImage *)arg1 ;
-(id)finishedSelectedImage;
-(id)finishedUnselectedImage;
-(void)setUnselectedImage:(id)arg1 ;
-(id)_internalLandscapeTemplateImage;
-(long long)_barMetrics;
-(long long)_imageStyle;
-(UIOffset)badgeOffset;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(id)_internalTitle;
-(UIEdgeInsets)largeContentSizeImageInsets;
-(BOOL)isSpringLoaded;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLargeContentSizeImage:(id)arg1 ;
-(id)largeContentSizeImage;
-(void)setLargeContentSizeImageInsets:(UIEdgeInsets)arg1 ;
-(void)_setBarMetrics:(long long)arg1 ;
-(id)landscapeImagePhone;
-(void)setLandscapeImagePhoneInsets:(UIEdgeInsets)arg1 ;
-(void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)resolvedTitle;
-(void)_setImageStyle:(long long)arg1 ;
-(id)_internalTemplateImage;
-(id)badgeTextAttributesForState:(unsigned long long)arg1 ;
-(id)_createViewForTabBar:(id)arg1 asProxyView:(BOOL)arg2 ;
-(void)_setSelected:(BOOL)arg1 ;
-(id)target;
-(BOOL)isEnabled;
-(UIImage *)selectedImage;
-(BOOL)animatedBadge;
-(UITabBarAppearance *)standardAppearance;
-(void)setStandardAppearance:(UITabBarAppearance *)arg1 ;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(UIEdgeInsets)landscapeImagePhoneInsets;
-(id)unselectedImage;
-(void)setBadgeOffset:(UIOffset)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_updateViewBadge;
-(id)title;
-(void)setLandscapeImagePhone:(id)arg1 ;
@end

