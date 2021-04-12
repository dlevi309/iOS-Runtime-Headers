/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol _UIBarAppearanceChangeObserver;
@class _UIBarBackgroundAppearanceData, NSArray, UIVibrancyEffect, UIBlurEffect, UIColor, UIImage;

@interface UIBarAppearance : NSObject <NSCopying, NSSecureCoding> {

	long long _idiom;
	id<_UIBarAppearanceChangeObserver> _changeObserver;
	_UIBarBackgroundAppearanceData* _backgroundData;

}

@property (assign,setter=_setChangeObserver:,nonatomic,__weak) id<_UIBarAppearanceChangeObserver> _changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,copy) NSArray * backgroundEffects; 
@property (nonatomic,copy) UIVibrancyEffect * shadowEffect; 
@property (nonatomic,readonly) long long idiom;                                                                                 //@synthesize idiom=_idiom - In the implementation block
@property (nonatomic,copy) UIBlurEffect * backgroundEffect; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (assign,nonatomic) long long backgroundImageContentMode; 
@property (nonatomic,copy) UIColor * shadowColor; 
@property (nonatomic,retain) UIImage * shadowImage; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(NSArray *)backgroundEffects;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)initWithIdiom:(long long)arg1 ;
-(void)_setupDefaults;
-(void)_completeInit;
-(void)_copyFromAppearance:(id)arg1 ;
-(unsigned long long)_hashInto:(unsigned long long)arg1 ;
-(BOOL)_checkEqualTo:(id)arg1 ;
-(void)_describeInto:(id)arg1 ;
-(id)initWithBarAppearance:(id)arg1 ;
-(void)_decodeFromCoder:(id)arg1 ;
-(id)_backgroundData;
-(UIBlurEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIBlurEffect *)arg1 ;
-(long long)backgroundImageContentMode;
-(void)setBackgroundImageContentMode:(long long)arg1 ;
-(void)configureWithDefaultShadow;
-(void)configureWithoutShadow;
-(UIVibrancyEffect *)shadowEffect;
-(void)setShadowEffect:(UIVibrancyEffect *)arg1 ;
-(id)_barTitleData;
-(id)_backButtonAppearanceData;
-(id)_plainButtonAppearanceData;
-(id)_doneButtonAppearanceData;
-(id)_stackedTabButtonAppearanceData;
-(id)_inlineTabButtonAppearanceData;
-(id)_compactInlineTabButtonAppearanceData;
-(id)_tabLayoutAppearanceData;
-(id)_backButtonAppearance;
-(id)_plainButtonAppearance;
-(id)_doneButtonAppearance;
-(void)configureWithDefaultBackground;
-(void)configureWithOpaqueBackground;
-(void)configureWithTransparentBackground;
-(id<_UIBarAppearanceChangeObserver>)_changeObserver;
-(void)_setChangeObserver:(id)arg1 ;
-(long long)idiom;
@end

