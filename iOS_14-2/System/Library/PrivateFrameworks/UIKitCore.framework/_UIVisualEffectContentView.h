/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectSubview.h>

@interface _UIVisualEffectContentView : _UIVisualEffectSubview {

	BOOL _disableGroupFiltering;
	BOOL _currentlyDisplayingRequestedEffects;

}
-(void)willRemoveSubview:(id)arg1 ;
-(void)setFilters:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)applyIdentityFilterEffects;
-(void)applyRequestedFilterEffects;
-(void)setDisableGroupFiltering:(BOOL)arg1 ;
-(id)description;
-(void)didAddSubview:(id)arg1 ;
-(BOOL)disableGroupFiltering;
@end

