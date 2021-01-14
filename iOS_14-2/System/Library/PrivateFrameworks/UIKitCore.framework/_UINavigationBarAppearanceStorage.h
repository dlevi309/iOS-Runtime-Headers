/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBarAppearanceStorage.h>

@class NSDictionary, NSMutableDictionary, UIImage, NSNumber, _UIBarButtonItemAppearanceStorage, NSString;

@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage {

	NSDictionary* textAttributes;
	NSMutableDictionary* titleVerticalAdjustmentsForBarMetrics;
	UIImage* shadowImage;
	BOOL hidesShadow;
	long long barMetrics;
	UIImage* backIndicatorImage;
	UIImage* backIndicatorTransitionMaskImage;
	NSNumber* backIndicatorLeftMargin;
	BOOL reversesShadowOffset;
	_UIBarButtonItemAppearanceStorage* buttonAppearanceStorage;
	BOOL _deferShadowToSearchBar;
	long long defaultBarMetrics;
	long long activeBarMetrics;
	NSString* _backdropViewGroupName;

}

@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * miniBackgroundImage; 
@property (nonatomic,readonly) UIImage * promptBackgroundImage; 
@property (nonatomic,readonly) UIImage * miniPromptBackgroundImage; 
@property (nonatomic,copy) NSDictionary * textAttributes; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (assign,nonatomic) BOOL hidesShadow; 
@property (assign,nonatomic) long long defaultBarMetrics; 
@property (assign,nonatomic) long long activeBarMetrics; 
@property (assign,nonatomic) BOOL reversesShadowOffset; 
@property (nonatomic,readonly) _UIBarButtonItemAppearanceStorage * barButtonAppearanceStorage; 
@property (nonatomic,readonly) _UIBarButtonItemAppearanceStorage * _barButtonAppearanceStorage; 
@property (assign,nonatomic) BOOL deferShadowToSearchBar;                                                    //@synthesize deferShadowToSearchBar=_deferShadowToSearchBar - In the implementation block
@property (nonatomic,retain) UIImage * backIndicatorImage; 
@property (nonatomic,retain) UIImage * backIndicatorTransitionMaskImage; 
@property (nonatomic,retain) NSNumber * backIndicatorLeftMargin; 
@property (nonatomic,retain) NSString * backdropViewGroupName;                                               //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
+(long long)typicalBarPosition;
-(void)setBackIndicatorImage:(UIImage *)arg1 ;
-(void)setHidesShadow:(BOOL)arg1 ;
-(void)setTitleVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(long long)activeBarMetrics;
-(UIImage *)backIndicatorTransitionMaskImage;
-(BOOL)reversesShadowOffset;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImage *)miniPromptBackgroundImage;
-(_UIBarButtonItemAppearanceStorage *)_barButtonAppearanceStorage;
-(NSDictionary *)textAttributes;
-(UIImage *)miniBackgroundImage;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(BOOL)hidesShadow;
-(UIImage *)backIndicatorImage;
-(void)setReversesShadowOffset:(BOOL)arg1 ;
-(void)setBackIndicatorTransitionMaskImage:(UIImage *)arg1 ;
-(void)setActiveBarMetrics:(long long)arg1 ;
-(double)titleVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(NSString *)backdropViewGroupName;
-(UIImage *)backgroundImage;
-(_UIBarButtonItemAppearanceStorage *)barButtonAppearanceStorage;
-(long long)defaultBarMetrics;
-(UIImage *)promptBackgroundImage;
-(void)setDefaultBarMetrics:(long long)arg1 ;
-(BOOL)deferShadowToSearchBar;
-(NSNumber *)backIndicatorLeftMargin;
-(void)setBackIndicatorLeftMargin:(NSNumber *)arg1 ;
-(void)setDeferShadowToSearchBar:(BOOL)arg1 ;
-(id)representativeImageForIdiom:(long long)arg1 ;
@end

