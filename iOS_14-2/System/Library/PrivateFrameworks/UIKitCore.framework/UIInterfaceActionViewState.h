/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionVisualStyleViewState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIInterfaceAction;

@interface UIInterfaceActionViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {

	BOOL _isHighlighted;
	BOOL _isPressed;
	BOOL _isFocused;
	BOOL _isPreferred;
	UIInterfaceAction* _action;
	id _actionViewStateContext;
	unsigned long long _visualCornerPosition;

}

@property (nonatomic,readonly) UIInterfaceAction * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL isHighlighted;                                   //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (nonatomic,readonly) BOOL isPressed;                                       //@synthesize isPressed=_isPressed - In the implementation block
@property (nonatomic,readonly) BOOL isFocused;                                       //@synthesize isFocused=_isFocused - In the implementation block
@property (nonatomic,readonly) BOOL isPreferred;                                     //@synthesize isPreferred=_isPreferred - In the implementation block
@property (nonatomic,readonly) id actionViewStateContext;                            //@synthesize actionViewStateContext=_actionViewStateContext - In the implementation block
@property (nonatomic,readonly) unsigned long long visualCornerPosition;              //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
+(id)viewStateForActionRepresentationViewDescendantView:(id)arg1 action:(id)arg2 ;
+(id)viewStateRepresentingDefaultAction;
+(id)_nullViewStateForActionType:(long long)arg1 ;
+(id)viewStateForActionRepresentationView:(id)arg1 action:(id)arg2 ;
+(id)viewStateRepresentingPreferredAction;
+(id)viewStateForAlertControllerActionView:(id)arg1 ;
-(id)initWithPropertiesFromActionRepresentationView:(id)arg1 groupView:(id)arg2 action:(id)arg3 ;
-(unsigned long long)visualCornerPosition;
-(BOOL)isPreferred;
-(id)actionViewStateContext;
-(UIInterfaceAction *)action;
-(void)_collectStateFromActionRepresentationView:(id)arg1 ;
-(BOOL)isFocused;
-(BOOL)isHighlighted;
-(BOOL)isPressed;
-(BOOL)_stateEqualToActionViewState:(id)arg1 ;
-(void)_collectStateForDefaultState;
-(void)_collectStateFromAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_collectStateFromActionViewState:(id)arg1 ;
@end

