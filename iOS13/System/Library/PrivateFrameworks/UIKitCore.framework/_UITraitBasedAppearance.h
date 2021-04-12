/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIAppearance.h>

@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance {

	UITraitCollection* _traitCollection;

}
+(BOOL)_hasAnyCustomizations;
+(void)_setHasAnyCustomizations;
+(BOOL)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3 ;
+(id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
-(void)dealloc;
-(id)_traitCollection;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(void)_invalidateAppearanceInWindow:(id)arg1 ;
@end

