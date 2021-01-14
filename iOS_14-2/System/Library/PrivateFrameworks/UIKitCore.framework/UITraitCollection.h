/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFallbackEnvironment.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSObject, NSString;

@interface UITraitCollection : NSObject <_UIFallbackEnvironment, NSCopying, NSSecureCoding> {

	SCD_Struct_UI89 _builtinTraits;
	NSDictionary* _clientDefinedTraits;
	NSObject* _environmentWrapper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL _isLargeContentViewerEnabled; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) long long layoutDirection; 
@property (nonatomic,readonly) double displayScale; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) long long forceTouchCapability; 
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory; 
@property (nonatomic,readonly) long long displayGamut; 
@property (nonatomic,readonly) long long accessibilityContrast; 
@property (nonatomic,readonly) long long userInterfaceLevel; 
@property (nonatomic,readonly) long long legibilityWeight; 
@property (nonatomic,readonly) long long activeAppearance; 
+(BOOL)supportsSecureCoding;
+(id)_descriptionForChangeFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
+(id)traitCollectionWithPreferredContentSizeCategory:(id)arg1 ;
+(id)traitCollectionWithTraitsFromCollections:(id)arg1 ;
+(id)traitCollectionWithUserInterfaceIdiom:(long long)arg1 ;
+(id)traitCollectionWithUserInterfaceStyle:(long long)arg1 ;
+(id)traitCollectionWithActiveAppearance:(long long)arg1 ;
+(id)currentTraitCollection;
+(id)traitCollectionWithUserInterfaceLevel:(long long)arg1 ;
+(id)traitCollectionWithDisplayGamut:(long long)arg1 ;
+(void)setCurrentTraitCollection:(id)arg1 ;
+(id)traitCollectionWithLayoutDirection:(long long)arg1 ;
+(id)traitCollectionWithDisplayCornerRadius:(double)arg1 ;
+(id)traitCollectionWithLegibilityWeight:(long long)arg1 ;
+(id)_currentTraitCollection;
+(id)_traitCollectionWithUserInterfaceActiveAppearance:(long long)arg1 ;
+(id)traitCollectionWithTouchLevel:(long long)arg1 ;
+(id)_traitCollectionWithContrast:(long long)arg1 ;
+(id)traitCollectionWithInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithHorizontalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithVerticalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithArtworkSubtype:(unsigned long long)arg1 ;
+(id)_traitCollectionWithPresentationSemanticContext:(long long)arg1 ;
+(id)_traitCollectionForSidebarAppearance;
+(id)_traitCollectionWithBackgroundLevel:(long long)arg1 ;
+(id)_traitCollectionWithEnvironmentWrapper:(id)arg1 ;
+(id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2 ;
+(id)traitCollectionWithAccessibilityContrast:(long long)arg1 ;
+(id)_traitCollectionWithVibrancy:(long long)arg1 ;
+(id)_traitCollectionWithSplitViewControllerContext:(long long)arg1 ;
+(id)traitCollectionWithDisplayScale:(double)arg1 ;
+(void)_setCurrentTraitCollection:(id)arg1 ;
+(id)traitCollectionWithForceTouchCapability:(long long)arg1 ;
-(long long)_compare:(id)arg1 ;
-(long long)userInterfaceIdiom;
-(long long)legibilityWeight;
-(double)displayScale;
-(long long)userInterfaceStyle;
-(id)_description;
-(id)init;
-(BOOL)hasDifferentColorAppearanceComparedToTraitCollection:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)_vibrancy;
-(id)imageConfiguration;
-(long long)forceTouchCapability;
-(long long)_contrast;
-(long long)userInterfaceLevel;
-(long long)activeAppearance;
-(long long)accessibilityContrast;
-(NSString *)description;
-(NSString *)preferredContentSizeCategory;
-(long long)verticalSizeClass;
-(double)displayCornerRadius;
-(long long)displayGamut;
-(BOOL)_hasSplitViewControllerContextPrimaryColumn;
-(long long)_backgroundLevel;
-(id)_valueForTraitNamed:(id)arg1 ;
-(id)_environmentWrapper;
-(id)_traitsDescription;
-(id)_traitNamesForUnspecifiedBuiltInTraits;
-(long long)_userInterfaceActiveAppearance;
-(BOOL)_hasSplitViewControllerContextSidebarColumn;
-(void)performAsCurrentTraitCollection:(/*^block*/id)arg1 ;
-(id)_fallbackTraitCollection;
-(unsigned long long)hash;
-(long long)touchLevel;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)primaryInteractionModel;
-(long long)_splitViewControllerContext;
-(long long)horizontalSizeClass;
-(unsigned long long)interactionModel;
-(BOOL)_isLargeContentViewerEnabled;
-(long long)_presentationSemanticContext;
-(BOOL)containsTraitsInCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)artworkSubtype;
-(long long)layoutDirection;
-(id)_namedImageDescription;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

