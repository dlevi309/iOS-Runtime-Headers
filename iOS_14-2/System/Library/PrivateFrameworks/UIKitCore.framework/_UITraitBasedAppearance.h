/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIAppearance.h>

@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance {

	UITraitCollection* _traitCollection;

}
+(BOOL)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3 ;
+(void)_setHasAnyCustomizations;
+(id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
+(BOOL)_hasAnyCustomizations;
-(id)_traitCollection;
-(void)_invalidateAppearanceInWindow:(id)arg1 ;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(void)dealloc;
@end

