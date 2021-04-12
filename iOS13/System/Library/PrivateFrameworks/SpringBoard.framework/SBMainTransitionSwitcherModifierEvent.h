/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifierEvent.h>

@class SBAppLayout, NSString, SBApplicationSceneEntityDestructionIntent;

@interface SBMainTransitionSwitcherModifierEvent : SBTransitionSwitcherModifierEvent {

	BOOL _fromAppLayoutWantsExclusiveForeground;
	BOOL _toAppLayoutWantsExclusiveForeground;
	BOOL _fromFloatingSwitcherVisible;
	BOOL _toFloatingSwitcherVisible;
	BOOL _gestureInitiated;
	BOOL _dragAndDropTransition;
	BOOL _breadcrumbTransition;
	BOOL _inlineAppExposeTransition;
	BOOL _morphToPiPTransition;
	BOOL _continuityTransition;
	SBAppLayout* _fromFloatingAppLayout;
	long long _fromFloatingConfiguration;
	SBAppLayout* _toFloatingAppLayout;
	long long _toFloatingConfiguration;
	NSString* _fromAppExposeBundleID;
	NSString* _toAppExposeBundleID;
	SBApplicationSceneEntityDestructionIntent* _intentForEntityRemoval;
	unsigned long long _fromInlineAppExposeRoles;
	unsigned long long _toInlineAppExposeRoles;

}

@property (assign,nonatomic) BOOL fromAppLayoutWantsExclusiveForeground;                                      //@synthesize fromAppLayoutWantsExclusiveForeground=_fromAppLayoutWantsExclusiveForeground - In the implementation block
@property (assign,nonatomic) BOOL toAppLayoutWantsExclusiveForeground;                                        //@synthesize toAppLayoutWantsExclusiveForeground=_toAppLayoutWantsExclusiveForeground - In the implementation block
@property (nonatomic,retain) SBAppLayout * fromFloatingAppLayout;                                             //@synthesize fromFloatingAppLayout=_fromFloatingAppLayout - In the implementation block
@property (assign,nonatomic) long long fromFloatingConfiguration;                                             //@synthesize fromFloatingConfiguration=_fromFloatingConfiguration - In the implementation block
@property (assign,nonatomic) BOOL fromFloatingSwitcherVisible;                                                //@synthesize fromFloatingSwitcherVisible=_fromFloatingSwitcherVisible - In the implementation block
@property (nonatomic,retain) SBAppLayout * toFloatingAppLayout;                                               //@synthesize toFloatingAppLayout=_toFloatingAppLayout - In the implementation block
@property (assign,nonatomic) long long toFloatingConfiguration;                                               //@synthesize toFloatingConfiguration=_toFloatingConfiguration - In the implementation block
@property (assign,nonatomic) BOOL toFloatingSwitcherVisible;                                                  //@synthesize toFloatingSwitcherVisible=_toFloatingSwitcherVisible - In the implementation block
@property (nonatomic,copy) NSString * fromAppExposeBundleID;                                                  //@synthesize fromAppExposeBundleID=_fromAppExposeBundleID - In the implementation block
@property (nonatomic,copy) NSString * toAppExposeBundleID;                                                    //@synthesize toAppExposeBundleID=_toAppExposeBundleID - In the implementation block
@property (nonatomic,retain) SBApplicationSceneEntityDestructionIntent * intentForEntityRemoval;              //@synthesize intentForEntityRemoval=_intentForEntityRemoval - In the implementation block
@property (assign,nonatomic) unsigned long long fromInlineAppExposeRoles;                                     //@synthesize fromInlineAppExposeRoles=_fromInlineAppExposeRoles - In the implementation block
@property (assign,nonatomic) unsigned long long toInlineAppExposeRoles;                                       //@synthesize toInlineAppExposeRoles=_toInlineAppExposeRoles - In the implementation block
@property (assign,getter=isGestureInitiated,nonatomic) BOOL gestureInitiated;                                 //@synthesize gestureInitiated=_gestureInitiated - In the implementation block
@property (assign,getter=isDragAndDropTransition,nonatomic) BOOL dragAndDropTransition;                       //@synthesize dragAndDropTransition=_dragAndDropTransition - In the implementation block
@property (assign,getter=isBreadcrumbTransition,nonatomic) BOOL breadcrumbTransition;                         //@synthesize breadcrumbTransition=_breadcrumbTransition - In the implementation block
@property (assign,getter=isInlineAppExposeTransition,nonatomic) BOOL inlineAppExposeTransition;               //@synthesize inlineAppExposeTransition=_inlineAppExposeTransition - In the implementation block
@property (assign,getter=isMorphToPiPTransition,nonatomic) BOOL morphToPiPTransition;                         //@synthesize morphToPiPTransition=_morphToPiPTransition - In the implementation block
@property (assign,getter=isContinuityTransition,nonatomic) BOOL continuityTransition;                         //@synthesize continuityTransition=_continuityTransition - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)fromAppLayoutWantsExclusiveForeground;
-(void)setFromAppLayoutWantsExclusiveForeground:(BOOL)arg1 ;
-(BOOL)toAppLayoutWantsExclusiveForeground;
-(void)setToAppLayoutWantsExclusiveForeground:(BOOL)arg1 ;
-(SBAppLayout *)fromFloatingAppLayout;
-(void)setFromFloatingAppLayout:(SBAppLayout *)arg1 ;
-(long long)fromFloatingConfiguration;
-(void)setFromFloatingConfiguration:(long long)arg1 ;
-(BOOL)fromFloatingSwitcherVisible;
-(void)setFromFloatingSwitcherVisible:(BOOL)arg1 ;
-(SBAppLayout *)toFloatingAppLayout;
-(void)setToFloatingAppLayout:(SBAppLayout *)arg1 ;
-(long long)toFloatingConfiguration;
-(void)setToFloatingConfiguration:(long long)arg1 ;
-(BOOL)toFloatingSwitcherVisible;
-(void)setToFloatingSwitcherVisible:(BOOL)arg1 ;
-(NSString *)fromAppExposeBundleID;
-(void)setFromAppExposeBundleID:(NSString *)arg1 ;
-(NSString *)toAppExposeBundleID;
-(void)setToAppExposeBundleID:(NSString *)arg1 ;
-(SBApplicationSceneEntityDestructionIntent *)intentForEntityRemoval;
-(void)setIntentForEntityRemoval:(SBApplicationSceneEntityDestructionIntent *)arg1 ;
-(unsigned long long)fromInlineAppExposeRoles;
-(void)setFromInlineAppExposeRoles:(unsigned long long)arg1 ;
-(unsigned long long)toInlineAppExposeRoles;
-(void)setToInlineAppExposeRoles:(unsigned long long)arg1 ;
-(BOOL)isGestureInitiated;
-(void)setGestureInitiated:(BOOL)arg1 ;
-(BOOL)isDragAndDropTransition;
-(void)setDragAndDropTransition:(BOOL)arg1 ;
-(BOOL)isBreadcrumbTransition;
-(void)setBreadcrumbTransition:(BOOL)arg1 ;
-(BOOL)isInlineAppExposeTransition;
-(void)setInlineAppExposeTransition:(BOOL)arg1 ;
-(BOOL)isMorphToPiPTransition;
-(void)setMorphToPiPTransition:(BOOL)arg1 ;
-(BOOL)isContinuityTransition;
-(void)setContinuityTransition:(BOOL)arg1 ;
@end

