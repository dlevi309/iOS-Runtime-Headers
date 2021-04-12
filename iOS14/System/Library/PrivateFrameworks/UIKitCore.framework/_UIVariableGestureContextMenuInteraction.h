/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIContextMenuInteraction.h>

@interface _UIVariableGestureContextMenuInteraction : UIContextMenuInteraction {

	SCD_Struct_UI34 _flags;
	BOOL __prefersCompactAppearance;
	id __proxySender;

}

@property (assign,setter=_setProxySender:,nonatomic,__weak) id _proxySender;                                   //@synthesize _proxySender=__proxySender - In the implementation block
@property (assign,setter=_setPresentOnTouchDown:,nonatomic) BOOL _presentOnTouchDown; 
@property (assign,setter=_setPrefersCompactAppearance:,nonatomic) BOOL _prefersCompactAppearance;              //@synthesize _prefersCompactAppearance=__prefersCompactAppearance - In the implementation block
-(void)_setPrefersCompactAppearance:(BOOL)arg1 ;
-(void)_setProxySender:(id)arg1 ;
-(BOOL)_prefersCompactAppearance;
-(BOOL)_presentOnTouchDown;
-(id)_proxySender;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_clickPresentationInteractionShouldPlayFeedback:(id)arg1 ;
-(id)_interactionDrivers;
-(void)_setPresentOnTouchDown:(BOOL)arg1 ;
-(long long)menuAppearance;
-(void)_willBeginWithConfiguration:(id)arg1 ;
@end

