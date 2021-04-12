/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectSubview.h>

@interface _UIVisualEffectContentView : _UIVisualEffectSubview {

	BOOL _disableGroupFiltering;
	BOOL _currentlyDisplayingRequestedEffects;

}
-(id)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFilters:(id)arg1 ;
-(void)applyRequestedFilterEffects;
-(void)applyIdentityFilterEffects;
-(BOOL)disableGroupFiltering;
-(void)setDisableGroupFiltering:(BOOL)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
@end

