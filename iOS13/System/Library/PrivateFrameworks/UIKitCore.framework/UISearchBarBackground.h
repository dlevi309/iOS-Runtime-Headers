/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)backgroundImage;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(long long)_barPosition;
-(BOOL)isTranslucent;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)_setBarPosition:(long long)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(BOOL)usesEmbeddedAppearance;
-(unsigned long long)searchBarStyle;
-(void)_updateBackgroundImageIfPossible;
-(BOOL)_hasCustomBackgroundImage;
-(id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2 ;
-(void)_updateBackgroundImage;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIImage *)backgroundImagePrompt;
-(void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setUsesContiguousBarBackground:(BOOL)arg1 ;
-(BOOL)usesContiguousBarBackground;
@end

