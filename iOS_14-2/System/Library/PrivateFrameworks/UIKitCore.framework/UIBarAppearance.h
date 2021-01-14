/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)backgroundImageContentMode;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)_inlineTabButtonAppearanceData;
-(UIImage *)shadowImage;
-(id)init;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIColor *)shadowColor;
-(UIVibrancyEffect *)shadowEffect;
-(void)_setChangeObserver:(id)arg1 ;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(void)setBackgroundImageContentMode:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_backgroundData;
-(BOOL)_checkEqualTo:(id)arg1 ;
-(id)_barTitleData;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)configureWithDefaultBackground;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIColor *)backgroundColor;
-(id)_stackedTabButtonAppearanceData;
-(long long)idiom;
-(id)_plainButtonAppearanceData;
-(id)description;
-(id)_backButtonAppearance;
-(id)copy;
-(id)_compactInlineTabButtonAppearanceData;
-(id)initWithBarAppearance:(id)arg1 ;
-(void)_describeInto:(id)arg1 ;
-(void)configureWithoutShadow;
-(void)setBackgroundEffect:(UIBlurEffect *)arg1 ;
-(void)setShadowEffect:(UIVibrancyEffect *)arg1 ;
-(void)configureWithDefaultShadow;
-(unsigned long long)hash;
-(id)_doneButtonAppearanceData;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_hashInto:(unsigned long long)arg1 ;
-(id)_backButtonAppearanceData;
-(void)configureWithOpaqueBackground;
-(id)_tabLayoutAppearanceData;
-(UIImage *)backgroundImage;
-(id<_UIBarAppearanceChangeObserver>)_changeObserver;
-(void)_completeInit;
-(id)initWithIdiom:(long long)arg1 ;
-(void)_decodeFromCoder:(id)arg1 ;
-(void)_setupDefaults;
-(NSArray *)backgroundEffects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIBlurEffect *)backgroundEffect;
-(id)_plainButtonAppearance;
-(id)_doneButtonAppearance;
-(BOOL)isEqual:(id)arg1 ;
-(void)_copyFromAppearance:(id)arg1 ;
-(void)configureWithTransparentBackground;
@end

