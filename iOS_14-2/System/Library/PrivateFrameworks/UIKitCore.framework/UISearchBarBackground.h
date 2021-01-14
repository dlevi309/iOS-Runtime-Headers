/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarBackgroundImageView.h>
#import <UIKitCore/_UIBarPositioningInternal.h>

@class UIColor, NSMutableDictionary, UIImage, NSString;

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {

	UIColor* _barTintColor;
	NSMutableDictionary* _customBackgroundImages;
	long long _barPosition;
	unsigned long long _searchBarStyle;
	long long _barStyle;
	long long _barTranslucence;
	BOOL _usesEmbeddedAppearance;
	BOOL _usesContiguousBarBackground;

}

@property (assign,nonatomic) long long barStyle; 
@property (assign,nonatomic) unsigned long long searchBarStyle; 
@property (nonatomic,retain) UIColor * barTintColor;                             //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,nonatomic) BOOL usesEmbeddedAppearance; 
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * backgroundImagePrompt; 
@property (assign,nonatomic) BOOL usesContiguousBarBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)searchBarStyle;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setUsesContiguousBarBackground:(BOOL)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)_barPosition;
-(long long)barStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(UIImage *)backgroundImagePrompt;
-(id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2 ;
-(BOOL)_hasCustomBackgroundImage;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)usesContiguousBarBackground;
-(void)_setBarPosition:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_updateBackgroundImageIfPossible;
-(BOOL)usesEmbeddedAppearance;
-(void)_updateBackgroundImage;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)didMoveToWindow;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(UIImage *)backgroundImage;
-(UIColor *)barTintColor;
@end

